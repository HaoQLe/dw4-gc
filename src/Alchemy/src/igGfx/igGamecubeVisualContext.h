// igGamecubeVisualContext: Alchemy's GameCube render-state context (size 0x6E8, base igVisualContext).
// The reflected fields end at 0x140; the driver's own state after that is recovered here from the code that
// uses it. Names say what the code shows; offsets keep the rest.
#ifndef IGGFX_IGGAMECUBEVISUALCONTEXT_H
#define IGGFX_IGGAMECUBEVISUALCONTEXT_H
#include <meta/igVisualContext.h>
#include <meta/igDataList.h>

extern "C" {
void *memset(void *dst, int value, unsigned long size);
void fn_80041660(void *list, int count, int elementSize);   // grows a list's storage to count elements
void fn_80041C10(void *list, int index);                    // removes element index, shifting later ones down
}

// Vectors as the driver keeps them, copied member by member.
struct GcVec3 {
    float x, y, z;
};
struct GcVec4 {
    float x, y, z, w;
};
static inline void set(GcVec3 &v, const float *src)
{
    v.x = src[0];
    v.y = src[1];
    v.z = src[2];
}
static inline void set(GcVec4 &v, const float *src)
{
    v.x = src[0];
    v.y = src[1];
    v.z = src[2];
    v.w = src[3];
}
static inline void get(float *dst, const GcVec3 &v)
{
    float z = v.z, y = v.y, x = v.x;
    dst[0] = x;
    dst[1] = y;
    dst[2] = z;
}
static inline void get(float *dst, const GcVec4 &v)
{
    float w = v.w, z = v.z, y = v.y, x = v.x;
    dst[0] = x;
    dst[1] = y;
    dst[2] = z;
    dst[3] = w;
}

struct GcRecord144;

// A 0x2C-byte record in the list at 0x3F0.
struct GcRecord3F0 {
    int unknown00;
    int unknown04;
    int unknown08;
    int unknown0C;
    int unknown10;
    int unknown14;
    float unknown18;
    int unknown1C;
    int unknown20;
    GcRecord144 *unknown24;
    int unknown28;
};

// A 0xA4-byte record in the list at 0x144.
struct GcRecord144 {
    int unknown00;
    int format;                 // 0x04: passed to GXGetTexBufferSize
    int unknown08;
    int unknown0C;
    int unknown10;
    int unknown14;
    int unknown18;
    unsigned char unknown1C[0x4];
    int width;                  // 0x20
    int height;                 // 0x24
    unsigned char unknown28[0x8];
    Meta::igObject *unknown30;  // 0x30: a counted reference
    void *buffer;               // 0x34: GXGetTexBufferSize bytes, 32-byte aligned
    unsigned char unknown38[0x10];
    int unknown48;
    unsigned char unknown4C[0x3C];
    unsigned int flags;         // 0x88: settings changed since sent
    Meta::igObject *unknown8C;  // 0x8C: owned when ownsUnknown8C is set
    void *unknown90;
    int format94;               // 0x94: chosen from the channel sizes at 0x9C
    unsigned char unknown98[0x4];
    unsigned char unknown9C[4]; // 0x9C: four channel sizes
    bool ownsUnknown8C;         // 0xA0
    unsigned char unknownA1[3];
};

// A light (0xA8 bytes), kept in the light pool at 0x4F0.
struct GcLight {
    GcVec4 color00;        // three RGBA colours, set and read whole
    GcVec4 color10;
    GcVec4 color20;
    GcVec3 direction;      // 0x30: stored negated for a directional light (type 0)
    GcVec3 position;       // 0x3C
    float unknown48;       // set when the light is enabled: 0 (type 0) or 1 (types 1, 2)
    float unknown4C;       // set to 180 when the light is enabled (types 0, 1)
    float unknown50;
    GcVec3 unknown54;
    int type;              // 0x60: 0 directional, 1, 2 (the direction is kept as given)
    float unknown64[16];
    bool enabled;          // 0xA4: in the active-light list
    unsigned char unknownA5[3];
};

// The memory pool that owns an allocation, and its reallocation slot.
class GcMemoryPool {
public:
    virtual void slot08(); virtual void slot0C(); virtual void slot10(); virtual void slot14(); virtual void slot18();
    virtual void slot1C(); virtual void slot20(); virtual void slot24(); virtual void slot28(); virtual void slot2C();
    virtual void slot30(); virtual void slot34(); virtual void slot38(); virtual void slot3C(); virtual void slot40();
    virtual void slot44(); virtual void slot48(); virtual void slot4C(); virtual void slot50(); virtual void slot54();
    virtual void slot58(); virtual void slot5C(); virtual void slot60(); virtual void slot64(); virtual void slot68();
    virtual void slot6C(); virtual void slot70(); virtual void slot74(); virtual void slot78(); virtual void slot7C();
    virtual void slot80(); virtual void slot84(); virtual void slot88(); virtual void slot8C(); virtual void slot90();
    virtual void slot94(); virtual void slot98(); virtual void slot9C(); virtual void slotA0(); virtual void slotA4();
    virtual void slotA8(); virtual void slotAC(); virtual void slotB0(); virtual void slotB4(); virtual void slotB8();
    virtual void slotBC(); virtual void slotC0(); virtual void slotC4(); virtual void slotC8(); virtual void slotCC();
    virtual void slotD0(); virtual void slotD4(); virtual void slotD8();
    virtual void *allocate(unsigned int size, unsigned int align);   // 0xDC
    virtual void slotE0(); virtual void slotE4();
    virtual void *reallocate(void *memory, unsigned int size);   // 0xE8
};
extern "C" {
void fn_80056378(void *memory);                                         // frees memory
void fn_80066E1C(Meta::igObject *object);                               // frees an object whose count reached zero
GcMemoryPool *fn_8005645C(const void *memory);                          // the pool that allocated memory
void *fn_80056358(void *memory, unsigned int size, unsigned int align);  // reallocates with an alignment
}

// A pool of records with a free list of indices (the light pool).
template <class T> struct GcPool {
    unsigned short count;          // records allocated
    unsigned short freeCapacity;
    unsigned short freeCount;
    unsigned char unknown06[0x6];
    unsigned short *freeList;      // 0x0C
    T *data;                       // 0x10
};

// Whether index names a record in use (allocated and not on the free list).
template <class T> static inline bool isAllocated(GcPool<T> *pool, int index)
{
    if (index < pool->count && index >= 0) {
        for (int i = 0; i < pool->freeCount; i++) {
            if (index == pool->freeList[i]) return false;
        }
        return true;
    }
    return false;
}

// Makes room for at least n free indices.
template <class T> static inline void reserveFree(GcPool<T> *pool, int n)
{
    if (pool->freeCapacity < n) {
        pool->freeList = static_cast<unsigned short *>(fn_8005645C(pool)->reallocate(pool->freeList, n * sizeof(unsigned short)));
        pool->freeCapacity = n;
    }
}

// The material state (pointer at 0x4F8).
struct GcMaterial {
    int unknown00;
    GcVec4 color04;
    GcVec4 color14;
    GcVec4 color24;
    GcVec4 color34;
    float unknown44;
    GcVec4 color48;
};

// Adds n zeroed records to a pool, all of them free.
template <class T> static inline void grow(GcPool<T> *pool, int n)
{
    pool->data = static_cast<T *>(fn_80056358(pool->data, (pool->count + n) * sizeof(T), 16));
    memset(&pool->data[pool->count], 0, n * sizeof(T));
    reserveFree(pool, n);
    for (int i = 0; i < n; i++) pool->freeList[i] = pool->count + i;
    pool->freeCount = n;
    pool->count += n;
}

// Takes a free record's index (the most recently freed).
template <class T> static inline int take(GcPool<T> *pool)
{
    int index = pool->freeList[pool->freeCount - 1];
    pool->freeCount--;
    return index;
}

// Returns a record's index to the free list.
template <class T> static inline void freeIndex(GcPool<T> *pool, int index)
{
    if (index < pool->count && index >= 0) {
        if (pool->freeCount >= pool->freeCapacity) {
            GcMemoryPool *memory = fn_8005645C(pool);
            pool->freeCapacity += 8;
            pool->freeList = static_cast<unsigned short *>(memory->reallocate(pool->freeList, pool->freeCapacity * sizeof(unsigned short)));
        }
        pool->freeList[pool->freeCount] = index;
        pool->freeCount++;
    }
}

template <class T> static inline T &record(GcPool<T> *pool, int i) { return pool->data[i]; }

struct GcVisualContext : Meta::igVisualContext {
    unsigned char unknown140[0x144 - 0x140];
    GcPool<GcRecord144> *unknown144;             // 0x144
    int unknown148[8];                           // 0x148: bound 0x144 record per slot (-1: none)
    unsigned char unknown168[0x1A5 - 0x168];
    bool unknown1A5[8];                          // 0x1A5
    unsigned char unknown1AD[0x1BC - 0x1AD];
    int unknown1BC[8];                           // 0x1BC
    unsigned char unknown1DC[0x2C0 - 0x1DC];
    signed char unknown2C0[16];                  // 0x2C0: per-index settings 0x2C0..0x3E0 (set from presets by slot 0x448)
    signed char unknown2D0[16];                  // 0x2D0
    signed char unknown2E0[16];                  // 0x2E0
    signed char unknown2F0[16];                  // 0x2F0
    signed char unknown300[16];                  // 0x300
    signed char unknown310[16];                  // 0x310
    signed char unknown320[16];                  // 0x320
    signed char unknown330[16];                  // 0x330
    signed char unknown340[16];                  // 0x340
    signed char unknown350[16];                  // 0x350
    signed char unknown360[16];                  // 0x360
    signed char unknown370[16];                  // 0x370
    signed char unknown380[16];                  // 0x380
    signed char unknown390[16];                  // 0x390
    signed char unknown3A0[16];                  // 0x3A0
    signed char unknown3B0[16];                  // 0x3B0
    signed char unknown3C0[16];                  // 0x3C0
    signed char unknown3D0[16];                  // 0x3D0
    signed char unknown3E0[16];                  // 0x3E0
    GcPool<GcRecord3F0> *unknown3F0;             // 0x3F0
    int unknown3F4;                              // 0x3F4: index of the current 0x3F0 record
    unsigned int clearColor;                     // 0x3F8: packed RGBA8, sent with GXSetCopyClear
    unsigned int clearColorSent;                 // 0x3FC: the clear colour of the last copy
    GcVec4 clearColorF;                          // 0x400: the same colour as floats (0..1)
    float clearDepth;                            // 0x410: 0..1, scaled to 24 bits for GXSetCopyClear
    float clearDepthSent;                        // 0x414: the clear depth of the last copy
    unsigned int unknown418;                     // 0x418
    unsigned char unknown41C[0x420 - 0x41C];
    short viewportX;                             // 0x420: the viewport, as given to slot 0x2E4
    short viewportY;                             // 0x422
    short viewportWidth;                         // 0x424
    short viewportHeight;                        // 0x426
    float viewportNear;                          // 0x428
    float viewportFar;                           // 0x42C
    short copyWidth;                             // 0x430: passed to GXSetDispCopyDst
    short copyHeight;                            // 0x432
    unsigned char unknown434[0x440 - 0x434];
    int unknown440;                              // 0x440
    unsigned char unknown444[0x44C - 0x444];
    GcPool<Meta::igDataList *> *unknown44C;      // 0x44C
    int unknown450;                              // 0x450
    unsigned char unknown454;                    // 0x454
    unsigned char unknown455[0x458 - 0x455];
    Meta::igDataList *matrixStack0;              // 0x458: matrix stacks (64-byte matrices) by mode: 0
    Meta::igDataList *matrixStack1;              // 0x45C: mode 1
    Meta::igDataList **matrixStacks;             // 0x460: modes 2..9
    unsigned char unknown464[0x484 - 0x464];
    float unknown484;                            // 0x484
    unsigned char unknown488[0x4D0 - 0x488];
    float unknown4D0;                            // 0x4D0
    unsigned char unknown4D4[0x4D8 - 0x4D4];
    GcVec4 unknown4D8;                           // 0x4D8
    float unknown4E8;                            // 0x4E8
    float unknown4EC;                            // 0x4EC
    GcPool<GcLight> *lights;                     // 0x4F0
    unsigned char unknown4F4[0x4F8 - 0x4F4];
    GcMaterial *material;                        // 0x4F8
    unsigned char unknown4FC[0x50B - 0x4FC];
    unsigned char unknown50B[8];                 // 0x50B
    unsigned char unknown513[0x520 - 0x513];
    unsigned int dirty;                          // 0x520: state groups to send to the hardware (GC_DIRTY_*)
    void *frameBuffer0;                          // 0x524: the two external frame buffers
    void *frameBuffer1;                          // 0x528
    void *frameBuffer;                           // 0x52C: the one drawn next
    unsigned char unknown530[0x6D8 - 0x530];
    void *unknown6D8;                            // 0x6D8
    unsigned char unknown6DC[0x6E8 - 0x6DC];
};

typedef char GcVisualContextSizeCheck[sizeof(GcVisualContext) == 0x6E8 ? 1 : -1];

static inline GcLight *lightAt(GcVisualContext *self, int index) { return &self->lights->data[index]; }

// Frame statistics (lbl_804F6180).
struct GcFrameStats {
    float frames;
    unsigned char unknown04[0x18];
    float unknown1C;   // counted when a 0x144 record is bound
    int clears;        // 0x20
    unsigned char unknown24[0x10];
    float unknown34;   // records of kind 0x0D or 0x0E bound
    float unknown38;   // records of kind 0x22 bound
};
extern "C" GcFrameStats lbl_804F6180;

// Bits of GcVisualContext::dirty.
enum {
    GC_DIRTY_01 = 0x1,
    GC_DIRTY_02 = 0x2,
    GC_DIRTY_08 = 0x8,
    GC_DIRTY_10 = 0x10,
    GC_DIRTY_40 = 0x40,
    GC_DIRTY_LIGHTS = 0x100,
    GC_DIRTY_400 = 0x400,
    GC_DIRTY_MATERIAL = 0x200,
    GC_DIRTY_800 = 0x800
};

// The context's virtual functions (slot offsets from the vtable start; the first is at 0x08).
class GcVisualContextVirtuals {
public:
    // BEGIN SLOTS
    virtual void slot008(); virtual void slot00C(); virtual void slot010(); virtual void slot014(); virtual void slot018(); virtual void slot01C();
    virtual void slot020(); virtual void slot024(); virtual void slot028(); virtual void slot02C(); virtual void slot030(); virtual void slot034();
    virtual void slot038(); virtual void slot03C(); virtual void slot040(); virtual void slot044(); virtual void slot048(); virtual void slot04C();
    virtual void slot050(); virtual void slot054(); virtual void slot058(); virtual void slot05C(); virtual void slot060(); virtual void slot064();
    virtual void slot068(); virtual void slot06C();
    virtual void drawFrameRate(float now, float elapsed);   // 0x070
    virtual void slot074(float now);   // 0x074
    virtual void slot078(); virtual void slot07C(); virtual void slot080(); virtual void slot084(); virtual void slot088(); virtual void slot08C();
    virtual void slot090(); virtual void slot094(); virtual void slot098(); virtual void slot09C(); virtual void slot0A0(); virtual void slot0A4();
    virtual void slot0A8(); virtual void slot0AC(); virtual void slot0B0(); virtual void slot0B4(); virtual void slot0B8(); virtual void slot0BC();
    virtual void slot0C0(); virtual void slot0C4(); virtual void slot0C8(); virtual void slot0CC(); virtual void slot0D0(); virtual void slot0D4();
    virtual void slot0D8(); virtual void slot0DC(); virtual void slot0E0(); virtual void slot0E4(); virtual void slot0E8();
    virtual void slot0EC(int);   // 0x0EC
    virtual void slot0F0(); virtual void slot0F4(); virtual void slot0F8(); virtual void slot0FC(); virtual void slot100(); virtual void slot104();
    virtual void slot108(); virtual void slot10C(); virtual void slot110(); virtual void slot114(); virtual void slot118(); virtual void slot11C();
    virtual void slot120(); virtual void slot124(); virtual void slot128(); virtual void slot12C(); virtual void slot130(); virtual void slot134();
    virtual void slot138();
    virtual int setLightEnabled(int light, bool enabled);   // 0x13C
    virtual void slot140(); virtual void slot144(); virtual void slot148(); virtual void slot14C(); virtual void slot150(); virtual void slot154();
    virtual void slot158(); virtual void slot15C(); virtual void slot160(); virtual void slot164(); virtual void slot168(); virtual void slot16C();
    virtual void slot170(); virtual void slot174(); virtual void slot178(); virtual void slot17C(); virtual void slot180(); virtual void slot184();
    virtual void slot188(); virtual void slot18C(); virtual void slot190(); virtual void slot194(); virtual void slot198(); virtual void slot19C();
    virtual void slot1A0(); virtual void slot1A4(); virtual void slot1A8(); virtual void slot1AC(); virtual void slot1B0(); virtual void slot1B4();
    virtual void slot1B8(); virtual void slot1BC(); virtual void slot1C0(); virtual void slot1C4(); virtual void slot1C8(); virtual void slot1CC();
    virtual void slot1D0(); virtual void slot1D4(); virtual void slot1D8(); virtual void slot1DC(); virtual void slot1E0(); virtual void slot1E4();
    virtual void slot1E8(); virtual void slot1EC(); virtual void slot1F0(); virtual void slot1F4(); virtual void slot1F8(); virtual void slot1FC();
    virtual void slot200(); virtual void slot204();
    virtual void slot208(int);   // 0x208
    virtual void slot20C(); virtual void slot210();
    virtual int slot214(int, int, int);   // 0x214
    virtual void slot218(); virtual void slot21C(); virtual void slot220(); virtual void slot224(); virtual void slot228(); virtual void slot22C();
    virtual void slot230(); virtual void slot234(); virtual void slot238(); virtual void slot23C(); virtual void slot240(); virtual void slot244();
    virtual void slot248(); virtual void slot24C(); virtual void slot250(); virtual void slot254(); virtual void slot258(); virtual void slot25C();
    virtual void slot260(); virtual void slot264(); virtual void slot268(); virtual void slot26C(); virtual void slot270(); virtual void slot274();
    virtual void slot278(); virtual void slot27C(); virtual void slot280(); virtual void slot284(); virtual void slot288(); virtual void slot28C();
    virtual void slot290(); virtual void slot294(); virtual void slot298(); virtual void slot29C(); virtual void slot2A0(); virtual void slot2A4();
    virtual void slot2A8(); virtual void slot2AC(); virtual void slot2B0(); virtual void slot2B4(); virtual void slot2B8(); virtual void slot2BC();
    virtual void slot2C0(); virtual void slot2C4(); virtual void slot2C8(); virtual void slot2CC(); virtual void slot2D0(); virtual void slot2D4();
    virtual void slot2D8(); virtual void slot2DC(); virtual void slot2E0();
    virtual void setViewport(int x, int y, int width, int height, float near, float far);   // 0x2E4
    virtual void slot2E8(); virtual void slot2EC(); virtual void slot2F0(); virtual void slot2F4(); virtual void slot2F8(); virtual void slot2FC();
    virtual void slot300(); virtual void slot304(); virtual void slot308(); virtual void slot30C(); virtual void slot310(); virtual void slot314();
    virtual void slot318(); virtual void slot31C(); virtual void slot320(); virtual void slot324(); virtual void slot328(); virtual void slot32C();
    virtual void slot330(); virtual void slot334(); virtual void slot338(); virtual void slot33C();
    virtual void slot340(int, float *);   // 0x340
    virtual void slot344(); virtual void slot348(); virtual void slot34C(); virtual void slot350(); virtual void slot354(); virtual void slot358();
    virtual void slot35C(); virtual void slot360(); virtual void slot364(); virtual void slot368(); virtual void slot36C(); virtual void slot370();
    virtual void slot374(); virtual void slot378(); virtual void slot37C(); virtual void slot380(); virtual void slot384(); virtual void slot388();
    virtual void slot38C(); virtual void slot390(); virtual void slot394(); virtual void slot398(); virtual void slot39C(); virtual void slot3A0();
    virtual void slot3A4(); virtual void slot3A8(); virtual void slot3AC(); virtual void slot3B0(); virtual void slot3B4(); virtual void slot3B8();
    virtual void slot3BC(); virtual void slot3C0(); virtual void slot3C4(); virtual void slot3C8(); virtual void slot3CC(); virtual void slot3D0();
    virtual void slot3D4(); virtual void slot3D8(); virtual void slot3DC(); virtual void slot3E0(); virtual void slot3E4(); virtual void slot3E8();
    virtual void slot3EC(); virtual void slot3F0(); virtual void slot3F4(); virtual void slot3F8(); virtual void slot3FC(); virtual void slot400();
    virtual void slot404(); virtual void slot408(); virtual void slot40C(); virtual void slot410(); virtual void slot414(); virtual void slot418();
    virtual void slot41C(); virtual void slot420(); virtual void slot424(); virtual void slot428(); virtual void slot42C(); virtual void slot430();
    virtual void slot434(); virtual void slot438(); virtual void slot43C(); virtual void slot440(); virtual void slot444();
    virtual void slot448(int, int);   // 0x448
    virtual void slot44C();
    virtual void slot450(int, int, int, int, int);   // 0x450
    virtual void slot454(); virtual void slot458(); virtual void slot45C();
    virtual void slot460(int, int, int, int, bool);   // 0x460
    virtual void slot464();
    virtual void slot468(int, int, int, int, int);   // 0x468
    virtual void slot46C();
    virtual void slot470(int, int, int, int, bool);   // 0x470
    virtual void slot474();
    virtual void slot478(int, int);   // 0x478
    virtual void slot47C();
    virtual void slot480(int, int);   // 0x480
    virtual void slot484();    // END SLOTS
};
static inline GcVisualContextVirtuals *virtuals(GcVisualContext *self) { return reinterpret_cast<GcVisualContextVirtuals *>(self); }

static inline void release(Meta::igObject *object)
{
    object->_refCount--;
    if ((object->_refCount & 0x7FFFFF) == 0) fn_80066E1C(object);
}

static inline void addRef(Meta::igObject *object) { object->_refCount++; }

// GX's colour type, and the packed form the context keeps (red in the low byte).
struct GXColor {
    unsigned char r, g, b, a;
};
extern "C" {
extern const float lbl_80566944;   // 16777215.0f: the 24-bit depth range
void GXSetCopyClear(GXColor color, unsigned int depth);
}

// Sends the clear colour and depth for frame-buffer copies. A macro: the colour must be a local of the
// calling function, as in the original stack layout.
#define GC_SEND_COPY_CLEAR(self)                                      \
    do {                                                              \
        unsigned int packed = (self)->clearColor;                     \
        GXColor color;                                                \
        color.r = packed;                                             \
        color.g = packed >> 8;                                        \
        color.b = packed >> 16;                                       \
        color.a = packed >> 24;                                       \
        GXSetCopyClear(color, lbl_80566944 * (self)->clearDepth);     \
    } while (0)

// A counted local reference, released when it goes out of scope. The compiler also emits an out-of-line
// copy of the destructor; the linker strips it (UNUSED in the map).
template <class T> struct GcRef {
    T *object;
    inline GcRef(T *o) : object(o) { if (o) addRef(o); }
    inline ~GcRef() { if (object) release(object); }
};

// Gap's result code (kSuccess, kFailure), returned through a hidden pointer.
extern "C" int kSuccess__3Gap;
extern "C" int kFailure__3Gap;
struct GcResult {
    int value;
    inline GcResult(int code) : value(code) {}
    inline GcResult(const GcResult &other) : value(other.value) {}
};

// Clears element index of an object list when it is in range (without releasing it).
static inline void clearAt(Meta::igDataList *list, int index)
{
    if (list->_count != 0 && index >= 0 && index < list->_count) static_cast<Meta::igObject **>(list->_data)[index] = 0;
}

// Releases every element of an object list and empties it.
static inline void removeAll(Meta::igDataList *list)
{
    int count = list->_count;
    for (int i = 0; i < count; i++) {
        Meta::igObject *object = static_cast<Meta::igObject **>(list->_data)[i];
        if (object) release(object);
    }
    int n = list->_count;
    for (int i = 0; i < n; i++) static_cast<Meta::igObject **>(list->_data)[i] = 0;
    list->_count = 0;
}

// Element i of a list of records.
template <class T> static inline T &record(Meta::igDataList *list, int i) { return static_cast<T *>(list->_data)[i]; }

#endif
