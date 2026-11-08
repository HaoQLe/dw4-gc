// beNDMWGameRam: its message handler (0x803717A4..0x80378124), which answers the scripts' "GAMERAM" requests.
#include "beNDMWGameRam.h"
#include <meta/beNDMWItemBlueArmor.h>
#include <meta/beNDMWItemYellowArmor.h>
#include <meta/beNDMWItemAbilityChip.h>
#include <meta/beNDMWItemDisk.h>

#pragma auto_inline off

extern "C" {
void fn_8036EC3C(beNDMWGameRam *self, int player, const char *model, const igStringRef &text);
void fn_8036EFF4(beNDMWGameRam *self, int player, const char *model, const Ref<beUnicodeObj> &name);
void fn_8036F178(beNDMWGameRam *self, int player);
bool fn_8036E9D4(beNDMWGameRam *self, int player, int digimon);
void fn_8036DF70(beNDMWGameRam *self, int player);
bool fn_8036F220(beNDMWGameRam *self, int player, int delta, int value);
bool fn_8036F364(beNDMWGameRam *self, int player, int delta);
}

// Plays the heal effect on a player's model (after an HP or MP gain).
static inline void healEffect(beNDMWGameRam *self, int player)
{
    const char *model = fn_803787A4(fn_8031F48C(fn_803787D8(fn_803787E8(self), player), "DIGIMONNAME"));
    fn_80305F9C(self->_messenger, "PLAYER", model, player);
    fn_80306FDC(self->_messenger, "250healhit00");
    fn_80306FDC(self->_messenger, "SQ_HEALEFONLY");
    fn_80306B28(self->_messenger, 1.0f);
    Vec3f offset(*reinterpret_cast<const Vec3f *>(lbl_804F8AE0));
    fn_80306C84(self->_messenger, components(offset));
    fn_80306964(self->_messenger, false);
    fn_80306964(self->_messenger, true);
    fn_803061BC(self->_messenger, "SETEFFECT", 1);
}

extern "C" {
beNDMWItemBlueArmor *beNDMWItemBlueArmor_create(void *pool);
beNDMWItemYellowArmor *beNDMWItemYellowArmor_create(void *pool);
beNDMWItemAbilityChip *beNDMWItemAbilityChip_create(void *pool);
void fn_803B0DE8(beNDMWItemBlueArmor *armor, int record, int, int);       // sets armor up from its record
void fn_803B0F20(beNDMWItemYellowArmor *armor, int record, int);
void fn_803B1014(beNDMWItemAbilityChip *chip, int record);
int fn_803B0A6C(igObjectList *disks, int record);                          // the index of the disk with record
void fn_8017E1F4(igObjectList *list, int index);                           // removes element index
extern bool lbl_80561413;   // true
extern bool lbl_80561414;   // false
}

// The item kinds CTRLITEM's DEVICE category names.
enum DeviceKind { DEVICE_WEAPON, DEVICE_ARMOR1, DEVICE_ARMOR2, DEVICE_ABCHIP };
// CTRLITEM's operations.
enum ItemOp { ITEM_SET, ITEM_CLR, ITEM_IS, ITEM_ISMAX, ITEM_ISEQUIP, ITEM_GET, ITEM_ADD };

// Whether item is of kind and record (and equipped, when equipped).
static inline bool isItem(beNDMWItemBase *item, int kind, int record) { return kind == item->_kindNo && record == item->_recNo; }

// CTRLITEM: category ("DEVICE", "DISK", "FLAG" or "BIT"), operation (ItemOp), DEVICE's kind, then player,
// record (or flag, or value), and two more values. Answers a bool (BIT GET answers the BIT).
static void ctrlItem(beNDMWGameRam *self)
{
    beMessenger *messenger = self->_messenger;
    const char *category = fn_8030709C(messenger, 0);
    const char *operation = fn_8030709C(messenger, 1);
    const char *kindName = fn_8030709C(messenger, 2);
    int player = fn_80306B00(messenger, 0);
    int record = fn_80306B00(messenger, 1);
    int arg2 = fn_80306B00(messenger, 2);
    int arg3 = fn_80306B00(messenger, 3);
    int op;
    if (strcmp(operation, "SET") == 0) op = ITEM_SET;
    else if (strcmp(operation, "CLR") == 0) op = ITEM_CLR;
    else if (strcmp(operation, "IS") == 0) op = ITEM_IS;
    else if (strcmp(operation, "ISMAX") == 0) op = ITEM_ISMAX;
    else if (strcmp(operation, "ISEQUIP") == 0) op = ITEM_ISEQUIP;
    else if (strcmp(operation, "GET") == 0) op = ITEM_GET;
    else if (strcmp(operation, "ADD") == 0) op = ITEM_ADD;
    else return;

    if (strcmp(category, "DEVICE") == 0) {
        // The player's devices: at most 36.
        igObjectList *devices = fn_8031F4EC(fn_803787D8(fn_803787E8(self), player), "DEVICEFOLDER")->_data;
        int kind = 0;
        if (op != ITEM_ISMAX) {
            if (strcmp(kindName, "weapon") == 0) kind = DEVICE_WEAPON;
            else if (strcmp(kindName, "armor1") == 0) kind = DEVICE_ARMOR1;
            else if (strcmp(kindName, "armor2") == 0) kind = DEVICE_ARMOR2;
            else if (strcmp(kindName, "abChip") == 0) kind = DEVICE_ABCHIP;
            else return;
        }
        switch (op) {
        case ITEM_SET:
            if (devices->_count == 36) {
                fn_80306964(messenger, false);
                break;
            }
            switch (kind) {
            case DEVICE_WEAPON: {
                Ref<beNDMWItemWeapon> weapon(beNDMWItemWeapon_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemWeapon>::adopt);
                fn_803B0CB4(weapon, record, arg2, arg3);
                fn_80069128(devices, weapon);
                break;
            }
            case DEVICE_ARMOR1: {
                Ref<beNDMWItemBlueArmor> armor(beNDMWItemBlueArmor_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemBlueArmor>::adopt);
                fn_803B0DE8(armor, record, arg2, arg3);
                fn_80069128(devices, armor);
                break;
            }
            case DEVICE_ARMOR2: {
                Ref<beNDMWItemYellowArmor> armor(beNDMWItemYellowArmor_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemYellowArmor>::adopt);
                fn_803B0F20(armor, record, arg2);
                fn_80069128(devices, armor);
                break;
            }
            case DEVICE_ABCHIP: {
                Ref<beNDMWItemAbilityChip> chip(beNDMWItemAbilityChip_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemAbilityChip>::adopt);
                fn_803B1014(chip, record);
                fn_80069128(devices, chip);
                break;
            }
            }
            fn_80306964(messenger, true);
            break;
        case ITEM_CLR: {
            // Removes the first unequipped device of the kind and record.
            bool removed = false;
            int count = devices->_count;
            for (int i = 0; i < count; i++) {
                beNDMWItemBase *device = item<beNDMWItemBase>(devices, i);
                if (isItem(device, kind, record) && !device->_isEquip) {
                    fn_8017E1F4(devices, i);
                    removed = true;
                    break;
                }
            }
            fn_80306964(messenger, removed);
            break;
        }
        case ITEM_IS: {
            int count = devices->_count;
            for (int i = 0; i < count; i++) {
                if (isItem(item<beNDMWItemBase>(devices, i), kind, record)) {
                    fn_80306964(messenger, true);
                    return;
                }
            }
            fn_80306964(messenger, false);
            break;
        }
        case ITEM_ISMAX:
            fn_80306964(messenger, devices->_count == 36);
            break;
        case ITEM_ISEQUIP: {
            bool equipped = false;
            int count = devices->_count;
            for (int i = 0; i < count; i++) {
                beNDMWItemBase *device = item<beNDMWItemBase>(devices, i);
                if (isItem(device, kind, record) && device->_isEquip) {
                    equipped = true;
                    break;
                }
            }
            fn_80306964(messenger, equipped);
            break;
        }
        }
    } else if (strcmp(category, "DISK") == 0) {
        // The player's disks: a stack of at most 9 per record.
        igObjectList *disks = fn_8031F4EC(fn_803787D8(fn_803787E8(self), player), "DISKFOLDER")->_data;
        switch (op) {
        case ITEM_SET: {
            beNDMWItemDisk *disk = item<beNDMWItemDisk>(disks, fn_803B0A6C(disks, record));
            if (disk->_kazu == 9) {
                fn_80306964(messenger, false);
                break;
            }
            int count = disk->_kazu + arg3;
            disk->_kazu = count > 9 ? 9 : count;
            fn_80306964(messenger, true);
            break;
        }
        case ITEM_CLR: {
            beNDMWItemDisk *disk = item<beNDMWItemDisk>(disks, fn_803B0A6C(disks, record));
            if (disk->_kazu == 0) {
                fn_80306964(messenger, false);
                break;
            }
            int count = disk->_kazu - arg3;
            disk->_kazu = count < 0 ? 0 : count;
            fn_80306964(messenger, true);
            break;
        }
        case ITEM_IS:
            fn_80306964(messenger, item<beNDMWItemDisk>(disks, fn_803B0A6C(disks, record))->_kazu != 0);
            break;
        case ITEM_ISMAX:
            fn_80306964(messenger, item<beNDMWItemDisk>(disks, fn_803B0A6C(disks, record))->_kazu == 9);
            break;
        }
    } else if (strcmp(category, "FLAG") == 0) {
        // The common flags: record is the flag. SET and CLR answer whether the flag changed.
        igBoolList *flags = fn_8031F45C(fn_803787F0(self), "FLAGFOLDER")->_data;
        bool *flag = &static_cast<bool *>(flags->_data)[record];
        switch (op) {
        case ITEM_SET:
            if (*flag) {
                fn_80306964(messenger, false);
                break;
            }
            setValueAt(flags, record, lbl_80561413);
            fn_80306964(messenger, true);
            break;
        case ITEM_CLR:
            if (!*flag) {
                fn_80306964(messenger, false);
                break;
            }
            setValueAt(flags, record, lbl_80561414);
            fn_80306964(messenger, true);
            break;
        case ITEM_IS:
            fn_80306964(messenger, *flag);
            break;
        }
    } else if (strcmp(category, "BIT") == 0) {
        // The player's BIT (money): SET to record, GET, or ADD record within 0..9999999.
        beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
        switch (op) {
        case ITEM_SET:
            fn_80360DEC(fn_8031F3CC(data, "BIT"), record);
            break;
        case ITEM_GET:
            fn_80306AB8(messenger);
            fn_80306A40(messenger, fn_803787AC(fn_8031F3CC(data, "BIT")));
            break;
        case ITEM_ADD: {
            int bit = record + fn_803787AC(fn_8031F3CC(data, "BIT"));
            if (bit < 0) bit = 0;
            else if (bit > 9999999) bit = 9999999;
            fn_80360DEC(fn_8031F3CC(data, "BIT"), bit);
            break;
        }
        }
    }
}

extern "C" {

// Answers a GAMERAM message (beNDMWGameRam_Message). Returns false for an unknown message.
bool beNDMWGameRam_virtual90(beNDMWGameRam *self, beBaseInfoRam *ram, beMessengerWork *message)
{
    switch (fn_80304FD8(self->_messenger, fn_80344214(), fn_803787F8(message))) {
    case beNDMWGameRam_Message::GETCOMMON:
        fn_80306E2C(self->_messenger, fn_803787F0(self));
        return true;
    case beNDMWGameRam_Message::GETPLAYER: {
        int player = fn_80306B00(self->_messenger, 0);
        fn_80306E2C(self->_messenger, fn_803787D8(fn_803787E8(self), player));
        return true;
    }
    case beNDMWGameRam_Message::GETPLAYER1:
        fn_80306E2C(self->_messenger, fn_803787D8(fn_803787E8(self), 0));
        return true;
    case beNDMWGameRam_Message::GETPLAYER2:
        fn_80306E2C(self->_messenger, fn_803787D8(fn_803787E8(self), 1));
        return true;
    case beNDMWGameRam_Message::GETPLAYER3:
        fn_80306E2C(self->_messenger, fn_803787D8(fn_803787E8(self), 2));
        return true;
    case beNDMWGameRam_Message::GETPLAYER4:
        fn_80306E2C(self->_messenger, fn_803787D8(fn_803787E8(self), 3));
        return true;
    case beNDMWGameRam_Message::RECALCPLAYER: {
        // Recomputes a player's data, with equipment unless the bool argument says otherwise.
        int player = fn_80306B00(self->_messenger, 0);
        bool equipment = true;
        if (fn_8030690C(self->_messenger) != 0) equipment = fn_80306A1C(self->_messenger, 0);
        fn_8036FDE8(self, player, equipment);
        return true;
    }
    case beNDMWGameRam_Message::BASE2CURRENT: {
        int player = fn_80306B00(self->_messenger, 0);
        fn_8036DBA8(self, player, fn_8036DA28(self, fn_8030709C(self->_messenger, 0)));
        return true;
    }
    case beNDMWGameRam_Message::CURRENT2BASE:
        fn_8036DF70(self, fn_80306B00(self->_messenger, 0));
        return true;
    case beNDMWGameRam_Message::WEAPONEQUIPCHECK: {
        int player = fn_80306B00(self->_messenger, 0);
        fn_80306964(self->_messenger, fn_8036E9D4(self, player, fn_80306B00(self->_messenger, 1)));
        return true;
    }
    case beNDMWGameRam_Message::WEAPONEQUIPSTRONG:
        fn_8036E3B8(self, fn_80306B00(self->_messenger, 0), true);
        return true;
    case beNDMWGameRam_Message::GAMEDATAINIT:
        fn_8036CE1C(self, fn_80306B00(self->_messenger, 0));
        return true;
    case beNDMWGameRam_Message::GAMESTART: {
        // Activates a player with a Digimon (by model name) and a name: a Unicode name object, or text.
        int player = fn_80306B00(self->_messenger, 0);
        const char *model = fn_8030709C(self->_messenger, 0);
        if (fn_80306E1C(self->_messenger) == 1) {
            Ref<beUnicodeObj> name(static_cast<beUnicodeObj *>(fn_80306FB4(self->_messenger, 0)));
            fn_8036EFF4(self, player, model, name);
        } else if (fn_80306FCC(self->_messenger) == 2) {
            igStringRef text(fn_8030709C(self->_messenger, 1));
            fn_8036EC3C(self, player, model, text);
        }
        return true;
    }
    case beNDMWGameRam_Message::GAMEREMOVE:
        fn_8036F178(self, fn_80306B00(self->_messenger, 0));
        return true;
    case beNDMWGameRam_Message::DEADRESTART:
        // Revives every active player with full HP and MP.
        for (int player = 0; player < 4; player++) {
            beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
            if (fn_80361194(fn_8031F42C(data, "ISUSE"))) {
                fn_80360DEC(fn_8031F3CC(data, "HP"), fn_803787AC(fn_8031F3CC(data, "MHP")));
                fn_80360DEC(fn_8031F3CC(data, "MP"), fn_803787AC(fn_8031F3CC(data, "MMP")));
            }
        }
        return true;
    case beNDMWGameRam_Message::ADDHP: {
        // player, delta[, effect[, value]]: changes HP (or sets it to value), with the heal effect.
        int player = fn_80306B00(self->_messenger, 0);
        int delta = fn_80306B00(self->_messenger, 1);
        int effect = fn_80306A30(self->_messenger) < 3 ? 0 : fn_80306B00(self->_messenger, 2);
        int value = fn_80306A30(self->_messenger) < 4 ? -1 : fn_80306B00(self->_messenger, 3);
        if (fn_8036F220(self, player, delta, value) && effect) healEffect(self, player);
        return true;
    }
    case beNDMWGameRam_Message::ADDMP: {
        // player, delta[, effect]: changes MP, with the heal effect.
        int player = fn_80306B00(self->_messenger, 0);
        int delta = fn_80306B00(self->_messenger, 1);
        int effect = 0;
        if (fn_80306A30(self->_messenger) == 3) effect = fn_80306B00(self->_messenger, 2);
        fn_8036F364(self, player, delta);
        if (effect) healEffect(self, player);
        return true;
    }
    case beNDMWGameRam_Message::CTRLPLAYER: {
        // "EXP", op ("SET"/"ADD"), player, value; or "HP"/"MP", query ("GETHP"/"GETMHP", "GETMP"/"GETMMP"),
        // player: answers the queried value.
        const char *what = fn_8030709C(self->_messenger, 0);
        int result = 0;
        if (strcmp(what, "EXP") == 0) {
            const char *op = fn_8030709C(self->_messenger, 1);
            int player = fn_80306B00(self->_messenger, 0);
            int value = fn_80306B00(self->_messenger, 1);
            beDataObjInt *exp = fn_8031F3CC(fn_803787D8(fn_803787E8(self), player), "EXP");
            if (strcmp(op, "SET") == 0) fn_80360DEC(exp, value);
            else if (strcmp(op, "ADD") == 0) fn_80360DEC(exp, value + fn_803787AC(exp));
        } else if (strcmp(what, "HP") == 0) {
            const char *query = fn_8030709C(self->_messenger, 1);
            beDataObjList *data = fn_803787D8(fn_803787E8(self), fn_80306B00(self->_messenger, 0));
            if (strcmp(query, "GETHP") == 0) result = fn_803787AC(fn_8031F3CC(data, "HP"));
            else if (strcmp(query, "GETMHP") == 0) result = fn_803787AC(fn_8031F3CC(data, "MHP"));
        } else if (strcmp(what, "MP") == 0) {
            const char *query = fn_8030709C(self->_messenger, 1);
            beDataObjList *data = fn_803787D8(fn_803787E8(self), fn_80306B00(self->_messenger, 0));
            if (strcmp(query, "GETMP") == 0) result = fn_803787AC(fn_8031F3CC(data, "MP"));
            else if (strcmp(query, "GETMMP") == 0) result = fn_803787AC(fn_8031F3CC(data, "MMP"));
        }
        fn_80306AB8(self->_messenger);
        fn_80306A40(self->_messenger, result);
        return true;
    }
    case beNDMWGameRam_Message::CTRLITEM:
        ctrlItem(self);
        return true;
    case beNDMWGameRam_Message::DISPFIGHTDATA:
        fn_803785C8(self, fn_80306A1C(self->_messenger, 0));
        return true;
    case beNDMWGameRam_Message::BKCHIPBITEXP: {
        // Backs a player's Digimon up to a chip: its name, its BIT and the experience it loses (a fifth of
        // the previous level's span, never below the current level's start) are kept in the common data.
        int player = fn_80306B00(self->_messenger, 0);
        beDataObjList *common = fn_803787F0(self);
        beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
        {
            igStringRef name(fn_803787A4(fn_8031F48C(data, "DIGIMONNAME")));
            fn_80378124(fn_803781CC(fn_8031F4BC(common, "BKCHIPNAME")), player, name);
        }
        int bit = fn_803787AC(fn_8031F3CC(data, "BIT"));
        int slot = player * 2;
        fn_8037833C(fn_8037859C(fn_8031F3FC(common, "BKCHIPDATA")), slot, bit);
        fn_80360DEC(fn_8031F3CC(data, "BIT"), 0);
        slot++;
        int level = fn_803787AC(fn_8031F3CC(data, "LEVEL"));
        if (level == 999 || level == 1) return true;
        int exp = fn_803787AC(fn_8031F3CC(data, "EXP"));
        int levelStart = experienceAt(level - 1);
        int kept = exp - (levelStart - experienceAt(level - 2)) * 2 / 10;
        if (kept < levelStart) kept = levelStart;
        int lost = exp - kept;
        fn_8037833C(fn_8037859C(fn_8031F3FC(common, "BKCHIPDATA")), slot, lost);
        fn_80360DEC(fn_8031F3CC(data, "EXP"), kept);
        return true;
    }
    }
    return false;
}

}
