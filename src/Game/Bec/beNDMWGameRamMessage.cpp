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
igResult fn_800633C8(igObject *enumeration, const char *name, int *value);   // a name's value in an enum
igObject *fn_803441B4();                                                    // the FightCom enum
igIntList *fn_803784D8(igObject *enemyWork);   // (hypothesis) an enemy's status list: [3] evasion down
}

// An enemy attack's record: the message carries attacks as kind * 10000 + record.
static inline int attackRecord(int attack) { return attack % 10000; }
static inline int attackKind(int attack) { return attack / 10000; }

// The enemy database's resistance fields, by element (fire, ice, thunder, dark, poison).
static const char *sEnemyResist[5] = {"RES_FIRE", "RES_ICE", "RES_THUNDER", "RES_DARK", "RES_POISON"};

extern "C" void fn_80371524(beNDMWGameRam *self, igObject *data, int baseNo, int *record);

// An element's index (0 fire, 1 ice, 2 thunder, 3 dark, 4 poison), or -1.
static inline int elementIndex(const char *element)
{
    if (strcmp(element, "fire") == 0) return 0;
    if (strcmp(element, "ice") == 0) return 1;
    if (strcmp(element, "thunder") == 0) return 2;
    if (strcmp(element, "dark") == 0) return 3;
    if (strcmp(element, "poison") == 0) return 4;
    return -1;
}

// FIGHTCALC: the battle formulas (FightCom), named by the first string argument. E2P are an enemy's
// actions on a player, P2E a player's on an enemy.
static void fightCalc(beNDMWGameRam *self)
{
    beMessenger *messenger = self->_messenger;
    int command;
    {
        igStringRef name(fn_8030709C(messenger, 0));
        fn_800633C8(fn_803441B4(), name.getString(), &command);
    }
    switch (command) {
    case FightCom::E2PISHITCHECK: {
        // player, enemy, attack: whether an enemy's attack hits a player. The player's guard rate blocks
        // that many attacks in 100; otherwise accuracy * enemy speed against player speed * (evasion + 100%).
        int player = fn_80306B00(messenger, 0);
        int enemy = fn_80306B00(messenger, 1);
        int attack = fn_80306B00(messenger, 2);
        beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
        bool hit = false;
        int record = attackRecord(attack);
        if (fn_8031F608(fn_80378290(self), record, "TYPE") != 0) {
            hit = true;
        } else if (fn_803787AC(fn_8031F3CC(data, "BOUGYORITSU")) <= randomNumber(self) % 100) {
            int speed = fn_803787AC(fn_8031F3CC(data, "SUBAYASA"));
            int evasion = fn_803787AC(fn_8031F3CC(data, "KAIHIRITSU"));
            int enemySpeed = fn_8031F608(fn_803784E0(self), enemy, "SUBAYASA");
            int accuracy = fn_8031F608(fn_80378290(self), record, "MEICHURITSU");
            if (accuracy * enemySpeed / (speed * (evasion + 100) / 100) > (int)(randomNumber(self) % 100)) hit = true;
        }
        fn_803069D8(messenger);
        fn_80306964(messenger, hit);
        break;
    }
    case FightCom::P2EISHITCHECK: {
        // player, enemy, attack (and the enemy's work): whether a player's attack hits an enemy, out of 10000:
        // hit rate * (weapon skill * 20 + 6000 + speed * 30) against enemy speed * (100 - its evasion down)%.
        // Attacks of kind 4 always hit.
        int player = fn_80306B00(messenger, 0);
        int enemy = fn_80306B00(messenger, 1);
        int attack = fn_80306B00(messenger, 2);
        igObject *enemyWork = fn_80306FB4(messenger, 0);
        if (attackKind(attack) == 4) {
            fn_80306964(messenger, true);
            break;
        }
        beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
        int weaponSkill = fn_803787AC(fn_8031F3CC(data, "WEAPONSKILLNO"));
        int speed = fn_803787AC(fn_8031F3CC(data, "SUBAYASA"));
        int skill = intAt(fn_8037859C(fn_8031F3FC(data, "SKILL")), weaponSkill);
        int hitRate = fn_803787AC(fn_8031F3CC(data, "MEICHURITSU"));
        int enemySpeed = fn_8031F608(fn_803784E0(self), enemy, "SUBAYASA");
        int evasionDown = fn_803784D8(enemyWork) == 0 ? 0 : intAt(fn_803784D8(enemyWork), 3);
        int chance = hitRate * (skill * 20 + 6000 + speed * 30) / (enemySpeed * (100 - evasionDown) / 100);
        fn_80306964(messenger, chance > (int)(randomNumber(self) % 10000));
        break;
    }
    case FightCom::P2EISCRITICAL: {
        // player, enemy, attack: whether a player's attack is critical. A weapon attack: the critical rate
        // out of 200. A technique (kind 4): its critical rate, against the enemy's resistance to its element
        // (out of 1000), or out of 100 for a technique without one.
        int player = fn_80306B00(messenger, 0);
        int enemy = fn_80306B00(messenger, 1);
        int attack = fn_80306B00(messenger, 2);
        beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
        bool critical;
        if (attackKind(attack) != 4) {
            critical = fn_803787AC(fn_8031F3CC(data, "CHIMEIRITSU")) > (int)(randomNumber(self) % 200);
        } else {
            int record;
            fn_80371524(self, data, attack % 1000, &record);
            int element = elementIndex(fn_8031F70C(fn_80378424(self), record, "ZOKUSEI"));
            int rate = fn_8031F608(fn_80378424(self), record, "CHIMEIRITSU");
            if (element >= 0) {
                int resist = element < 0 ? 0 : fn_8031F608(fn_803784E0(self), enemy, sEnemyResist[element]);
                critical = (rate + 100) * (10000 / (resist * 12 / 10 + 50)) / 100 > (int)(randomNumber(self) % 1000);
            } else {
                critical = rate > (int)(randomNumber(self) % 100);
            }
        }
        fn_80306964(messenger, critical);
        break;
    }
    case FightCom::GETPATKZOKUSEI: {
        // player, attack: the element of a player's attack: the player's attack element, or a technique's.
        int player = fn_80306B00(messenger, 0);
        int attack = fn_80306B00(messenger, 1);
        beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
        int element;
        if (attackKind(attack) != 4) {
            element = fn_803787AC(fn_8031F3CC(data, "ATTACKZOKUSEI"));
        } else {
            int record;
            fn_80371524(self, data, attackRecord(attack), &record);
            element = elementIndex(fn_8031F70C(fn_80378424(self), record, "ZOKUSEI"));
        }
        fn_80306AB8(messenger);
        fn_80306A40(messenger, element);
        break;
    }
    case FightCom::E2PSTUNTIME: {
        // player, enemy, attack, damage, hit kind (and the enemy's work): how long an enemy's hit stuns a player:
        // 0 when the attack cannot stun, -1 when the player resists. By the attack's TYPE: 0 stuns on hit
        // kinds 1-2 with the enemy's paralysis rate (less its paralysis down), 1 with the attack's own rate, 2
        // on hit kinds 1-2 alone. The chance grows with the damage's share of the player's MHP.
        int player = fn_80306B00(messenger, 0);
        int enemy = fn_80306B00(messenger, 1);
        int attack = fn_80306B00(messenger, 2);
        int damage = fn_80306B00(messenger, 3);
        int hitKind = fn_80306B00(messenger, 4);
        igObject *enemyWork = fn_80306FB4(messenger, 0);
        beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
        int record = attackRecord(attack);
        int enemyRate = 0;
        int attackRate = 0;
        bool stuns = false;
        switch (fn_8031F608(fn_80378290(self), record, "TYPE")) {
        case 0:
            if (hitKind >= 1 && hitKind < 3) {
                int down = fn_803784D8(enemyWork) == 0 ? 0 : intAt(fn_803784D8(enemyWork), 2);
                enemyRate = fn_8031F608(fn_803784E0(self), enemy, "MAHIRITSU") - down;
                stuns = true;
            }
            break;
        case 1:
            attackRate = fn_8031F608(fn_80378290(self), record, "MAHIRITSU");
            if (attackRate > 0) stuns = true;
            break;
        case 2:
            if (hitKind >= 1 && hitKind < 3) stuns = true;
            break;
        }
        int time = 0;
        if (stuns) {
            int maxHp = fn_803787AC(fn_8031F3CC(data, "MHP"));
            int resist = fn_803787AC(fn_8031F3CC(data, "MAHITEIKOU"));
            int power = damage * 50 / maxHp + (attackRate + enemyRate) + resist;
            if ((power + 100) / 2 > (int)(randomNumber(self) % 100)) time = (power + 30) / 4;
            if (time == 0) time = -1;
        }
        fn_80306AB8(messenger);
        fn_80306A40(messenger, time);
        break;
    }
    case FightCom::E2PSLEEPTIME: {
        // player, enemy, attack: how long an enemy's sleep attack puts a player to sleep (0: not a sleep
        // attack, -1: resisted). The enemy's wisdom against the player's spirit scales the attack's effect
        // rank (chance out of 10000) and its effect time.
        int player = fn_80306B00(messenger, 0);
        int enemy = fn_80306B00(messenger, 1);
        int attack = fn_80306B00(messenger, 2);
        beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
        int record = attackRecord(attack);
        int time = 0;
        if (strcmp(fn_8031F70C(fn_80378290(self), record, "KOUKA"), "sleep") == 0) {
            int rank = fn_8031F608(fn_80378290(self), record, "KOUKARANK");
            int wisdom = fn_8031F608(fn_803784E0(self), enemy, "KASHIKOSA");
            int spirit = fn_803787AC(fn_8031F3CC(data, "SEISHIN"));
            int factor = wisdom * 3 / spirit + 100 - spirit / 40;
            if (rank * 5 * factor > (int)(randomNumber(self) % 10000)) time = fn_8031F608(fn_80378290(self), record, "KOUKATIME") * factor / 100;
            if (time == 0) time = -1;
        }
        fn_80306AB8(messenger);
        fn_80306A40(messenger, time);
        break;
    }
    case FightCom::E2PPOISONTIME: {
        // query ("TIME", "DAMAGE" or "GEDOKU"), player, attack: for an enemy's poison (doku) attack, how long
        // it poisons the player (0: not poison, -1: resisted), the poison's damage per tick (the effect rank's
        // percentage of the player's MHP), or the attack's GEDOKU value.
        igStringRef query(fn_8030709C(messenger, 1));
        int player = fn_80306B00(messenger, 0);
        int attack = fn_80306B00(messenger, 1);
        beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
        int record = attackRecord(attack);
        if (strcmp(query.getString(), "TIME") == 0) {
            int time = 0;
            if (strcmp(fn_8031F70C(fn_80378290(self), record, "KOUKA"), "doku") == 0) {
                int rank = fn_8031F608(fn_80378290(self), record, "KOUKARANK");
                int resist = fn_803787AC(fn_8031F3CC(data, "DOKUTEIKOU"));
                if (rank * 15 + resist + 30 > (int)(randomNumber(self) % 100)) time = resist / 2 + fn_8031F608(fn_80378290(self), record, "KOUKATIME");
                if (time == 0) time = -1;
            }
            fn_80306AB8(messenger);
            fn_80306A40(messenger, time);
        } else if (strcmp(query.getString(), "DAMAGE") == 0) {
            int maxHp = fn_803787AC(fn_8031F3CC(data, "MHP"));
            int rank = fn_8031F608(fn_80378290(self), record, "KOUKARANK");
            fn_80306AB8(messenger);
            fn_80306A40(messenger, maxHp * rank / 100);
        } else if (strcmp(query.getString(), "GEDOKU") == 0) {
            int value = fn_8031F608(fn_80378290(self), record, "GEDOKU");
            fn_80306AB8(messenger);
            fn_80306A40(messenger, value);
        }
        break;
    }
    case FightCom::E2PBINDTIME: {
        // player, enemy, attack: how long an enemy's binding (ashidome) attack holds a player (0: not binding,
        // -1: resisted). Attacks of TYPE 2 always bind for their effect time; others as sleep.
        int player = fn_80306B00(messenger, 0);
        int enemy = fn_80306B00(messenger, 1);
        int attack = fn_80306B00(messenger, 2);
        beDataObjList *data = fn_803787D8(fn_803787E8(self), player);
        int record = attackRecord(attack);
        int time = 0;
        if (strcmp(fn_8031F70C(fn_80378290(self), record, "KOUKA"), "ashidome") == 0) {
            int rank = fn_8031F608(fn_80378290(self), record, "KOUKARANK");
            int type = fn_8031F608(fn_80378290(self), record, "TYPE");
            bool binds = true;
            if (type != 2) {
                int wisdom = fn_8031F608(fn_803784E0(self), enemy, "KASHIKOSA");
                int spirit = fn_803787AC(fn_8031F3CC(data, "SEISHIN"));
                if (rank * 5 * (wisdom * 3 / spirit + 100 - spirit / 40) <= (int)(randomNumber(self) % 10000)) binds = false;
            }
            if (binds) {
                if (type == 2) {
                    time = fn_8031F608(fn_80378290(self), record, "KOUKATIME");
                } else {
                    int effectTime = fn_8031F608(fn_80378290(self), record, "KOUKATIME");
                    int wisdom = fn_8031F608(fn_803784E0(self), enemy, "KASHIKOSA");
                    int spirit = fn_803787AC(fn_8031F3CC(data, "SEISHIN"));
                    time = effectTime * (wisdom * 3 / spirit + 100 - spirit / 40) / 100;
                }
            }
            if (time == 0) time = -1;
        }
        fn_80306AB8(messenger);
        fn_80306A40(messenger, time);
        break;
    }
    case FightCom::P2ESTUNTIME: {
        // player, enemy, enemy HP, damage: how long a player's hit stuns an enemy (0: no stun). The chance
        // (out of 100) grows with the paralysis rate and the damage's share of the HP and falls with the
        // enemy's stun resistance; so does the time.
        int player = fn_80306B00(messenger, 0);
        int enemy = fn_80306B00(messenger, 1);
        int hp = fn_80306B00(messenger, 2);
        int damage = fn_80306B00(messenger, 3);
        fn_80306B00(messenger, 4);
        int paralysis = fn_803787AC(fn_8031F3CC(fn_803787D8(fn_803787E8(self), player), "MAHIRITSU"));
        int resist = fn_8031F608(fn_803784E0(self), enemy, "RES_STUN");
        int time = 0;
        if ((paralysis + (damage * 50 / hp + 100) - resist) / 2 > (int)(randomNumber(self) % 100)) {
            time = (200 - resist) * (damage * 30 / hp + paralysis * 3) / 400;
        }
        fn_80306AB8(messenger);
        fn_80306A40(messenger, time);
        break;
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
    case beNDMWGameRam_Message::FIGHTCALC:
        fightCalc(self);
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
