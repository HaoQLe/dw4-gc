// beNDMWMdlItem: an item's per-frame step (use, name label) and taking the label down (0x803AB5AC..0x803ABFB8).
// category (disks, instant items, important items, ability chips, weapons and armour scaled by the player's
// level). An unnamed item is used up when a player touches it; a named one shows its name over itself to the
// nearest player, and that player picks it up with ACTION1 when there is room for it.
#include "beModelCtrl.h"
#include <meta/beNDMWItemBase.h>
#include <meta/igViewerSceneInfoManager.h>
#include <meta/igVisualContext.h>
#include <meta/beDataObjInt.h>
#include <meta/beDataObjObjectList.h>
#include <meta/beDataObjBoolList.h>
#include <meta/igBoolList.h>

#pragma auto_inline off

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
void fn_802F24B0(beBaseInfoManager *self);   // beBaseInfoManager's virtual64
void fn_80305EA8(beMessenger *messenger, const char *target);   // opens a request to target
void fn_80305F58(beMessenger *messenger, const char *target, const char *command);   // a request to every RAM of target, sent at once
void fn_80306C84(beMessenger *messenger, const float *vector);   // appends a vector argument
int fn_8031C954();                                                // the player found by the last target search
beDataObjInt *fn_8031F3CC(igObject *data, const char *name);
beDataObjBoolList *fn_8031F45C(igObject *data, const char *name);
beDataObjObjectList *fn_8031F4EC(igObject *data, const char *name);
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

extern "C" {

// Sends a request to the text control about the item name font of a player.
static inline void textRequest(beNDMWMdlItem *self, const beNDMWMdlItemPool &pool, const char *font)
{
    fn_80305EA8(self->_messenger, pool.TEXTCTL);
    fn_80306FDC(self->_messenger, pool.ITNAMEFONT);
    fn_80306FDC(self->_messenger, font);
}

// The viewer's projection and view matrices (in its scene info manager's camera; the type is not established).
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

// Each frame. An unnamed item is used when a player comes within reach: the item acts (virtual 0x60) and the
// model plays SQ_DDMG; item 0 runs its script, items 1 to 25 apply their effect. A named item shows its name to
// the first player that comes near (one label per player), blinking its colour every half second, and keeps the
// label over itself on screen while that player stays near.
void beNDMWMdlItem_virtualA0(beNDMWMdlItem *self, beBaseInfoRam *ram)
{
    const beNDMWMdlItemPool &pool = lbl_8045C288;
    beModelCtrlInfoRamData *data = ramDataOf(ram, pool.ONE);
    beNDMWMdlItemInfoWork *work = static_cast<beNDMWMdlItemInfoWork *>(data->_work);
    if (self->_lockRamList->_count == 0) {
        for (int i = 0; i < 4; i++) fn_80069128(self->_lockRamList, 0);
    }
    bool isNear = false;
    int player = 0;
    if (fn_8031C67C(data->_node->_m, pool.PLAYER, pool.NEAR)) {
        float distance = fn_8031C8EC();
        player = fn_8031C954();
        if (distance < pool.nearDistance) isNear = true;
        else isNear = false;
    }
    if (!work->_isNamed) {
        if (!isNear) return;
        reinterpret_cast<beNDMWItemVirtuals *>(work->_itemObject)->use(self, player);
        setString(work->_keyEventName, pool.SQ_DDMG);
        beNDMWItemBase *item = work->_itemObject;
        int effect = item->_recNo;
        if (effect == 0) {
            ModelLuaContext *context = &lbl_80535914;
            context->ram = ram;
            context->matrix = data->_node->_m;
            fn_802EDC54(reinterpret_cast<void **>(item)[5], 4);
        } else if (effect > 0 && effect < 26) {
            fn_803AA9A0(self, effect, player);
        }
        return;
    }
    switch (ram->_st0) {
    case 0:
        if (!isNear) return;
        if (!item<igObject>(self->_lockRamList, player)) {
            const char *font = lbl_804EDB90[player];
            textRequest(self, pool, font);
            fn_80306FDC(self->_messenger, pool.CENTER);
            fn_80305A28(self->_messenger, pool.ALIGN);
            const char *name = fn_803B0790(work->_itemObject, self, pool.NAME);
            textRequest(self, pool, font);
            fn_80306FDC(self->_messenger, name);
            fn_80305A28(self->_messenger, pool.TEXTSET);
            work->_isColorLight = false;
            fn_8031E8BC(ram, pool.COLOR);
            textRequest(self, pool, font);
            fn_80306FDC(self->_messenger, pool.SET);
            fn_80305A28(self->_messenger, pool.SWITCH);
            work->_isDispName = true;
            setString(work->_fontType, font);
            work->_dispPlayerRamNo = player;
            setObjectAt(self->_lockRamList, player, ram);
            ram->_st0++;
            ram->_st3 = 0;
            ram->_st2 = 0;
            ram->_st1 = 0;
        }
        if (ram->_st0 == 0) return;
    case 1: {
        if (fn_8031E238(ram, pool.COLOR)) {
            Vec3f color(fn_803B07E0(work->_itemObject));
            float red = color.x, green = color.y, blue = color.z;
            if (work->_isColorLight) {
                work->_isColorLight = false;
                red /= pool.three;
                green /= pool.three;
                blue /= pool.three;
            } else {
                work->_isColorLight = true;
            }
            textRequest(self, pool, work->_fontType);
            float rgb[3];
            rgb[0] = red;
            rgb[1] = green;
            rgb[2] = blue;
            fn_80306C84(self->_messenger, rgb);
            fn_80305A28(self->_messenger, pool.COLOR);
            fn_8031DE44(ram, pool.COLOR, 500000000);
        }
        float position[3];
        fn_80128DAC(data->_node->_m, position);
        fn_80305ED0(self->_messenger, pool.PLAYER, 0, work->_dispPlayerRamNo, pool.GETMATRIX);
        float distance;
        if (fn_80306D58(self->_messenger) != 0) {
            float playerPosition[3];
            fn_80128DAC(fn_80306DE8(self->_messenger, 0).m, playerPosition);
            float dx = position[0] - playerPosition[0];
            float dy = position[1] - playerPosition[1];
            float dz = position[2] - playerPosition[2];
            distance = dx * dx + dy * dy + dz * dz;
        } else {
            distance = pool.hundred;
        }
        if (distance < pool.nearDistance) {
            Matrix44 projection;
            Matrix44 view;
            fn_80128CF4(projection.m, cameraMatrix(self, 0x6C));
            fn_80128CF4(view.m, cameraMatrix(self, 0x2C));
            float point[3];
            fn_80128DAC(data->_node->_m, point);
            point[1] += pool.labelHeight;
            float projected[3];
            fn_8012D498(projected, point, projection.m);
            fn_8012D498(point, projected, view.m);
            int x, y, width, height;
            getViewport(self->_insight->_visualContext, &x, &y, &width, &height);
            float screenY = height - ((pool.one + point[1]) * height * pool.half + y);
            float labelX = ((pool.one + point[0]) * width * pool.half + x - width / 2) / pool.hundred - pool.labelOffsetX;
            float labelY = (height - screenY - height / 2) / pool.hundred;
            textRequest(self, pool, work->_fontType);
            float where[3];
            where[0] = labelX;
            where[1] = labelY;
            where[2] = pool.labelDepth;
            fn_80306C84(self->_messenger, where);
            fn_80305A28(self->_messenger, pool.SETPOSITION);
        } else {
            virtuals(self)->erasing(ram);
            ram->_st0 = 0;
            ram->_st3 = 0;
            ram->_st2 = 0;
            ram->_st1 = 0;
        }
    }
    }
}

// SQ_ERAS: takes the name label down and frees the player's label slot.
void beNDMWMdlItem_virtualB4(beNDMWMdlItem *self, beBaseInfoRam *ram)
{
    const beNDMWMdlItemPool &pool = lbl_8045C288;
    beNDMWMdlItemInfoWork *work = static_cast<beNDMWMdlItemInfoWork *>(ramDataOf(ram, pool.ONE)->_work);
    if (work->_isDispName) {
        work->_isDispName = false;
        setObjectAt(self->_lockRamList, work->_dispPlayerRamNo, 0);
        work->_dispPlayerRamNo = -1;
        textRequest(self, pool, work->_fontType);
        fn_80306FDC(self->_messenger, pool.CLR);
        fn_80305A28(self->_messenger, pool.SWITCH);
    }
}

}
