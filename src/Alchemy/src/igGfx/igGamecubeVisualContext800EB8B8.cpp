// igGamecubeVisualContext: copying part of the frame into an image (0x800EB8B8..0x800EBC94). Owns its
// switch table (jumptable_804901E4).
#include "igGamecubeVisualContextImage.h"

// One of the 20 copy formats (lbl_80490054, 0x14 bytes each).
struct GcCopyFormat {
    int format;                 // the format chosen from the 0x3F0 record
    int imageFormat;            // 0x04: the image's format after the copy
    int texFormat;              // 0x08: the GX texture format copied to
    signed char widthAlign;     // 0x0C: the width is rounded up to a multiple of this
    signed char unknown0D;
    signed char unknown0E;
    unsigned char unknown0F[0x5];
};

extern "C" {
extern GcCopyFormat lbl_80490054[20];
GcMemoryPool *fn_800E97D0(GcVisualContext *self);   // the pool for copied pixels
void fn_800EB518(void *source, void *destination, int width, int height, int, int, int);   // converts copied pixels
void fn_800DF134(GcImage *image, void *pixels, int format, int width, int height);
void fn_800DB970(GcImage *image, int format, GcImage *source);
unsigned int GXGetTexBufferSize(unsigned short width, unsigned short height, unsigned int format, unsigned char mipmap,
                                unsigned char maxLod);
void GXSetTexCopyDst(unsigned short width, unsigned short height, int format, unsigned char mipmap);
void GXSetTexCopySrc(unsigned short left, unsigned short top, unsigned short width, unsigned short height);
void GXCopyTex(void *dest, unsigned char clear);
void GXPixModeSync(void);
void GXFlush(void);
void GXDrawDone(void);
void DCFlushRange(void *start, unsigned int size);
}

// A local reference that owns a new object (no count added), released when it goes out of scope.
template <class T> struct GcOwned {
    T *object;
    inline GcOwned(T *o) : object(o) {}
    inline ~GcOwned() { if (object) release(object); }
};

extern "C" {
int igGamecubeVisualContext_virtual2B0(GcVisualContext *self, int index, GcImage *image, int left, int top, int width,
                                       int height)
{
    GcRecord3F0 *record = &self->unknown3F0->data[index];
    int depth = record->unknown10;
    int format;
    switch (record->unknown08) {
    // The original compiles to a jump table, so it had at least two separate case labels here (MWCC
    // needs four case ranges); which values they were is unknown.
    case 2: case 4:
    default:
        switch (depth) {
        case 0:
            format = 10;
            break;
        default:
            format = 12;
            break;
        }
        break;
    case 0:
        format = 1;
        break;
    case 24:
        switch (depth) {
        case 0:
            format = 5;
            break;
        case 8:
        default:
            format = 7;
            break;
        }
        break;
    }

    unsigned int i;
    for (i = 0; i < 20; i++) {
        if (format == lbl_80490054[i].format) break;
    }
    if (i == 20) return 0;
    GcCopyFormat *entry = &lbl_80490054[i];
    int texFormat = entry->texFormat;
    int imageFormat = entry->imageFormat;
    int align = entry->widthAlign;
    int unknown0D = entry->unknown0D;
    int unknown0E = entry->unknown0E;
    int mask = align - 1;
    int copyWidth = (width + mask) & ~mask;

    unsigned int size = GXGetTexBufferSize(copyWidth, height, texFormat, 0, 0);
    void *copy = fn_800E97D0(self)->allocate(size, 32);
    if (!copy) return 0;
    GXSetTexCopyDst(copyWidth, height, texFormat, 0);
    GXSetTexCopySrc(left, top, copyWidth, height);
    DCFlushRange(copy, size);
    GXFlush();
    GXDrawDone();
    GXCopyTex(copy, 0);
    GXFlush();
    GXPixModeSync();
    GXDrawDone();

    if (imageFormat != format) {
        // Converted into a new image, then copied into the given one.
        void *pixels = fn_800E97D0(self)->allocate(size, 32);
        if (!pixels) {
            fn_800E97D0(self)->free(copy);
            return 0;
        }
        fn_800EB518(copy, pixels, copyWidth, height, unknown0E, align, unknown0D);
        fn_800E97D0(self)->free(copy);
        GcOwned<GcImage> converted(igImage_create(fn_800E97D0(self)));
        fn_800DF134(converted.object, pixels, imageFormat, copyWidth, height);
        fn_800DB970(image, format, converted.object);
        virtuals(image)->slot80(0x67);
        fn_800E97D0(self)->free(pixels);
    } else {
        if (!image->unknown34 || copyWidth != image->px || height != image->py) {
            virtuals(image)->slot70(copyWidth);
            virtuals(image)->slot74(height);
            virtuals(image)->slot78(imageFormat);
            virtuals(image)->slot7C();
        }
        fn_800EB518(copy, image->unknown34, copyWidth, height, unknown0E, align, unknown0D);
        virtuals(image)->slot80(0x67);
        fn_800E97D0(self)->free(copy);
    }
    return 1;
}
}
