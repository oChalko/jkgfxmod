#version 330 core
#extension GL_ARB_explicit_uniform_location : require

layout(location = 1) uniform vec4 features;

layout(location = 2) uniform sampler2D albedo_map;
layout(location = 3) uniform vec4 albedo_factor;

layout(location = 4) uniform sampler2D emissive_map;
layout(location = 5) uniform vec3 emissive_factor;

layout(location = 6) uniform float alpha_cutoff;

layout(location = 7) uniform sampler2D ssao_map;

in vec2 vp_texcoords;
in vec4 vp_color;

layout(location = 0) out vec4 out_color;

void main()
{
    vec4 albedo_map_sample = texture(albedo_map, vp_texcoords);
    albedo_map_sample = mix(vec4(1.0), albedo_map_sample, features.x);

    if(features.z > 0.5) {
        if(albedo_map_sample.a < alpha_cutoff) {
            discard;
        }

        albedo_map_sample.a = 1.0;
    }

    vec4 albedo = albedo_map_sample * vp_color * albedo_factor;

    vec3 emissive_map_sample = texture(emissive_map, vp_texcoords).rgb;
    emissive_map_sample = mix(vec3(1.0), emissive_map_sample, features.y);
    vec3 emissive = emissive_map_sample * emissive_factor;

    if(albedo.a < 0.99999f) {
        discard;
    }

    vec4 ssao_sample = texelFetch(ssao_map, ivec2(gl_FragCoord.xy), 0);
    float ssao_factor = 1.0 - ssao_sample.r;

    out_color = vec4(emissive + (albedo.rgb * vec3(ssao_factor)), albedo.a);
}