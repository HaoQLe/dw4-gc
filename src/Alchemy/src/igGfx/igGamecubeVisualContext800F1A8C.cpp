// igGamecubeVisualContext: frame start and end (0x800F1A8C..0x800F1C40): the frame timer, the frame-rate
// display, and the copy to the external frame buffers.
#include "igGamecubeVisualContext.h"

class GcTimer {
public:
    virtual void slot08(); virtual void slot0C(); virtual void slot10(); virtual void slot14(); virtual void slot18();
    virtual void slot1C(); virtual void slot20(); virtual void slot24(); virtual void slot28(); virtual void slot2C();
    virtual void slot30(); virtual void slot34(); virtual void slot38(); virtual void slot3C(); virtual void slot40();
    virtual void slot44(); virtual void slot48(); virtual void slot4C(); virtual void slot50(); virtual void slot54();
    virtual void slot58(); virtual void slot5C(); virtual void slot60();
    virtual double time();   // 0x64
    virtual void slot68(); virtual void slot6C(); virtual void slot70();
    virtual void slot74();
};

// Frame statistics (lbl_804F6180).
struct GcFrameStats {
    float frames;
    unsigned char unknown04[0x1C];
    int unknown20;
};

extern "C" {
extern GcFrameStats lbl_804F6180;
extern const float lbl_805668C8;   // 1.0f
extern const float lbl_805668CC;   // 0.0f
void GXSetDrawSync(unsigned short token);
void GXSetZMode(unsigned char compareEnable, int func, unsigned char updateEnable);
void GXSetColorUpdate(unsigned char enable);
void GXSetAlphaUpdate(unsigned char enable);
void GXCopyDisp(void *dest, unsigned char clear);
void GXDrawDone(void);
void VISetNextFrameBuffer(void *frameBuffer);
void VIFlush(void);
void VIWaitForRetrace(void);
}

static inline GcTimer *timerOf(GcVisualContext *self) { return reinterpret_cast<GcTimer *>(self->_timer); }

extern "C" {
int igGamecubeVisualContext_virtual2B4(GcVisualContext *self)
{
    self->_frameStartTime = timerOf(self)->time();
    return 1;
}

void igGamecubeVisualContext_virtual2B8(GcVisualContext *self)
{
    float now = lbl_805668CC;
    if (self->_showFrameRate) {
        now = timerOf(self)->time();
        timerOf(self)->slot74();
    }
    GXSetDrawSync(0xAB);
    if (self->_showFrameRate) {
        virtuals(self)->drawFrameRate(now, now - self->_frameStartTime);
        virtuals(self)->slot074(now);
        self->_primitiveCount = 0;
    }
    self->unknown418 = 3;
    self->clearColorSent = self->clearColor;
    self->clearDepthSent = self->clearDepth;
    GXSetZMode(1, 7, 1);
    self->dirty |= GC_DIRTY_01;
    GXSetColorUpdate(1);
    GXSetAlphaUpdate(1);
    self->dirty |= GC_DIRTY_02;
    GXCopyDisp(self->frameBuffer, 1);
    GXDrawDone();
    VISetNextFrameBuffer(self->frameBuffer);
    VIFlush();
    VIWaitForRetrace();
    if (self->frameBuffer == self->frameBuffer0) self->frameBuffer = self->frameBuffer1;
    else self->frameBuffer = self->frameBuffer0;
    lbl_804F6180.frames += lbl_805668C8;
}
}
