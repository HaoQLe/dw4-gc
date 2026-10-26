// beNDMWMdlItem's shared declarations (Gap::Bec::beNDMWMdlItem): the constant pool, the data, the called functions
// and the inline helpers of the beNDMWMdlItem*.cpp units.
#ifndef BEC_NDMWMDLITEM_H
#define BEC_NDMWMDLITEM_H

#include "beModelCtrl.h"
#include <meta/beNDMWItemBase.h>
#include <meta/igViewerSceneInfoManager.h>
#include <meta/igVisualContext.h>
#include <meta/beDataObjInt.h>
#include <meta/beDataObjObjectList.h>
#include <meta/beDataObjBoolList.h>
#include <meta/igBoolList.h>

// This file's constant pool (0x8045C288; the strings before KIND_ITEM belong to the item effects).
struct beNDMWMdlItemPool {
    char i_getitempnl02[16];
    char SQ_X5UP[8];
    char SQ_X20UP[12];
    char SQ_X100UP[12];
    char i_getitempnl01[16];
    char SQ_STRUP[12];
    char SQ_STRUP2[12];
    char SQ_DEFUP[12];
    char SQ_DEFUP2[12];
    char i_getitempnl03[16];
    char SQ_MHPUP[12];
    char SQ_MHPUP2[12];
    char SQ_MMPUP[12];
    char SQ_MMPUP2[12];
    char SQ_WISUP[12];
    char SQ_WISUP2[12];
    char SQ_SPIUP[12];
    char SQ_SPIUP2[12];
    char SQ_SPDUP[12];
    char SQ_SPDUP2[12];
    char SQ_FIREUP[12];
    char SQ_FIREUP2[12];
    char SQ_ICEUP[12];
    char SQ_ICEUP2[12];
    char SQ_THUNDUP[12];
    char SQ_THUNDUP2[12];
    char SQ_DARKUP[12];
    char SQ_DARKUP2[12];
    char PLAYER[8];
    float one;                  // 1.0f
    char SETEFFECT[12];
    char KIND_ITEM[12];
    char DROPITEM[12];
    char g_000bit[12];
    char g_000xdata1[12];
    char g_000xdata2[12];
    char g_000access[12];
    char g_000armor[12];
    char g_000boost1[12];
    char g_000item[12];
    char g_000key[12];
    char g_000penx[12];
    char g_000weapon[12];
    char ONE[4];
    char GAMERAM[8];
    char GETPLAYER1[12];
    char LEVEL[8];
    char font00[8];
    char font01[8];
    char font02[8];
    char font03[8];
    char NEAR[8];
    float nearDistance;         // 64.0f: a squared distance
    char SQ_DDMG[8];
    char TEXTCTL[8];
    char ITNAMEFONT[12];
    char CENTER[8];
    char ALIGN[8];
    char NAME[8];
    char TEXTSET[8];
    char COLOR[8];
    char SET[4];
    char SWITCH[8];
    float three;                // 3.0f
    char GETMATRIX[12];
    float hundred;              // 100.0f
    float labelHeight;          // 10.0f
    float half;                 // 0.5f
    float labelOffsetX;         // 0.7f
    float labelDepth;           // -5.0f
    char SETPOSITION[16];
    double intToDouble;         // 4503601774854144.0: int to float conversion
    char CLR[4];
    char SQ_EXIT[8];
    char GETPLAYER[12];
    char DEVICEFOLDER[16];
    char DISKFOLDER[12];
    char GETCOMMON[12];
    char FLAGFOLDER[12];
};
extern "C" const beNDMWMdlItemPool lbl_8045C288;

extern "C" {
extern const char lbl_8045C3F8[];   // "KIND_ITEM"
extern const char lbl_8045C404[];   // "DROPITEM"
extern const char lbl_8045C488[];   // "ONE"
extern const char lbl_8045C564[];   // "SQ_EXIT"
extern const char *lbl_804EDB68[10];   // the item models by kind: g_000bit .. g_000weapon
extern const char *lbl_804EDB90[4];    // the name fonts by player: font00 .. font03
extern const char lbl_80567400[1];     // ""
extern bool lbl_80561438;             // true, for a key's flag
extern char lbl_80562258[];            // the pool source item objects come from
extern char igViewerSceneInfoManager_meta[];
extern char beNDMWMdlItem_meta[];
beNDMWMdlItemInfoWork *beNDMWMdlItemInfoWork_create(void *pool);
int fn_8031C954();                                                // the player found by the last target search
void fn_8012D498(float *to, const float *point, const float *matrix);   // a point transformed by a matrix
void fn_802EDC54(void *script, int);                             // runs an item's script (the hit context set)
void fn_803AA9A0(beNDMWMdlItem *self, int effect, int player);  // applies an instant item's effect
// Items (beNDMWItem*): creation and setup.
beNDMWItemBase *beNDMWItemDisk_create(void *pool);
beNDMWItemBase *beNDMWItemInstant_create(void *pool);
beNDMWItemBase *beNDMWItemImportant_create(void *pool);
beNDMWItemBase *beNDMWItemAbilityChip_create(void *pool);
beNDMWItemBase *beNDMWItemWeapon_create(void *pool);
beNDMWItemBase *beNDMWItemBlueArmor_create(void *pool);
beNDMWItemBase *beNDMWItemYellowArmor_create(void *pool);
void fn_803B10A0(beNDMWItemBase *item, int recNo);   // sets up a disk
void fn_803B13F8(beNDMWItemBase *item, int recNo);   // an instant item
void fn_803B1778(beNDMWItemBase *item, int recNo);   // an important item
void fn_803B1014(beNDMWItemBase *item, int recNo);   // an ability chip
void fn_803B0CD0(beNDMWItemBase *item, int recNo, beNDMWMdlItem *controller, int level);   // a weapon
void fn_803B0E08(beNDMWItemBase *item, int recNo, beNDMWMdlItem *controller, int level);   // blue armour
void fn_803B0F3C(beNDMWItemBase *item, int recNo, beNDMWMdlItem *controller, int level);   // yellow armour
const char *fn_803B0790(beNDMWItemBase *item, beNDMWMdlItem *controller, const char *field);   // an item's text
Vec3f fn_803B07E0(beNDMWItemBase *item);                 // an item's name colour
int fn_803B0A6C(igObjectList *disks, int recNo);        // the index of a disk record in a folder

}

// An item's action when used (virtual 0x60).
class beNDMWItemVirtuals : public igObjectVirtuals {
public:
    virtual void v5C();
    virtual void use(beNDMWMdlItem *controller, int player);   // 0x60
};

// Sets an element of an object list, holding a new reference: the new object gains a reference and the old
// one is released, then the element is stored when the index is in range.
static inline void setObjectAt(igObjectList *list, int index, igObject *object)
{
    if (object) addRef(object);
    igObject *old = static_cast<igObject **>(list->_data)[index];
    if (old) release(old);
    if (list->_count != 0 && index >= 0 && index < list->_count) static_cast<igObject **>(list->_data)[index] = object;
}

// Sends a request to the text control about the item name font of a player.
static inline void textRequest(beNDMWMdlItem *self, const beNDMWMdlItemPool &pool, const char *font)
{
    fn_80305EA8(self->_messenger, pool.TEXTCTL);
    fn_80306FDC(self->_messenger, pool.ITNAMEFONT);
    fn_80306FDC(self->_messenger, font);
}

// The viewer's camera matrices (in its scene info manager's camera; the type is not established): the view at
// 0x6C and the projection at 0x2C, by the order the item's label applies them.
static inline const float *cameraMatrix(beNDMWMdlItem *self, int offset)
{
    return reinterpret_cast<const float *>(*reinterpret_cast<char **>(reinterpret_cast<char *>(self->_viewerSIManager) + 0x14) + offset);
}

// The visual context's viewport (virtual 0x2E8).
static inline void getViewport(igVisualContext *context, int *x, int *y, int *width, int *height)
{
    typedef void (*Function)(igVisualContext *, int *, int *, int *, int *);
    (*reinterpret_cast<Function *>(*reinterpret_cast<char **>(context) + 0x2E8))(context, x, y, width, height);
}

#endif
