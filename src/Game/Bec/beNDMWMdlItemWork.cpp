// beNDMWMdlItem: building an item RAM's work and its item object (0x803AAC90..0x803AB450).
#include "beNDMWMdlItem.h"

#pragma auto_inline off

extern "C" {


// Builds an item RAM's work from its request (record number and database category), finds the item's kind from
// its model's name (named from the fourth kind on), creates the item object and places the RAM.
void beNDMWMdlItem_virtual98(beNDMWMdlItem *self, beBaseInfoRam *ram)
{
    const beNDMWMdlItemPool &pool = lbl_8045C288;
    beBaseInfo *info = ram->_parentInfo;
    beModelCtrlInfoRamData *data = ramDataOf(ram, pool.ONE);
    beNDMWMdlItemInfoWork *created = beNDMWMdlItemInfoWork_create(poolFor(self, lbl_8056225C));
    Ref<beNDMWMdlItemInfoWork> work(created);
    if (data->_work) release(data->_work);
    data->_work = created;
    if (fn_80306A30(self->_messenger) != 0) {
        work->_recNo = fn_80306B00(self->_messenger, 0);
        work->_dbId = fn_80306B00(self->_messenger, 1);
    }
    for (int kind = 0; kind < 10; kind++) {
        if (strcmp(info->_name ? info->_name : lbl_80567400, lbl_804EDB68[kind]) == 0) {
            work->_kind = kind;
            break;
        }
    }
    if (work->_kind < 3) work->_isNamed = false;
    else work->_isNamed = true;
    switch (work->_dbId) {
    case 0: {
        Ref<beNDMWItemBase> item(beNDMWItemDisk_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemBase>::adopt);
        fn_803B10A0(item, work->_recNo);
        setRef(work->_itemObject, static_cast<beNDMWItemBase *>(item));
        break;
    }
    case 1: {
        Ref<beNDMWItemBase> item(beNDMWItemInstant_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemBase>::adopt);
        fn_803B13F8(item, work->_recNo);
        setRef(work->_itemObject, static_cast<beNDMWItemBase *>(item));
        break;
    }
    case 2: {
        Ref<beNDMWItemBase> item(beNDMWItemImportant_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemBase>::adopt);
        fn_803B1778(item, work->_recNo);
        setRef(work->_itemObject, static_cast<beNDMWItemBase *>(item));
        break;
    }
    case 6: {
        Ref<beNDMWItemBase> item(beNDMWItemAbilityChip_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemBase>::adopt);
        fn_803B1014(item, work->_recNo);
        setRef(work->_itemObject, static_cast<beNDMWItemBase *>(item));
        break;
    }
    case 3:
    case 4:
    case 5: {
        fn_80306604(self->_messenger);
        fn_80305F58(self->_messenger, pool.GAMERAM, pool.GETPLAYER1);
        int level = fn_8031F3CC(fn_80306FB4(self->_messenger, 0), pool.LEVEL)->_data;
        switch (work->_dbId) {
        case 3: {
            Ref<beNDMWItemBase> item(beNDMWItemWeapon_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemBase>::adopt);
            fn_803B0CD0(item, work->_recNo, self, level);
            setRef(work->_itemObject, static_cast<beNDMWItemBase *>(item));
            break;
        }
        case 4: {
            Ref<beNDMWItemBase> item(beNDMWItemBlueArmor_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemBase>::adopt);
            fn_803B0E08(item, work->_recNo, self, level);
            setRef(work->_itemObject, static_cast<beNDMWItemBase *>(item));
            break;
        }
        case 5: {
            Ref<beNDMWItemBase> item(beNDMWItemYellowArmor_create(poolFor(self, lbl_80562258)), Ref<beNDMWItemBase>::adopt);
            fn_803B0F3C(item, work->_recNo, self, level);
            setRef(work->_itemObject, static_cast<beNDMWItemBase *>(item));
            break;
        }
        }
        fn_803067A0(self->_messenger);
        break;
    }
    }
    fn_8030D610(self, ram);
}

}
