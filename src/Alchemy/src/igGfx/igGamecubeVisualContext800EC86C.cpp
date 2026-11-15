// igGamecubeVisualContext: opening the display (0x800EC86C..0x800ECD1C): the render mode, GX, the two
// external frame buffers and the copy settings. Slot 0x28 undoes it.
// NonMatching (96.6%): everything after the record search is exact. The search loop with an early exit
// becomes a ctr loop here; the original re-reads the pool's counts on every pass (the open early-exit loop
// pattern of the file list and sound batches; a goto-written loop does the same).
#include "igGamecubeVisualContext.h"
#include <game/Pool.h>

// The SDK's render mode (GXRenderModeObj).
struct GcRenderMode {
    int viTVmode;
    unsigned short fbWidth;            // 0x04
    unsigned short efbHeight;          // 0x06
    unsigned short xfbHeight;          // 0x08
    unsigned short viXOrigin;          // 0x0A
    unsigned short viYOrigin;          // 0x0C
    unsigned short viWidth;            // 0x0E
    unsigned short viHeight;           // 0x10
    int xFBmode;                       // 0x14
    unsigned char field_rendering;     // 0x18
    unsigned char aa;                  // 0x19
    unsigned char sample_pattern[12][2];   // 0x1A
    unsigned char vfilter[7];          // 0x32
};

extern "C" {
extern GcRenderMode GXNtsc480Int, GXNtsc240DsAa, GXNtsc480IntDf, GXNtsc240IntAa, GXNtsc480IntAa;
extern GcRenderMode GXPal528Int, GXPal264DsAa, GXPal528IntDf, GXPal264IntAa, GXPal524IntAa;
extern GcRenderMode GXMpal480Int, GXMpal240DsAa, GXMpal480IntDf, GXMpal240IntAa, GXMpal480IntAa;
extern GcRenderMode GXEurgb60Hz480Int, GXEurgb60Hz240DsAa, GXEurgb60Hz480IntDf, GXEurgb60Hz240IntAa, GXEurgb60Hz480IntAa;
extern GcRenderMode GXNtsc480Prog, GXNtsc480ProgAa;
extern void *lbl_805621F0;            // the pool source for the frame buffers
extern const GXColor lbl_80566948;    // the clear colour of the first copies
extern const GXColor lbl_80567600;    // the clear colour of the second copies
void fn_800FC170();
void fn_800F8C6C(GcVisualContext *self);
GcMemoryPool *fn_800E97B8(GcVisualContext *self);   // _driverDataMemoryPool
void VIInit();
void VIConfigure(const GcRenderMode *mode);
void VIFlush();
void VIWaitForRetrace();
void VISetNextFrameBuffer(void *frameBuffer);
void VISetBlack(int black);
void DCFlushRange(void *memory, unsigned int size);
void *GXInit(void *fifo, unsigned int size);
void GXSetMisc(int token, unsigned int value);
void GXInvalidateVtxCache();
void GXInvalidateTexAll();
void GXDrawDone();
void GXSetScissor(unsigned int left, unsigned int top, unsigned int width, unsigned int height);
void GXSetDispCopySrc(unsigned short left, unsigned short top, unsigned short width, unsigned short height);
float GXGetYScaleFactor(unsigned short efbHeight, unsigned short xfbHeight);
unsigned int GXSetDispCopyYScale(float scale);
void GXSetDispCopyDst(unsigned short width, unsigned short height);
void GXSetCopyFilter(unsigned char aa, const unsigned char samplePattern[12][2], unsigned char verticalFilter,
                     const unsigned char filter[7]);
void GXSetPixelFmt(int pixelFormat, int zFormat);
void GXSetFieldMode(unsigned char fieldMode, unsigned char halfAspectRatio);
void GXSetDispCopyGamma(int gamma);
void GXCopyDisp(void *destination, unsigned char clear);
}

// Whether a 0x3F0 record can be drawn to (types 0..2).
#define GC_DRAWABLE(record) ((record)->unknown1C == 0 || (record)->unknown1C == 1 || (record)->unknown1C == 2)

extern "C" {
GcResult igGamecubeVisualContext_virtual80(GcVisualContext *self)
{
    virtuals(self)->slot07C();
    fn_800FC170();
    GcPool<GcRecord3F0> *pool = self->unknown3F0;
    GcRecord3F0 *record = &pool->data[self->unknown3F4];
    if (record->unknown1C == 0) goto found;
    if (record->unknown1C == 1) goto found;
    if (record->unknown1C == 2) goto found;
    record = 0;
    for (int i = 0; i < pool->count - pool->freeCount; i++) {
        GcRecord3F0 *candidate = &pool->data[i];
        record = candidate;
        if (candidate->unknown1C == 0 || candidate->unknown1C == 1 || candidate->unknown1C == 2) {
            self->unknown3F4 = i;
            break;
        }
    }
found:
    if (!record) return kFailure__3Gap;

    virtuals(self)->slot0D8(self->unknown3F4);
    int result = virtuals(self)->slot0DC(self->unknown3F4);
    virtuals(self)->slot0E0(self->unknown3F4);
    int pixelFormat;
    if (result > 0) {
        record->unknown08 = 0x12;
        record->unknown10 = 6;
        record->unknown0C = 0x18;
        pixelFormat = 1;
    } else {
        record->unknown08 = 0x18;
        record->unknown10 = 0;
        record->unknown0C = 0x18;
        pixelFormat = 0;
    }
    record->unknown14 = 0;
    self->unknown6D8 = fn_800E97B8(self)->allocate(0x10000, 0x20);

    VIInit();
    GcRenderMode *modes[25] = {
        &GXNtsc480Int, &GXNtsc240DsAa, &GXNtsc480IntDf, &GXNtsc240IntAa, &GXNtsc480IntAa,
        &GXPal528Int, &GXPal264DsAa, &GXPal528IntDf, &GXPal264IntAa, &GXPal524IntAa,
        &GXMpal480Int, &GXMpal240DsAa, &GXMpal480IntDf, &GXMpal240IntAa, &GXMpal480IntAa,
        &GXEurgb60Hz480Int, &GXEurgb60Hz240DsAa, &GXEurgb60Hz480IntDf, &GXEurgb60Hz240IntAa, &GXEurgb60Hz480IntAa,
        &GXNtsc480Prog, &GXNtsc480Prog, &GXNtsc480Prog, &GXNtsc480Prog, &GXNtsc480ProgAa,
    };
    int index = 0;
    switch (self->tvFormat) {
    case 0: index = 0; break;
    case 1: index = 5; break;
    case 4: index = 10; break;
    case 5: index = 15; break;
    case 6: index = 20; break;
    }
    if (self->unknown508) {
        if (self->unknown504 == 1) index += 2;
        else if (self->unknown500 != 2) index += 3;
    } else {
        index += 1;
    }
    GcRenderMode *mode = modes[index];
    VIConfigure(mode);
    VIFlush();
    DCFlushRange(self->unknown6D8, 0x10000);
    GXInit(self->unknown6D8, 0x10000);
    GXSetMisc(1, 8);
    GXInvalidateVtxCache();
    VIWaitForRetrace();

    unsigned int size = (unsigned short)((mode->fbWidth + 15) & ~15) * mode->xfbHeight * 2;
    self->frameBuffer0 = static_cast<GcMemoryPool *>(poolFor(self, reinterpret_cast<char *>(&lbl_805621F0)))->allocate(size, 0x20);
    self->frameBuffer1 = static_cast<GcMemoryPool *>(poolFor(self, reinterpret_cast<char *>(&lbl_805621F0)))->allocate(size, 0x20);
    DCFlushRange(self->frameBuffer0, size);
    DCFlushRange(self->frameBuffer1, size);
    self->frameBuffer = self->frameBuffer1;

    GXSetScissor(0, 0, mode->fbWidth, mode->efbHeight);
    GXSetDispCopySrc(0, 0, mode->fbWidth, mode->efbHeight);
    unsigned int lines = GXSetDispCopyYScale(GXGetYScaleFactor(mode->efbHeight, mode->xfbHeight));
    self->copyWidth = mode->fbWidth;
    self->copyHeight = lines;
    GXSetDispCopyDst(mode->fbWidth, lines);
    GXSetCopyFilter(mode->aa, mode->sample_pattern, 1, mode->vfilter);
    if (mode->aa) {
        record->unknown08 = 0x10;
        record->unknown10 = 0;
        record->unknown0C = 0x10;
        pixelFormat = 2;
    }
    GXSetPixelFmt(pixelFormat, 0);
    GXSetFieldMode(mode->field_rendering, mode->xfbHeight < mode->viHeight);
    GXSetDispCopyGamma(0);
    GXColor clear0 = lbl_80566948;
    GXSetCopyClear(clear0, 0xFFFFFF);
    GXColor clear1 = lbl_80567600;
    GXSetCopyClear(clear1, 0xFFFFFF);
    GXCopyDisp(self->frameBuffer0, 1);
    GXCopyDisp(self->frameBuffer1, 1);
    GXDrawDone();
    VISetNextFrameBuffer(self->frameBuffer1);
    self->frameBuffer = self->frameBuffer1;
    VIFlush();
    VIWaitForRetrace();
    VIFlush();
    GXInvalidateTexAll();
    fn_800F8C6C(self);
    self->unknown141 = true;
    VISetBlack(0);
    VIFlush();
    return kSuccess__3Gap;
}
}
