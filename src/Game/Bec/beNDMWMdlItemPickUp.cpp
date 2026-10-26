// beNDMWMdlItem: picking an item up (ACTION1) (0x803AC0E8..0x803AC43C).
#include "beNDMWMdlItem.h"

#pragma auto_inline off

extern "C" {


// ACTION1 from the player the label shows to: picks the item up if there is room (at most 36 devices; at most 9
// of a disk), into the player's device folder, disk folder or the common flags (keys); then the item plays
// SQ_DDMG, the label is taken down (virtual 0xB4) and the reply is true.
void beNDMWMdlItem_virtualBC(beNDMWMdlItem *self, beBaseInfoRam *ram)
{
    const beNDMWMdlItemPool &pool = lbl_8045C288;
    beNDMWMdlItemInfoWork *work = static_cast<beNDMWMdlItemInfoWork *>(ramDataOf(ram, pool.ONE)->_work);
    if (fn_8030690C(self->_messenger) != 0 || !work->_isNamed || !work->_isDispName) return;
    int player = fn_80306B00(self->_messenger, 0);
    if (player != work->_dispPlayerRamNo) return;
    bool room = true;
    fn_80306604(self->_messenger);
    fn_80305EA8(self->_messenger, pool.GAMERAM);
    fn_80306A40(self->_messenger, player);
    fn_80305A28(self->_messenger, pool.GETPLAYER);
    igObject *data = fn_80306FB4(self->_messenger, 0);
    switch (work->_kind) {
    case 3:
    case 4:
    case 9:
        if (fn_8031F4EC(data, pool.DEVICEFOLDER)->_data->_count >= 36) room = false;
        break;
    case 5:
    case 6:
    case 8: {
        igObjectList *disks = fn_8031F4EC(data, pool.DISKFOLDER)->_data;
        if (reinterpret_cast<int *>(item<igObject>(disks, fn_803B0A6C(disks, work->_recNo)))[5] >= 9) room = false;
        break;
    }
    }
    if (room) {
        igObjectList *devices = fn_8031F4EC(data, pool.DEVICEFOLDER)->_data;
        switch (work->_kind) {
        case 3:
        case 4:
        case 9:
            fn_80069128(devices, work->_itemObject);
            break;
        case 5:
        case 6:
        case 8: {
            igObjectList *disks = fn_8031F4EC(data, pool.DISKFOLDER)->_data;
            int *disk = reinterpret_cast<int *>(item<igObject>(disks, fn_803B0A6C(disks, work->_recNo)));
            if (disk[5] != 9) disk[5]++;
            break;
        }
        case 7: {
            fn_80305F58(self->_messenger, pool.GAMERAM, pool.GETCOMMON);
            setValueAt(fn_8031F45C(fn_80306FB4(self->_messenger, 0), pool.FLAGFOLDER)->_data, work->_recNo, lbl_80561438);
            break;
        }
        }
        beBaseInfo *info = ram->_parentInfo;
        int ramNo = ram->_ramNo;
        fn_80305ED0(self->_messenger, pool.DROPITEM, info->_name ? info->_name : lbl_80567400, ramNo, pool.SQ_DDMG);
        virtuals(self)->erasing(ram);
    }
    fn_803067A0(self->_messenger);
    if (room) fn_80306964(self->_messenger, true);
}

}
