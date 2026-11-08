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
#include <meta/beDataObjString.h>
#include <meta/beDataBase.h>
#include <meta/beNDMWItemWeapon.h>
#include <meta/beNDMWItemWaza.h>
#include <meta/beUnicodeObj.h>
#include <meta/beDataObjStringList.h>
#include <meta/igStringRefList.h>
#include <meta/beMessengerWork.h>
#include <meta/enums.h>
#include <meta/beSystem.h>
#include <meta/igRandomNumber.h>
#include <game/Virtual.h>
#include <game/StringPool.h>
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
int fn_8036DA28(beNDMWGameRam *self, const char *name);   // (below) the Digimon with a model name
void fn_8036DBA8(beNDMWGameRam *self, int player, int digimon);
void fn_8036E124(beNDMWGameRam *self, int player);
void fn_8036E3B8(beNDMWGameRam *self, int player, bool autoEquip);
void fn_8036FDE8(beNDMWGameRam *self, int player, bool equipment);
// Sums of an equipped item field into *total (below): power socket, power pocket, main slot, main pocket,
// sub slot; withBonus also adds a chip's bonus.
void fn_8036F484(beNDMWGameRam *self, igObject *data, int *total, const char *field, bool withBonus);
void fn_8036F534(beNDMWGameRam *self, igObject *data, int *total, const char *field);
void fn_8036F5DC(beNDMWGameRam *self, igObject *data, int *total, const char *field, bool withBonus);
void fn_8036F68C(beNDMWGameRam *self, igObject *data, int *total, const char *field);
void fn_8036F734(beNDMWGameRam *self, igObject *data, int *total, const char *field, bool withBonus);
int fn_8036F808(beNDMWGameRam *self, int player, int digimon, bool hp);
int fn_8036FB80(beNDMWGameRam *self, int player, int digimon, int stat);
}

extern "C" const char *fn_8031F70C(beDataBase *database, int record, const char *field);   // a record's string field

// A database, requested from the DATABASE manager by name (GETDATABASE) on first use.
static inline beDataBase *database(beNDMWGameRam *self, beDataBase *&member, const char *name)
{
    if (!member) {
        fn_80305ED0(self->_messenger, "DATABASE", name, 0, "GETDATABASE");
        beDataBase *loaded = static_cast<beDataBase *>(fn_80306FB4(self->_messenger, 0));
        if (loaded) addRef(loaded);
        if (member) release(member);
        member = loaded;
    }
    return member;
}

extern "C" {
extern char beFont_meta[];
beNDMWItemWeapon *beNDMWItemWeapon_create(void *pool);
void fn_803B0CB4(beNDMWItemWeapon *weapon, int record, int, int);   // sets a weapon up from its database record
int fn_8031F608(beDataBase *database, int record, const char *field);   // a record's integer field
beUnicodeObj *beUnicodeObj_create(void *pool);
void fn_802FC878(beUnicodeObj *text, int length);                   // sizes a text's buffer (in characters)
}
// The font manager's conversion of text to Unicode (a new reference, returned through a hidden pointer).
extern "C" Ref<beUnicodeObj> fn_802FB59C(igObject *font, const char *text);

using Gap::Core::igStringRef;
extern "C" void fn_8002080C(igStringRefList *list, igStringRef string);   // appends a string (by value)
extern "C" void fn_80068FCC(igObjectList *list, int);   // (hypothesis) empties an object list

// Empties a string list, releasing its strings (as beFileList.h's).
static inline void clearStrings(igStringRefList *names)
{
    int count = names->_count;
    for (int i = 0; i < count; i++) setString(static_cast<const char **>(names->_data)[i], 0);
    names->_count = 0;
}

// Sets an element of an object list, holding a new reference (as beNDMWMdlItem.h's).
static inline void setObjectAt(igObjectList *list, int index, igObject *object)
{
    if (object) addRef(object);
    igObject *old = static_cast<igObject **>(list->_data)[index];
    if (old) release(old);
    if (list->_count != 0 && index >= 0 && index < list->_count) static_cast<igObject **>(list->_data)[index] = object;
}

extern "C" {
beNDMWItemWaza *beNDMWItemWaza_create(void *pool);
void fn_803B17B0(beNDMWItemWaza *technique, int record, int baseRecord);   // sets a technique up
}

// The message handler's accessors. The original calls them out of line (they are emitted after it, where the
// handler exceeded the compiler's inlining budget); elsewhere they are inlined.
extern "C" {
const char *fn_803787F8(beMessengerWork *message);               // the message's name
beDataObjList *fn_803787F0(beNDMWGameRam *self);                 // the common data list
beDataObjListList *fn_803787E8(beNDMWGameRam *self);             // the per-player data lists
beDataObjList *fn_803787D8(beDataObjListList *lists, int player);   // a player's data list
int fn_803787AC(beDataObjInt *value);                            // an int's value
const char *fn_803787A4(beDataObjString *value);                 // a string's value
void fn_80360DEC(beDataObjInt *value, int newValue);             // sets an int's value
bool fn_80361194(beDataObjBool *value);                          // a bool's value
igStringRefList *fn_803781CC(beDataObjStringList *value);        // a string list's list
igIntList *fn_8037859C(beDataObjIntList *value);                 // an int list's list
void fn_80378124(igStringRefList *list, int index, const igStringRef &value);   // setStringAt
void fn_8037833C(igIntList *list, int index, const int &value);  // setValueAt<int>
void fn_803785C8(beNDMWGameRam *self, bool display);             // sets _isDispFightData
igObject *fn_80344214();                                         // the Message enum, created on first use
void fn_8036CE1C(beNDMWGameRam *self, int player);
void fn_80306AB8(beMessenger *messenger);                        // clears the integer results
}

// The databases, loaded on first use (out-of-line copies of database()).
extern "C" {
beDataBase *fn_80378290(beNDMWGameRam *self);   // enemy attacks ("eneatk")
beDataBase *fn_80378370(beNDMWGameRam *self);   // evolution ("shinka")
beDataBase *fn_80378424(beNDMWGameRam *self);   // player techniques ("pcTech")
beDataBase *fn_803784E0(beNDMWGameRam *self);   // enemies ("enemy")
igRandomNumber *fn_803784D0(beSystem *system);  // the system's random numbers
void fn_803069D8(beMessenger *messenger);       // clears the bool results
}

// igRandomNumber's virtual functions (declarations only).
class igRandomNumberVirtuals : public igObjectVirtuals {
public:
    virtual void v5C();
    virtual unsigned int next();   // 0x60: a random number
};

// A random number from the system.
static inline unsigned int randomNumber(beNDMWGameRam *self)
{
    return reinterpret_cast<igRandomNumberVirtuals *>(fn_803784D0(self->_system))->next();
}

// Experience a Digimon needs to pass level (the NEXTEXP formula).
static inline int experienceAt(int level) { return level * 200 + (level + 140) * (level * level); }

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
