// beNDMWGameRam: creating and clearing the data lists (0x8036D224..0x8036D644).
#include "beNDMWGameRam.h"

#pragma auto_inline off

extern "C" {

// Starts the manager: new common and per-player data lists, then each of the four players' data.
void beNDMWGameRam_virtual64(beNDMWGameRam *self)
{
    fn_802F24B0(self);
    {
        beDataObjList *list = beDataObjList_create(poolFor(self, lbl_80562258));
        Ref<beDataObjList> holder(list);
        if (self->_commonDataList) release(self->_commonDataList);
        self->_commonDataList = list;
    }
    {
        beDataObjListList *lists = beDataObjListList_create(poolFor(self, lbl_80562258));
        Ref<beDataObjListList> holder(lists);
        if (self->_playerDataListList) release(self->_playerDataListList);
        self->_playerDataListList = lists;
    }
    for (int player = 0; player < 4; player++) fn_8036CE1C(self, player);
}

// Ends the manager: empties both data lists.
void beNDMWGameRam_virtual68(beNDMWGameRam *self)
{
    clearAndShrink(self->_commonDataList);
    clearAndShrink(self->_playerDataListList);
}

}
