// Gap::Bec::beNDMWGameRam (0x8036D224..0x80378818): the game RAM, the store of the game's persistent state.
// It holds the game databases (evolution, techniques, weapons, armor, ability chips, enemies, enemy attacks),
// the common data list and one data list per player, and answers the scripts' requests to read and write
// that state by name ("HP", "TSUYOSA", "FLAG", ...) through its message handler (virtual90).
#ifndef GAME_BEC_BENDMWGAMERAM_H
#define GAME_BEC_BENDMWGAMERAM_H
#include "beModelCtrl.h"
#include <meta/beNDMWGameRam.h>
#include <meta/beNDMWGameRamInfo.h>
#include <meta/beNDMWGameRamInfoRam.h>
#include <meta/beDataObjList.h>
#include <meta/beDataObjListList.h>
#include <meta/beBaseInfoList.h>
#include <meta/beBaseInfoRamList.h>
#include <meta/beNDMWItemBase.h>
#include <meta/igBoolList.h>
#include <meta/igIntList.h>
#include <meta/beDataObjBool.h>
#include <meta/beDataObjBoolList.h>
#include <meta/beDataObjIntList.h>
#include <meta/beDataObjObjectList.h>
#include <game/List.h>
#include <game/Pool.h>
#include <game/Ref.h>

extern "C" {
extern char lbl_80562258[];   // the pool source of the RAM's data lists
extern char lbl_8056225C[];   // the pool source of its info and RAM
beDataObjList *beDataObjList_create(void *pool);
beDataObjListList *beDataObjListList_create(void *pool);
beNDMWGameRamInfo *beNDMWGameRamInfo_create(void *pool);
beNDMWGameRamInfoRam *beNDMWGameRamInfoRam_create(void *pool);
void fn_80066490(igObject *named, const char *name);   // sets an igNamedObject's name
void fn_8036CE1C(beNDMWGameRam *self, int player);   // sets up a player's data (before this file)
extern const char lbl_80459278[];   // "gameram": the info's name
extern const char lbl_80459280[];   // "GAMERAM": the command announcing the RAM
}

// Releases every element of a member list and frees its storage (the member is read again afterwards).
template <class T> static inline void clearAndShrink(T *&list)
{
    removeAll(list);
    if (list->_count <= 0) fn_8004155C(list, 0, 4);
}

// The original file's strings and constants are literals: the compiler pools them at 0x80458F30..0x80459944 in
// first-use order and addresses them from one base register, so the functions using them can only match
// together, in one unit covering the whole file (fn_8036CE1C..0x80378818).

extern "C" {
int fn_803B06F0(beNDMWItemBase *item, igObject *owner, const char *field);   // field of the item's database record
const char *fn_803B0790(beNDMWItemBase *item, igObject *owner, const char *field);   // text field of the record
}

extern "C" {
extern bool lbl_80561412;           // true: the value BASE_ISUSE takes for an active player's Digimon
int fn_8036DA28(beNDMWGameRam *self, int request);    // (below) the Digimon a request selects
void fn_8036DBA8(beNDMWGameRam *self, int player, int digimon);
void fn_8036E124(beNDMWGameRam *self, int player);
void fn_8036E3B8(beNDMWGameRam *self, int player, int);
void fn_8036FDE8(beNDMWGameRam *self, int player, int);
}

// Element i of an int list.
static inline int &intAt(igDataList *list, int i) { return static_cast<int *>(list->_data)[i]; }

// An equipped item with a bonus (hypothesis: the amount added to the stat its SHUSEINOURYOKU names).
struct BonusItem : beNDMWItemBase {
    int unknown14;
};

// Player player's data list.
static inline beDataObjList *playerData(beNDMWGameRam *self, int player)
{
    return item<beDataObjList>(self->_playerDataListList, player);
}

#endif
