#pragma once

#include <guiddef.h>
#include <string>

#define DECL_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)                                 \
    constexpr GUID name = {l, w1, w2, {b1, b2, b3, b4, b5, b6, b7, b8}}

namespace jkgm {
    DECL_GUID(IID_IDirectDraw,
              0x6C14DB80,
              0xA733,
              0x11CE,
              0xA5,
              0x21,
              0x00,
              0x20,
              0xAF,
              0x0B,
              0xE5,
              0x60);
    DECL_GUID(IID_IDirectDraw2,
              0xB3A6F3E0,
              0x2B43,
              0x11CF,
              0xA2,
              0xDE,
              0x00,
              0xAA,
              0x00,
              0xB9,
              0x33,
              0x56);
    DECL_GUID(IID_IDirectDraw4,
              0x9c59509a,
              0x39bd,
              0x11d1,
              0x8c,
              0x4a,
              0x00,
              0xc0,
              0x4f,
              0xd9,
              0x30,
              0xc5);
    DECL_GUID(IID_IDirectDraw7,
              0x15e65ec0,
              0x3b9c,
              0x11d2,
              0xb9,
              0x2f,
              0x00,
              0x60,
              0x97,
              0x97,
              0xea,
              0x5b);
    DECL_GUID(IID_IDirectDrawSurface,
              0x6C14DB81,
              0xA733,
              0x11CE,
              0xA5,
              0x21,
              0x00,
              0x20,
              0xAF,
              0x0B,
              0xE5,
              0x60);
    DECL_GUID(IID_IDirectDrawSurface2,
              0x57805885,
              0x6eec,
              0x11cf,
              0x94,
              0x41,
              0xa8,
              0x23,
              0x03,
              0xc1,
              0x0e,
              0x27);
    DECL_GUID(IID_IDirectDrawSurface3,
              0xDA044E00,
              0x69B2,
              0x11D0,
              0xA1,
              0xD5,
              0x00,
              0xAA,
              0x00,
              0xB8,
              0xDF,
              0xBB);
    DECL_GUID(IID_IDirectDrawSurface4,
              0x0B2B8630,
              0xAD35,
              0x11D0,
              0x8E,
              0xA6,
              0x00,
              0x60,
              0x97,
              0x97,
              0xEA,
              0x5B);
    DECL_GUID(IID_IDirectDrawSurface7,
              0x06675a80,
              0x3b9b,
              0x11d2,
              0xb9,
              0x2f,
              0x00,
              0x60,
              0x97,
              0x97,
              0xea,
              0x5b);
    DECL_GUID(IID_IDirectDrawPalette,
              0x6C14DB84,
              0xA733,
              0x11CE,
              0xA5,
              0x21,
              0x00,
              0x20,
              0xAF,
              0x0B,
              0xE5,
              0x60);
    DECL_GUID(IID_IDirectDrawClipper,
              0x6C14DB85,
              0xA733,
              0x11CE,
              0xA5,
              0x21,
              0x00,
              0x20,
              0xAF,
              0x0B,
              0xE5,
              0x60);
    DECL_GUID(IID_IDirectDrawColorControl,
              0x4B9F0EE0,
              0x0D7E,
              0x11D0,
              0x9B,
              0x06,
              0x00,
              0xA0,
              0xC9,
              0x03,
              0xA3,
              0xB8);
    DECL_GUID(IID_IDirectDrawGammaControl,
              0x69C11C3E,
              0xB46B,
              0x11D1,
              0xAD,
              0x7A,
              0x00,
              0xC0,
              0x4F,
              0xC2,
              0x9B,
              0x4E);
    DECL_GUID(IID_IDirect3D,
              0x3BBA0080,
              0x2421,
              0x11CF,
              0xA3,
              0x1A,
              0x00,
              0xAA,
              0x00,
              0xB9,
              0x33,
              0x56);
    DECL_GUID(IID_IDirect3D2,
              0x6aae1ec1,
              0x662a,
              0x11d0,
              0x88,
              0x9d,
              0x00,
              0xaa,
              0x00,
              0xbb,
              0xb7,
              0x6a);
    DECL_GUID(IID_IDirect3D3,
              0xbb223240,
              0xe72b,
              0x11d0,
              0xa9,
              0xb4,
              0x00,
              0xaa,
              0x00,
              0xc0,
              0x99,
              0x3e);
    DECL_GUID(IID_IDirect3D7,
              0xf5049e77,
              0x4861,
              0x11d2,
              0xa4,
              0x7,
              0x0,
              0xa0,
              0xc9,
              0x6,
              0x29,
              0xa8);
    DECL_GUID(IID_IDirect3DRampDevice,
              0xF2086B20,
              0x259F,
              0x11CF,
              0xA3,
              0x1A,
              0x00,
              0xAA,
              0x00,
              0xB9,
              0x33,
              0x56);
    DECL_GUID(IID_IDirect3DRGBDevice,
              0xA4665C60,
              0x2673,
              0x11CF,
              0xA3,
              0x1A,
              0x00,
              0xAA,
              0x00,
              0xB9,
              0x33,
              0x56);
    DECL_GUID(IID_IDirect3DHALDevice,
              0x84E63dE0,
              0x46AA,
              0x11CF,
              0x81,
              0x6F,
              0x00,
              0x00,
              0xC0,
              0x20,
              0x15,
              0x6E);
    DECL_GUID(IID_IDirect3DMMXDevice,
              0x881949a1,
              0xd6f3,
              0x11d0,
              0x89,
              0xab,
              0x00,
              0xa0,
              0xc9,
              0x05,
              0x41,
              0x29);
    DECL_GUID(IID_IDirect3DRefDevice,
              0x50936643,
              0x13e9,
              0x11d1,
              0x89,
              0xaa,
              0x0,
              0xa0,
              0xc9,
              0x5,
              0x41,
              0x29);
    DECL_GUID(IID_IDirect3DNullDevice,
              0x8767df22,
              0xbacc,
              0x11d1,
              0x89,
              0x69,
              0x0,
              0xa0,
              0xc9,
              0x6,
              0x29,
              0xa8);
    DECL_GUID(IID_IDirect3DTnLHalDevice,
              0xf5049e78,
              0x4861,
              0x11d2,
              0xa4,
              0x7,
              0x0,
              0xa0,
              0xc9,
              0x6,
              0x29,
              0xa8);
    DECL_GUID(IID_IDirect3DDevice,
              0x64108800,
              0x957d,
              0X11d0,
              0x89,
              0xab,
              0x00,
              0xa0,
              0xc9,
              0x05,
              0x41,
              0x29);
    DECL_GUID(IID_IDirect3DDevice2,
              0x93281501,
              0x8cf8,
              0x11d0,
              0x89,
              0xab,
              0x0,
              0xa0,
              0xc9,
              0x5,
              0x41,
              0x29);
    DECL_GUID(IID_IDirect3DDevice3,
              0xb0ab3b60,
              0x33d7,
              0x11d1,
              0xa9,
              0x81,
              0x0,
              0xc0,
              0x4f,
              0xd7,
              0xb1,
              0x74);
    DECL_GUID(IID_IDirect3DDevice7,
              0xf5049e79,
              0x4861,
              0x11d2,
              0xa4,
              0x7,
              0x0,
              0xa0,
              0xc9,
              0x6,
              0x29,
              0xa8);
    DECL_GUID(IID_IDirect3DTexture,
              0x2CDCD9E0,
              0x25A0,
              0x11CF,
              0xA3,
              0x1A,
              0x00,
              0xAA,
              0x00,
              0xB9,
              0x33,
              0x56);
    DECL_GUID(IID_IDirect3DTexture2,
              0x93281502,
              0x8cf8,
              0x11d0,
              0x89,
              0xab,
              0x0,
              0xa0,
              0xc9,
              0x5,
              0x41,
              0x29);
    DECL_GUID(IID_IDirect3DLight,
              0x4417C142,
              0x33AD,
              0x11CF,
              0x81,
              0x6F,
              0x00,
              0x00,
              0xC0,
              0x20,
              0x15,
              0x6E);
    DECL_GUID(IID_IDirect3DMaterial,
              0x4417C144,
              0x33AD,
              0x11CF,
              0x81,
              0x6F,
              0x00,
              0x00,
              0xC0,
              0x20,
              0x15,
              0x6E);
    DECL_GUID(IID_IDirect3DMaterial2,
              0x93281503,
              0x8cf8,
              0x11d0,
              0x89,
              0xab,
              0x0,
              0xa0,
              0xc9,
              0x5,
              0x41,
              0x29);
    DECL_GUID(IID_IDirect3DMaterial3,
              0xca9c46f4,
              0xd3c5,
              0x11d1,
              0xb7,
              0x5a,
              0x0,
              0x60,
              0x8,
              0x52,
              0xb3,
              0x12);
    DECL_GUID(IID_IDirect3DExecuteBuffer,
              0x4417C145,
              0x33AD,
              0x11CF,
              0x81,
              0x6F,
              0x00,
              0x00,
              0xC0,
              0x20,
              0x15,
              0x6E);
    DECL_GUID(IID_IDirect3DViewport,
              0x4417C146,
              0x33AD,
              0x11CF,
              0x81,
              0x6F,
              0x00,
              0x00,
              0xC0,
              0x20,
              0x15,
              0x6E);
    DECL_GUID(IID_IDirect3DViewport2,
              0x93281500,
              0x8cf8,
              0x11d0,
              0x89,
              0xab,
              0x0,
              0xa0,
              0xc9,
              0x5,
              0x41,
              0x29);
    DECL_GUID(IID_IDirect3DViewport3,
              0xb0ab3b61,
              0x33d7,
              0x11d1,
              0xa9,
              0x81,
              0x0,
              0xc0,
              0x4f,
              0xd7,
              0xb1,
              0x74);
    DECL_GUID(IID_IDirect3DVertexBuffer,
              0x7a503555,
              0x4a83,
              0x11d1,
              0xa5,
              0xdb,
              0x0,
              0xa0,
              0xc9,
              0x3,
              0x67,
              0xf8);
    DECL_GUID(IID_IDirect3DVertexBuffer7,
              0xf5049e7d,
              0x4861,
              0x11d2,
              0xa4,
              0x7,
              0x0,
              0xa0,
              0xc9,
              0x6,
              0x29,
              0xa8);

    DECL_GUID(ReusablePrimaryDirect3DDevice,
              0x1234,
              0x1234,
              0x1234,
              0xFE,
              0xEF,
              0xFE,
              0xEF,
              0xFE,
              0xEF,
              0xFE,
              0xEF);

    char const * to_string(REFIID riid);
}