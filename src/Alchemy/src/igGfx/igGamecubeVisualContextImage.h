// igGamecubeVisualContext: the image fields and virtual functions the driver uses.
#ifndef IGGFX_IGGAMECUBEVISUALCONTEXTIMAGE_H
#define IGGFX_IGGAMECUBEVISUALCONTEXTIMAGE_H
#include "igGamecubeVisualContext.h"

// An image (Alchemy's igImage names: _px, _py, _pz, _pfmt).
struct GcImage : Meta::igObject {
    int px;                     // 0x08: width
    int py;                     // 0x0C: height
    int pz;                     // 0x10
    unsigned char unknown14[0x4];
    int pfmt;                   // 0x18: pixel format
    unsigned char unknown1C[0x10];
    int unknown2C;              // 0x2C: mapped to an entry of lbl_804906A4
    unsigned char unknown30[0x4];
    void *unknown34;            // 0x34: the pixels
};

// The image's virtual functions.
class GcImageVirtuals {
public:
    virtual void slot08(); virtual void slot0C(); virtual void slot10(); virtual void slot14(); virtual void slot18();
    virtual void slot1C(); virtual void slot20(); virtual void slot24(); virtual void slot28(); virtual void slot2C();
    virtual void slot30(); virtual void slot34(); virtual void slot38(); virtual void slot3C(); virtual void slot40();
    virtual void slot44(); virtual void slot48(); virtual void slot4C(); virtual void slot50(); virtual void slot54();
    virtual void slot58();
    virtual void slot5C(GcImage *source, int);               // 0x5C
    virtual void slot60();
    virtual void slot64(int width, int height, GcImage *);   // 0x64
    virtual void slot68(); virtual void slot6C();
    virtual void slot70(int width);                          // 0x70
    virtual void slot74(int height);                         // 0x74
    virtual void slot78(int format);                         // 0x78
    virtual void slot7C();                                   // 0x7C: allocates the pixels
    virtual void slot80(int);                                // 0x80
    virtual void slot84();
    virtual void slot88();                                   // 0x88
};
static inline GcImageVirtuals *virtuals(GcImage *image) { return reinterpret_cast<GcImageVirtuals *>(image); }

extern "C" GcImage *igImage_create(void *pool);

#endif
