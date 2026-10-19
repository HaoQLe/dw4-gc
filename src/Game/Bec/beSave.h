// The save layer (0x8031F918..0x80324838): memory blocks for save images, the GameCube memory-card steps
// (mount, write and status) shared by the save operations, the operations themselves (beSv*Api: start, find,
// make, format, use check, read, write, free size, end, connection check) and beSaveUtil, which runs them.
// Each operation is a state machine: virtual5C starts it, virtual60 advances it each frame and returns its
// result (0 while running), virtual64 ends it.
#ifndef GAME_BEC_BESAVE_H
#define GAME_BEC_BESAVE_H
#include <dolphin/card.h>
#include <charPipeline/texPalette.h>
#include <meta/beSaveApi.h>
#include <meta/beSaveMemoryObj.h>
#include <meta/beSaveDataDeliver.h>
#include <meta/beSvPlatDataGC.h>
#include <meta/beSvPlatBaseData.h>
#include <game/Pool.h>
#include <game/Ref.h>
#include <game/List.h>
#include <game/Virtual.h>
#include <meta/beSvDeliver.h>

using namespace Meta;

// The card work a beSaveApi keeps after its reflected members (its unnamed bytes 0x3C..0xD4).
struct SaveCardWork {
    CARDFileInfo fileInfo;   // 0x3C: the open save file
    CARDStat stat;           // 0x50: the save file's status (banner, icons, comment)
    int probeRetries;        // 0xBC: failed probes while mounting
    int mountStep;           // 0xC0: fn_8031FCF0's state
    bool mounted;            // 0xC4
    int writeStep;           // 0xC8: fn_8032029C's state
    TEXPalette *tpl;         // 0xCC: the texture palette (banner or icons) copied into _iconWork and bound
    bool tplBound;           // 0xD0: tpl is bound; _iconWork is released when the image is built
};

// The card work of an operation.
static inline SaveCardWork *cardOf(beSaveApi *api) { return reinterpret_cast<SaveCardWork *>(api->unknown3C); }

// The save operations' virtual functions (after igObject's).
class beSaveApiVirtuals : public igObjectVirtuals {
public:
    virtual void start(beSvDeliver *request);                          // 0x5C
    virtual bool step();                                                // 0x60: true when the operation has ended
    virtual void end(beSvDeliver *request);                            // 0x64: the result goes back to the request
    virtual int checksum(const void *image, unsigned int size);          // 0x68
};

static inline beSaveApiVirtuals *virtualsOf(beSaveApi *api) { return reinterpret_cast<beSaveApiVirtuals *>(api); }

// An operation's result (beSaveApi::_result, returned to the request by end()).
enum SaveApiResult {
    SAVEAPI_OK = 2,
    SAVEAPI_ERROR = 3,
    SAVEAPI_NOFILE = 4,
    SAVEAPI_IOERROR = 5,
    SAVEAPI_BROKEN = 7,
    SAVEAPI_CORRUPT = 8,   // no copy of the save passed its checksum
    SAVEAPI_NOSPACE = 9,   // not enough free blocks
    SAVEAPI_NOENTRY = 10,  // no free file entry
    SAVEAPI_WRONGDEVICE = 11,
    SAVEAPI_NOCARD = 12
};

// An operation's progress: _st0 is the phase, _st1 its sub-step; _st2 and _st3 are cleared with them.
static inline void nextPhase(beSaveApi *api)
{
    api->_st0++;
    api->_st3 = 0;
    api->_st2 = 0;
    api->_st1 = 0;
}
static inline void goPhase(beSaveApi *api, int phase)
{
    api->_st0 = phase;
    api->_st3 = 0;
    api->_st2 = 0;
    api->_st1 = 0;
}
static inline void setSubStep(beSaveApi *api, int step)
{
    api->_st1 = step;
    api->_st3 = 0;
    api->_st2 = 0;
}
static inline void nextSubStep(beSaveApi *api)
{
    api->_st1++;
    api->_st3 = 0;
    api->_st2 = 0;
}
// Ends the operation with a result (no cleanup phase).
static inline void finish(beSaveApi *api, int result)
{
    api->_result = result;
    api->_isEnd = true;
}
// Fails with a result and continues at a cleanup phase.
static inline void fail(beSaveApi *api, int result, int phase)
{
    api->_result = result;
    goPhase(api, phase);
}
// Starts an operation: not ended, result 1, at phase 0.
static inline void restart(beSaveApi *api)
{
    api->_isEnd = false;
    api->_result = 1;
    goPhase(api, 0);
}

// Results of the card steps (the game's own codes; 0 means still running).
enum SaveResult {
    SAVE_DONE = 1,
    SAVE_RUNNING = 0,
    SAVE_IOERROR = -1,
    SAVE_BROKEN = -2,
    SAVE_NOCARD = -3,
    SAVE_WRONGDEVICE = -4,
    SAVE_WRITEFAILED = -10
};

extern "C" {
void *fn_80056138(unsigned int size, void *pool);                      // allocates from a pool
void *fn_800561C0(unsigned int size, unsigned short align, void *pool); // allocates aligned from a pool
void fn_800563E4(void *memory, void *pool);                             // frees to a pool
void *memset(void *, int, unsigned int);
void *memcpy(void *, const void *, unsigned int);
extern char lbl_8056225C[];               // the save layer's pool source
extern beSvPlatDataGC *lbl_80535C18[];    // [0]: the GameCube save description (file name, sizes, icons), set by each operation's start
extern unsigned int lbl_80535C1C[];       // [0]: the save version (beSvDeliver::_saveVer, set by beSvStartApi), a save image's second word
beSaveMemoryObj *beSaveMemoryObj_create(void *pool);

void fn_8031F918(beSaveDataDeliver *block, int size);
void fn_8031F988(beSaveDataDeliver *block);
void fn_8031F9FC(beSaveMemoryObj *block, unsigned int size, unsigned int align);
void fn_8031FAC8(beSaveMemoryObj *block);
unsigned int beSaveApi_virtual68(beSaveApi *, const void *image, unsigned int size);
void fn_8031FC40(beSaveApi *api);
int fn_8031FCF0(beSaveApi *api);
void fn_8031FF98(beSaveApi *api);
void fn_80320004(beSaveApi *api);
int fn_8032029C(beSaveApi *api);
void fn_80320604(beSaveApi *api, const void *file, int size);
TEXDescriptor *fn_803207BC(beSaveApi *api, int index);
void fn_803207D0(beSaveApi *api);
}

// Replaces a memory block object of the operation with a new, empty one.
static inline void renewBlock(beSaveApi *api, beSaveMemoryObj *&block)
{
    void *pool = poolFor(api, lbl_8056225C);
    if (block) release(block);
    block = beSaveMemoryObj_create(pool);
}

// Clears a reference member (as assigning null to a smart reference: the old object is released).
template <class T> static inline void clearRef(T *&ref)
{
    if (ref) release(ref);
    ref = 0;
}

// Phase 0 of an operation: prepares and runs the mount, then goes to the next phase or ends with the error.
static inline void mountPhase(beSaveApi *api)
{
    if (api->_st1 == 0) {
        fn_8031FC40(api);
        setSubStep(api, 1);
        return;
    }
    switch (fn_8031FCF0(api)) {
    case 1:   // SAVE_DONE
        nextPhase(api);
        break;
    case -1:  // SAVE_IOERROR
        finish(api, SAVEAPI_IOERROR);
        break;
    case -2:  // SAVE_BROKEN
        finish(api, SAVEAPI_BROKEN);
        break;
    case -3:  // SAVE_NOCARD
        finish(api, SAVEAPI_NOCARD);
        break;
    case -4:  // SAVE_WRONGDEVICE
        finish(api, SAVEAPI_WRONGDEVICE);
        break;
    case 0:   // still mounting
        break;
    default:
        finish(api, SAVEAPI_ERROR);
        break;
    }
}

#endif
