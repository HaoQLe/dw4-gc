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

#endif
