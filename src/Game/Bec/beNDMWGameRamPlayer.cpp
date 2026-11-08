// beNDMWGameRam: the players' data, their equipment and stats (0x8036DA28..0x803714B0).
#include "beNDMWGameRam.h"

#pragma auto_inline off

extern "C" {

// The number (0-15) of the Digimon whose evolution record's MODEL_NAME is name, or 0.
int fn_8036DA28(beNDMWGameRam *self, const char *name)
{
    POOLED_REF(model, name);
    for (int digimon = 0; digimon < 16; digimon++) {
        if (fn_8031F70C(database(self, self->_dBShinka, "shinka"), digimon, "MODEL_NAME") == model.getString()) return digimon;
    }
    return 0;
}

// Makes digimon the player's Digimon: its number and name, and its level, experience, skills and upgrade
// counts from its BASE_ lists. The first player's Digimon also lends the common data its flags and counters.
void fn_8036DBA8(beNDMWGameRam *self, int player, int digimon)
{
    beDataObjList *data = playerData(self, player);
    fn_8031F3CC(data, "LEVEL");
    fn_8031F3CC(data, "DIGIMONNO")->_data = digimon;
    const char *name = fn_8031F70C(database(self, self->_dBShinka, "shinka"), digimon, "MODEL_NAME");
    setString(fn_8031F48C(data, "DIGIMONNAME")->_data, name);
    fn_8031F3CC(data, "LEVEL")->_data = intAt(fn_8031F3FC(data, "BASE_LEVEL")->_data, digimon);
    fn_8031F3CC(data, "EXP")->_data = intAt(fn_8031F3FC(data, "BASE_EXP")->_data, digimon);
    for (int i = 0; i < 9; i++) {
        int skill = intAt(fn_8031F3FC(data, "BASE_SKILL")->_data, digimon * 9 + i);
        setValueAt(fn_8031F3FC(data, "SKILL")->_data, i, skill);
    }
    for (int i = 0; i < 11; i++) {
        int count = intAt(fn_8031F3FC(data, "BASE_UPCNT")->_data, digimon * 11 + i);
        setValueAt(fn_8031F3FC(data, "UPCNT")->_data, i, count);
    }
    if (player == 0) {
        setRef(fn_8031F45C(self->_commonDataList, "FLAG")->_data, fn_8031F45C(data, "BASE_FLAG")->_data);
        setRef(fn_8031F45C(self->_commonDataList, "FLAGFOLDER")->_data, fn_8031F45C(data, "BASE_FLAGFOLDER")->_data);
        setRef(fn_8031F3FC(self->_commonDataList, "COUNTER")->_data, fn_8031F3FC(data, "BASE_COUNTER")->_data);
    }
}

// Saves the player's current Digimon's level, experience, skills and upgrade counts in its BASE_ lists.
void fn_8036DF70(beNDMWGameRam *self, int player)
{
    beDataObjList *data = playerData(self, player);
    int digimon = fn_8031F3CC(data, "DIGIMONNO")->_data;
    int level = fn_8031F3CC(data, "LEVEL")->_data;
    setValueAt(fn_8031F3FC(data, "BASE_LEVEL")->_data, digimon, level);
    int exp = fn_8031F3CC(data, "EXP")->_data;
    setValueAt(fn_8031F3FC(data, "BASE_EXP")->_data, digimon, exp);
    for (int i = 0; i < 9; i++) {
        int skill = intAt(fn_8031F3FC(data, "SKILL")->_data, i);
        setValueAt(fn_8031F3FC(data, "BASE_SKILL")->_data, digimon * 9 + i, skill);
    }
    for (int i = 0; i < 11; i++) {
        int count = intAt(fn_8031F3FC(data, "UPCNT")->_data, i);
        setValueAt(fn_8031F3FC(data, "BASE_UPCNT")->_data, digimon * 11 + i, count);
    }
}

// The evolution database's fields naming a Digimon's three starting weapons.
static const char *sStartWeapons[3] = {"INI_WEAPON1", "INI_WEAPON2", "INI_WEAPON3"};

// Empties the player's device folder and gives it its Digimon's three starting weapons.
void fn_8036E124(beNDMWGameRam *self, int player)
{
    beDataObjList *data = playerData(self, player);
    igObjectList *devices = fn_8031F4EC(data, "DEVICEFOLDER")->_data;
    int digimon = fn_8031F3CC(data, "DIGIMONNO")->_data;
    removeAll(devices);
    for (int i = 0; i < 3; i++) {
        Ref<beNDMWItemWeapon> weapon(beNDMWItemWeapon_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemWeapon>::adopt);
        fn_803B0CB4(weapon, fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, sStartWeapons[i]), 0, 0);
        fn_80069128(devices, weapon);
    }
}

// Equips the player's weapons (devices of kind 0) in its power socket, recording their model names. Without
// autoEquip, the first three; with it, only the strongest (TSUYOSA) the Digimon can equip and has the skill
// for.
void fn_8036E3B8(beNDMWGameRam *self, int player, bool autoEquip)
{
    beDataObjList *data = playerData(self, player);
    igObjectList *devices = fn_8031F4EC(data, "DEVICEFOLDER")->_data;
    if (!autoEquip) {
        igObjectList *socket = fn_8031F4EC(data, "POWERSOCKET")->_data;
        igStringRefList *names = fn_8031F4BC(data, "POWERSOCKETNAME")->_data;
        removeAll(socket);
        clearStrings(names);
        int count = devices->_count;
        for (int i = 0; i < count; i++) {
            if (socket->_count == 3) return;
            beNDMWItemBase *device = item<beNDMWItemBase>(devices, i);
            if (device->_kindNo == 0) {
                fn_80069128(socket, device);
                POOLED_REF(model, fn_803B0790(device, self, "MODEL"));
                fn_8002080C(names, model);
                device->_isEquip = true;
            }
        }
        return;
    }
    int digimon = fn_8031F3CC(data, "DIGIMONNO")->_data;
    igIntList *skills = fn_8031F3FC(data, "SKILL")->_data;
    igObjectList *socket = fn_8031F4EC(data, "POWERSOCKET")->_data;
    igStringRefList *names = fn_8031F4BC(data, "POWERSOCKETNAME")->_data;
    for (int i = 0; i < devices->_count; i++) {
        beNDMWItemBase *device = item<beNDMWItemBase>(devices, i);
        if (device->_kindNo == 0) device->_isEquip = false;
    }
    fn_80068FCC(socket, 0);
    clearStrings(names);
    int bit = 1 << digimon;
    int bestStrength = 0;
    int best = -1;
    int count = devices->_count;
    for (int i = 0; i < count; i++) {
        beNDMWItemBase *device = item<beNDMWItemBase>(devices, i);
        if (device->_kindNo == 0) {
            int fits = bit & fn_803B06F0(device, self, "SOUBI");
            int skill = fn_803B06F0(device, self, "SKILL");
            int points = fn_803B06F0(device, self, "SKILLPOINT");
            if (fits && intAt(skills, skill) >= points) {
                if (best < 0 || bestStrength < fn_803B06F0(device, self, "TSUYOSA")) {
                    best = i;
                    bestStrength = fn_803B06F0(device, self, "TSUYOSA");
                }
            }
        }
    }
    if (best >= 0) {
        beNDMWItemBase *weapon = item<beNDMWItemBase>(devices, best);
        setObjectAt(socket, 0, weapon);
        POOLED_REF(model, fn_803B0790(weapon, self, "MODEL"));
        fn_8002080C(names, model);
        weapon->_isEquip = true;
    }
}

// Whether a device of kind 0 in the player's device folder fits digimon (its SOUBI mask) and digimon has
// enough points in the device's skill (hypothesis: the device can be learned).
bool fn_8036E9D4(beNDMWGameRam *self, int player, int digimon)
{
    beDataObjList *data = playerData(self, player);
    igObjectList *devices = fn_8031F4EC(data, "DEVICEFOLDER")->_data;
    igIntList *skills;
    int base;
    if (fn_8031F3CC(data, "DIGIMONNO")->_data == digimon) {
        skills = fn_8031F3FC(data, "SKILL")->_data;
        base = 0;
    } else {
        skills = fn_8031F3FC(data, "BASE_SKILL")->_data;
        base = digimon * 9;
    }
    int bit = 1 << digimon;
    int count = devices->_count;
    for (int i = 0; i < count; i++) {
        beNDMWItemBase *device = item<beNDMWItemBase>(devices, i);
        if (device->_kindNo == 0) {
            int fits = bit & fn_803B06F0(device, self, "SOUBI");
            int skill = fn_803B06F0(device, self, "SKILL");
            int points = fn_803B06F0(device, self, "SKILLPOINT");
            if (fits && intAt(skills, base + skill) >= points) return true;
        }
    }
    return false;
}

// Makes the Digimon named model the player's and the player active: loads its data, equipment and stats, marks
// it in BASE_ISUSE and recounts the players (NINZU).
void fn_8036EB0C(beNDMWGameRam *self, int player, const char *model)
{
    beDataObjList *common = self->_commonDataList;
    beDataObjList *data = playerData(self, player);
    int digimon = fn_8036DA28(self, model);
    fn_8036DBA8(self, player, digimon);
    fn_8036E124(self, player);
    fn_8036E3B8(self, player, 0);
    fn_8036FDE8(self, player, 1);
    fn_8031F42C(data, "ISUSE")->_data = true;
    setValueAt(fn_8031F45C(data, "BASE_ISUSE")->_data, digimon, lbl_80561412);
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (fn_8031F42C(playerData(self, i), "ISUSE")->_data) count++;
    }
    fn_8031F3CC(common, "NINZU")->_data = count;
}

// Sets the player's HP to value (or, with value -1, changes it by delta unless it is 0), within 0..MHP, and
// shows it on the HP meter and number. Returns false when the player is down.
bool fn_8036F220(beNDMWGameRam *self, int player, int delta, int value)
{
    beDataObjList *data = playerData(self, player);
    int maxHp = fn_8031F3CC(data, "MHP")->_data;
    int hp = fn_8031F3CC(data, "HP")->_data;
    if (value == -1) {
        if (hp == 0) return false;
        value = hp + delta;
    }
    if (value < 0) value = 0;
    if (value > maxHp) value = maxHp;
    fn_8031F3CC(data, "HP")->_data = value;
    fn_80305344(self->_messenger, "METERCTRL", "hpmt", player);
    fn_80306B28(self->_messenger, 100.0f * (float)value / (float)maxHp);
    fn_80305A28(self->_messenger, "SETPERCENT");
    fn_80305344(self->_messenger, "NUMBERCTRL", "hpnm", player);
    fn_80306A40(self->_messenger, value);
    fn_80305A28(self->_messenger, "SETVALUE");
    return true;
}

// Changes the player's MP by delta, within 0..MMP, and shows it on the MP meter and number.
bool fn_8036F364(beNDMWGameRam *self, int player, int delta)
{
    beDataObjList *data = playerData(self, player);
    int maxMp = fn_8031F3CC(data, "MMP")->_data;
    int mp = fn_8031F3CC(data, "MP")->_data + delta;
    if (mp < 0) mp = 0;
    if (mp > maxMp) mp = maxMp;
    fn_8031F3CC(data, "MP")->_data = mp;
    fn_80305344(self->_messenger, "METERCTRL", "mpmt", player);
    fn_80306B28(self->_messenger, 100.0f * (float)mp / (float)maxMp);
    fn_80305A28(self->_messenger, "SETPERCENT");
    fn_80305344(self->_messenger, "NUMBERCTRL", "mpnm", player);
    fn_80306A40(self->_messenger, mp);
    fn_80305A28(self->_messenger, "SETVALUE");
    return true;
}

// Activates the player with the Digimon named model and names the player text (at most 8 characters,
// converted to Unicode by the font manager).
void fn_8036EC3C(beNDMWGameRam *self, int player, const char *model, const char *const &text)
{
    fn_8036EB0C(self, player, model);
    beDataObjList *data = playerData(self, player);
    Ref<beUnicodeObj> name(beUnicodeObj_create(poolFor(self, lbl_80562258)), Ref<beUnicodeObj>::adopt);
    fn_802FC878(name, 8);
    {
        Ref<beUnicodeObj> converted(fn_802FB59C(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beFont_meta)), text));
        unsigned short *to = static_cast<unsigned short *>(name->_buffer);
        const unsigned short *from = static_cast<const unsigned short *>(converted->_buffer);
        int i = 0;
        while (i < 8) {
            to[i] = from[i];
            if (from[i] == 0) break;
            i++;
        }
        for (; i < 8; i++) to[i] = 0;
    }
    igObjectList *names = fn_8031F4EC(data, "PLAYERNAME")->_data;
    if (names->_count != 0) removeAll(names);
    fn_80069128(names, name);
}

// Activates the player with the Digimon named model and gives it name.
void fn_8036EFF4(beNDMWGameRam *self, int player, const char *model, const Ref<beUnicodeObj> &name)
{
    fn_8036EB0C(self, player, model);
    igObjectList *names = fn_8031F4EC(playerData(self, player), "PLAYERNAME")->_data;
    if (names->_count != 0) removeAll(names);
    fn_80069128(names, name);
}

// Growth by level band: a Digimon's level falls in the first band whose end it does not exceed; within a band
// a value grows by the band's slope per level from the band's base (in hundredths of a growth point).
static int sBandEnd[10] = {5, 10, 20, 30, 50, 70, 110, 150, 230, 999};
static int sGaugeBandBase[10] = {0, 40, 140, 640, 1440, 3840, 7440, 17840, 25040, 34640};   // HP and MP
static int sBandStart[10] = {1, 5, 10, 20, 30, 50, 70, 110, 150, 230};
static int sGaugeBandSlope[10] = {10, 20, 50, 80, 120, 180, 260, 180, 120, 80};
static int sStatBandBase[10] = {0, 40, 85, 165, 235, 355, 455, 615, 735, 895};               // the other stats
static int sStatBandSlope[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
// The evolution database's fields for the stats strength, defense, intelligence, spirit and speed.
static const char *sStatInitial[5] = {"STR_INI", "AC_INI", "INT_INI", "MND_INI", "DEX_INI"};
static const char *sStatGrowth[5] = {"STR_GROW", "AC_GROW", "INT_GROW", "MND_GROW", "DEX_GROW"};

// The band of a level.
static inline int levelBand(int level)
{
    int band = 0;
    while (level > sBandEnd[band]) band++;
    return band;
}

// A Digimon's maximum HP (hp) or MP: its initial value, plus its growth times its level's band factor (in
// hundredths), plus its upgrade count, at most 99999. digimon < 0 means the player's current Digimon.
int fn_8036F808(beNDMWGameRam *self, int player, int digimon, bool hp)
{
    beDataObjList *data = playerData(self, player);
    igIntList *upCounts;
    int base;
    int level;
    if (digimon < 0) {
        digimon = fn_8031F3CC(data, "DIGIMONNO")->_data;
        upCounts = fn_8031F3FC(data, "UPCNT")->_data;
        base = 0;
        level = fn_8031F3CC(data, "LEVEL")->_data;
    } else {
        upCounts = fn_8031F3FC(data, "BASE_UPCNT")->_data;
        base = digimon * 11;
        level = intAt(fn_8031F3FC(data, "BASE_LEVEL")->_data, digimon);
    }
    int initial;
    int growth;
    int ups;
    if (hp) {
        initial = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, "MHP_INI");
        growth = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, "MHP_GROW");
        ups = intAt(upCounts, base);
    } else {
        initial = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, "MMP_INI");
        growth = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, "MMP_GROW");
        ups = intAt(upCounts, base + 1);
    }
    int band = levelBand(level);
    int value = initial + (growth * (sGaugeBandBase[band] + sGaugeBandSlope[band] * (level - sBandStart[band])) / 100 + ups);
    if (value > 99999) value = 99999;
    return value;
}

// A Digimon's stat (0 strength, 1 defense, 2 intelligence, 3 spirit, 4 speed), as fn_8036F808 with the stat
// band tables, at most 9999.
int fn_8036FB80(beNDMWGameRam *self, int player, int digimon, int stat)
{
    beDataObjList *data = playerData(self, player);
    igIntList *upCounts;
    int base;
    int level;
    if (digimon < 0) {
        digimon = fn_8031F3CC(data, "DIGIMONNO")->_data;
        upCounts = fn_8031F3FC(data, "UPCNT")->_data;
        base = 0;
        level = fn_8031F3CC(data, "LEVEL")->_data;
    } else {
        upCounts = fn_8031F3FC(data, "BASE_UPCNT")->_data;
        base = digimon * 11;
        level = intAt(fn_8031F3FC(data, "BASE_LEVEL")->_data, digimon);
    }
    int initial = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, sStatInitial[stat]);
    int growth = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, sStatGrowth[stat]);
    int ups = intAt(upCounts, base + stat + 2);
    int band = levelBand(level);
    int value = initial + (growth * (sStatBandBase[band] + sStatBandSlope[band] * (level - sBandStart[band])) / 100 + ups);
    if (value > 9999) value = 9999;
    return value;
}

// The attack elements a power pocket chip's ZOKUSEI can name (ATTACKZOKUSEI is the index).
static const char *sElements[4] = {"fire", "ice", "thunder", "dark"};
// The evolution database's fields for a Digimon's six techniques: the technique record, the level that
// unlocks it and, per rank, the points of the technique's skill the rank needs.
static const char *sTechs[6] = {"TECH1", "TECH2", "TECH3", "TECH4", "TECH5", "TECH6"};
static const char *sTechLevels[6] = {"TECH1_LEVEL", "TECH2_LEVEL", "TECH3_LEVEL", "TECH4_LEVEL", "TECH5_LEVEL", "TECH6_LEVEL"};
static const char *sTechRanks[6][5] = {
    {"TECH1_SKILL1", "TECH1_SKILL2", "TECH1_SKILL3", "TECH1_SKILL4", "TECH1_SKILL5"},
    {"TECH2_SKILL1", "TECH2_SKILL2", "TECH2_SKILL3", "TECH2_SKILL4", "TECH2_SKILL5"},
    {"TECH3_SKILL1", "TECH3_SKILL2", "TECH3_SKILL3", "TECH3_SKILL4", "TECH3_SKILL5"},
    {"TECH4_SKILL1", "TECH4_SKILL2", "TECH4_SKILL3", "TECH4_SKILL4", "TECH4_SKILL5"},
    {"TECH5_SKILL1", "TECH5_SKILL2", "TECH5_SKILL3", "TECH5_SKILL4", "TECH5_SKILL5"},
    {"TECH6_SKILL1", "TECH6_SKILL2", "TECH6_SKILL3", "TECH6_SKILL4", "TECH6_SKILL5"},
};

// A stat's range.
static inline int clampStat(int value)
{
    if (value < 1) value = 1;
    if (value > 9999) value = 9999;
    return value;
}

// Recomputes the player's derived data from its Digimon, level, upgrades and buffs (UPDATA/DOWNDATA):
// maximum HP and MP (refilling them after a knockout), the five stats, the elemental resistances, the
// technique list and the experience for the next level. With equipment, the equipped items' values are
// added, and the combat rates, attack element, drains and weapon are recomputed too.
void fn_8036FDE8(beNDMWGameRam *self, int player, bool equipment)
{
    beDataObjList *data = playerData(self, player);
    int digimon = fn_8031F3CC(data, "DIGIMONNO")->_data;
    int level = fn_8031F3CC(data, "LEVEL")->_data;
    bool down = false;

    int maxHp = fn_8036F808(self, player, -1, true);
    maxHp += intAt(fn_8031F3FC(data, "UPDATA")->_data, 6);
    if (equipment) {
        fn_8036F5DC(self, data, &maxHp, "MAXHP", false);
        fn_8036F734(self, data, &maxHp, "MAXHP", false);
    }
    if (maxHp > 99999) maxHp = 99999;
    fn_8031F3CC(data, "MHP")->_data = maxHp;
    int hp = fn_8031F3CC(data, "HP")->_data;
    if (hp == 0) down = true;
    if (hp == 0 || hp > maxHp) fn_8031F3CC(data, "HP")->_data = maxHp;

    int maxMp = fn_8036F808(self, player, -1, false);
    if (equipment) {
        fn_8036F5DC(self, data, &maxMp, "MAXMP", false);
        fn_8036F734(self, data, &maxMp, "MAXMP", false);
    }
    if (maxMp > 99999) maxMp = 99999;
    fn_8031F3CC(data, "MMP")->_data = maxMp;
    int mp = fn_8031F3CC(data, "MP")->_data;
    if (down || mp > maxMp) fn_8031F3CC(data, "MP")->_data = maxMp;

    int strength = fn_8036FB80(self, player, -1, 0);
    strength += intAt(fn_8031F3FC(data, "UPDATA")->_data, 4);
    strength -= intAt(fn_8031F3FC(data, "DOWNDATA")->_data, 4);
    if (equipment) {
        fn_8036F484(self, data, &strength, "TSUYOSA", true);
        fn_8036F534(self, data, &strength, "TSUYOSA");
        fn_8036F734(self, data, &strength, "TSUYOSA", true);
    }
    fn_8031F3CC(data, "TSUYOSA")->_data = clampStat(strength);

    int defense = fn_8036FB80(self, player, -1, 1);
    defense += intAt(fn_8031F3FC(data, "UPDATA")->_data, 5);
    defense -= intAt(fn_8031F3FC(data, "DOWNDATA")->_data, 5);
    if (equipment) {
        fn_8036F5DC(self, data, &defense, "MAMORI", true);
        fn_8036F734(self, data, &defense, "MAMORI", true);
    }
    fn_8031F3CC(data, "MAMORI")->_data = clampStat(defense);

    int wisdom = fn_8036FB80(self, player, -1, 2);
    if (equipment) {
        fn_8036F484(self, data, &wisdom, "KASHIKOSA", false);
        fn_8036F534(self, data, &wisdom, "KASHIKOSA");
        fn_8036F5DC(self, data, &wisdom, "KASHIKOSA", false);
        fn_8036F68C(self, data, &wisdom, "KASHIKOSA");
        fn_8036F734(self, data, &wisdom, "KASHIKOSA", true);
    }
    fn_8031F3CC(data, "KASHIKOSA")->_data = clampStat(wisdom);

    int spirit = fn_8036FB80(self, player, -1, 3);
    if (equipment) {
        fn_8036F484(self, data, &spirit, "SEISHIN", false);
        fn_8036F534(self, data, &spirit, "SEISHIN");
        fn_8036F5DC(self, data, &spirit, "SEISHIN", false);
        fn_8036F68C(self, data, &spirit, "SEISHIN");
        fn_8036F734(self, data, &spirit, "SEISHIN", false);
    }
    fn_8031F3CC(data, "SEISHIN")->_data = clampStat(spirit);

    int speed = fn_8036FB80(self, player, -1, 4);
    speed += intAt(fn_8031F3FC(data, "UPDATA")->_data, 0);
    speed -= intAt(fn_8031F3FC(data, "DOWNDATA")->_data, 0);
    if (equipment) {
        fn_8036F484(self, data, &speed, "SUBAYASA", false);
        fn_8036F534(self, data, &speed, "SUBAYASA");
        fn_8036F5DC(self, data, &speed, "SUBAYASA", false);
        fn_8036F68C(self, data, &speed, "SUBAYASA");
        fn_8036F734(self, data, &speed, "SUBAYASA", true);
    }
    fn_8031F3CC(data, "SUBAYASA")->_data = clampStat(speed);

    int fire = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, "RES_FIRE");
    fire += intAt(fn_8031F3FC(data, "UPCNT")->_data, 7);
    fire += intAt(fn_8031F3FC(data, "UPDATA")->_data, 7);
    if (equipment) {
        fn_8036F5DC(self, data, &fire, "RES_FIRE", false);
        fn_8036F68C(self, data, &fire, "RES_FIRE");
        fn_8036F734(self, data, &fire, "RES_FIRE", true);
    }
    fn_8031F3CC(data, "HONOOTEIKO")->_data = clampStat(fire);

    int ice = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, "RES_ICE");
    ice += intAt(fn_8031F3FC(data, "UPCNT")->_data, 8);
    ice += intAt(fn_8031F3FC(data, "UPDATA")->_data, 8);
    if (equipment) {
        fn_8036F5DC(self, data, &ice, "RES_ICE", false);
        fn_8036F68C(self, data, &ice, "RES_ICE");
        fn_8036F734(self, data, &ice, "RES_ICE", true);
    }
    fn_8031F3CC(data, "KOORITEIKO")->_data = clampStat(ice);

    int thunder = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, "RES_THUNDER");
    thunder += intAt(fn_8031F3FC(data, "UPCNT")->_data, 9);
    thunder += intAt(fn_8031F3FC(data, "UPDATA")->_data, 9);
    if (equipment) {
        fn_8036F5DC(self, data, &thunder, "RES_THUNDER", false);
        fn_8036F68C(self, data, &thunder, "RES_THUNDER");
        fn_8036F734(self, data, &thunder, "RES_THUNDER", true);
    }
    fn_8031F3CC(data, "KAMINARITEIKO")->_data = clampStat(thunder);

    int dark = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, "RES_DARK");
    dark += intAt(fn_8031F3FC(data, "UPCNT")->_data, 10);
    dark += intAt(fn_8031F3FC(data, "UPDATA")->_data, 10);
    if (equipment) {
        fn_8036F5DC(self, data, &dark, "RES_DARK", false);
        fn_8036F68C(self, data, &dark, "RES_DARK");
        fn_8036F734(self, data, &dark, "RES_DARK", true);
    }
    fn_8031F3CC(data, "YAMITEIKO")->_data = clampStat(dark);

    // The techniques: for each unlocked slot, the highest rank whose skill points the player has.
    igObjectList *techniques = fn_8031F4EC(data, "WAZALIST")->_data;
    removeAll(techniques);
    for (int slot = 0; slot < 6; slot++) {
        int technique = fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, sTechs[slot]);
        int skill = fn_8031F608(database(self, self->_dBPcTech, "pcTech"), technique, "SKILL");
        int points = intAt(fn_8031F3FC(data, "SKILL")->_data, skill);
        if (fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, sTechLevels[slot]) > level) continue;
        for (int rank = 4; rank >= 0; rank--) {
            if (fn_8031F608(database(self, self->_dBShinka, "shinka"), digimon, sTechRanks[slot][rank]) <= points) {
                Ref<beNDMWItemWaza> waza(beNDMWItemWaza_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemWaza>::adopt);
                fn_803B17B0(waza, technique + rank, technique);
                fn_80069128(techniques, waza);
                break;
            }
        }
    }
    fn_8031F3CC(data, "NEXTEXP")->_data = level == 999 ? 0 : level * 200 + (level + 140) * (level * level);

    if (equipment) {
        int delay = intAt(fn_8031F3FC(data, "DOWNDATA")->_data, 6);
        fn_8036F484(self, data, &delay, "DELAY", false);
        if (delay > 70) delay = 70;
        fn_8031F3CC(data, "ATTACKDELAY")->_data = delay;

        int hit = 0;
        fn_8036F484(self, data, &hit, "MEICHURITSU", false);
        fn_8031F3CC(data, "MEICHURITSU")->_data = hit;

        int critical = 0;
        critical += intAt(fn_8031F3FC(data, "UPDATA")->_data, 1);
        critical -= intAt(fn_8031F3FC(data, "DOWNDATA")->_data, 1);
        fn_8036F484(self, data, &critical, "CHIMEIRITSU", false);
        fn_8036F534(self, data, &critical, "CHIMEIRITSU");
        if (critical < 1) critical = 1;
        fn_8031F3CC(data, "CHIMEIRITSU")->_data = critical;

        int paralysis = 0;
        fn_8036F484(self, data, &paralysis, "MAHIRITSU", false);
        fn_8031F3CC(data, "MAHIRITSU")->_data = paralysis;

        int evasion = 0;
        evasion += intAt(fn_8031F3FC(data, "UPDATA")->_data, 3);
        evasion -= intAt(fn_8031F3FC(data, "DOWNDATA")->_data, 3);
        fn_8036F68C(self, data, &evasion, "CHOHATURITSU");
        if (evasion < 1) evasion = 1;
        fn_8031F3CC(data, "KAIHIRITSU")->_data = evasion;

        int guard = 0;
        fn_8036F5DC(self, data, &guard, "BOUGYORITSU", false);
        fn_8031F3CC(data, "BOUGYORITSU")->_data = guard;

        int paralysisResist = 0;
        paralysisResist += intAt(fn_8031F3FC(data, "UPDATA")->_data, 2);
        paralysisResist -= intAt(fn_8031F3FC(data, "DOWNDATA")->_data, 2);
        fn_8036F5DC(self, data, &paralysisResist, "MAHITEIKOU", false);
        if (paralysisResist < 1) paralysisResist = 1;
        fn_8031F3CC(data, "MAHITEIKOU")->_data = paralysisResist;

        int poisonResist = 0;
        fn_8036F5DC(self, data, &poisonResist, "DOKUTEIKOU", false);
        fn_8031F3CC(data, "DOKUTEIKOU")->_data = poisonResist;

        int bitRate = 0;
        fn_8036F734(self, data, &bitRate, "BITRITSU", false);
        fn_8031F3CC(data, "BITRITSU")->_data = bitRate;

        int expRate = 0;
        fn_8036F734(self, data, &expRate, "EXPRITSU", false);
        fn_8031F3CC(data, "EXPRITSU")->_data = expRate;

        int luck = 0;
        fn_8036F734(self, data, &luck, "LUCKRITSU", false);
        fn_8031F3CC(data, "LUCKRITSU")->_data = luck;

        // The attack element: the first power pocket chip naming one.
        fn_8031F3CC(data, "ATTACKZOKUSEI")->_data = -1;
        bool found = false;
        int count = fn_8031F4EC(data, "POWERPOCKET")->_data->_count;
        for (int i = 0; i < count; i++) {
            beNDMWItemBase *chip = item<beNDMWItemBase>(fn_8031F4EC(data, "POWERPOCKET")->_data, i);
            if (!chip) continue;
            const char *element = fn_803B0790(chip, self, "ZOKUSEI");
            for (int e = 0; e < 4; e++) {
                if (strcmp(element, sElements[e]) == 0) {
                    fn_8031F3CC(data, "ATTACKZOKUSEI")->_data = e;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        int hpDrain = 0;
        fn_8036F534(self, data, &hpDrain, "HPDRAIN");
        fn_8031F3CC(data, "HPDRAIN")->_data = hpDrain;
        int mpDrain = 0;
        fn_8036F534(self, data, &mpDrain, "MPDRAIN");
        fn_8031F3CC(data, "MPDRAIN")->_data = mpDrain;
        fn_8031F3CC(data, "CHOHATURITSU")->_data = fn_8031F3CC(data, "KAIHIRITSU")->_data;
    }

    // The equipped weapon's record and skill, and the socket's model names.
    if (equipment) {
        int weaponRecord = 0;
        int weaponSkill = 0;
        beNDMWItemBase *weapon = item<beNDMWItemBase>(fn_8031F4EC(data, "POWERSOCKET")->_data, 0);
        if (weapon) {
            weaponRecord = weapon->_recNo;
            weaponSkill = fn_803B06F0(weapon, self, "SKILL");
        }
        fn_8031F3CC(data, "WEAPONRECNO")->_data = weaponRecord;
        fn_8031F3CC(data, "WEAPONSKILLNO")->_data = weaponSkill;
        igObjectList *socket = fn_8031F4EC(data, "POWERSOCKET")->_data;
        igStringRefList *names = fn_8031F4BC(data, "POWERSOCKETNAME")->_data;
        clearStrings(names);
        for (int i = 0; i < socket->_count; i++) {
            beNDMWItemBase *equipped = item<beNDMWItemBase>(socket, i);
            if (equipped) {
                POOLED_REF(model, fn_803B0790(equipped, self, "MODEL"));
                fn_8002080C(names, model);
            }
        }
    }
}

// Marks a player as not taking part and recounts the players who do (NINZU).
void fn_8036F178(beNDMWGameRam *self, int player)
{
    beDataObjList *common = self->_commonDataList;
    fn_8031F42C(playerData(self, player), "ISUSE")->_data = false;
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (fn_8031F42C(playerData(self, i), "ISUSE")->_data) count++;
    }
    fn_8031F3CC(common, "NINZU")->_data = count;
}

// Adds the power socket's item's field to *total, and its bonus when withBonus.
void fn_8036F484(beNDMWGameRam *self, igObject *data, int *total, const char *field, bool withBonus)
{
    if (fn_8031F4EC(data, "POWERSOCKET")->_data->_count != 0) {
        BonusItem *chip = item<BonusItem>(fn_8031F4EC(data, "POWERSOCKET")->_data, 0);
        if (chip) {
            *total += fn_803B06F0(chip, self, field);
            if (withBonus) *total += chip->unknown14;
        }
    }
}

// Adds every power pocket item's field to *total.
void fn_8036F534(beNDMWGameRam *self, igObject *data, int *total, const char *field)
{
    int count = fn_8031F4EC(data, "POWERPOCKET")->_data->_count;
    for (int i = 0; i < count; i++) {
        beNDMWItemBase *pocketItem = item<beNDMWItemBase>(fn_8031F4EC(data, "POWERPOCKET")->_data, i);
        if (pocketItem) *total += fn_803B06F0(pocketItem, self, field);
    }
}

// Adds the main slot's item's field to *total, and its bonus when withBonus.
void fn_8036F5DC(beNDMWGameRam *self, igObject *data, int *total, const char *field, bool withBonus)
{
    if (fn_8031F4EC(data, "MAINSLOT")->_data->_count != 0) {
        BonusItem *chip = item<BonusItem>(fn_8031F4EC(data, "MAINSLOT")->_data, 0);
        if (chip) {
            *total += fn_803B06F0(chip, self, field);
            if (withBonus) *total += chip->unknown14;
        }
    }
}

// Adds every main pocket item's field to *total.
void fn_8036F68C(beNDMWGameRam *self, igObject *data, int *total, const char *field)
{
    int count = fn_8031F4EC(data, "MAINPOCKET")->_data->_count;
    for (int i = 0; i < count; i++) {
        beNDMWItemBase *pocketItem = item<beNDMWItemBase>(fn_8031F4EC(data, "MAINPOCKET")->_data, i);
        if (pocketItem) *total += fn_803B06F0(pocketItem, self, field);
    }
}

// Adds the sub slot's chip's field to *total, and its bonus when withBonus and the chip raises that field.
void fn_8036F734(beNDMWGameRam *self, igObject *data, int *total, const char *field, bool withBonus)
{
    if (fn_8031F4EC(data, "SUBSLOT")->_data->_count != 0) {
        BonusItem *chip = item<BonusItem>(fn_8031F4EC(data, "SUBSLOT")->_data, 0);
        if (chip) {
            *total += fn_803B06F0(chip, self, field);
            if (withBonus && strcmp(fn_803B0790(chip, self, "SHUSEINOURYOKU"), field) == 0) *total += chip->unknown14;
        }
    }
}

}
