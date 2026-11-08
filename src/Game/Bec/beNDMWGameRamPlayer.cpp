// beNDMWGameRam: the players' data, their equipment and stats (0x8036DA28..0x803714B0).
#include "beNDMWGameRam.h"

#pragma auto_inline off

extern "C" {

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

// Makes request's Digimon the player's and the player active: loads its data, equipment and stats, marks
// it in BASE_ISUSE and recounts the players (NINZU).
void fn_8036EB0C(beNDMWGameRam *self, int player, int request)
{
    beDataObjList *common = self->_commonDataList;
    beDataObjList *data = playerData(self, player);
    int digimon = fn_8036DA28(self, request);
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
