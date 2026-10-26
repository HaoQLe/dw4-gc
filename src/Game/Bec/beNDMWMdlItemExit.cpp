// beNDMWMdlItem: SQ_EXIT takes the name label down (0x803ABFB8..0x803AC0E8).
#include "beNDMWMdlItem.h"

#pragma auto_inline off

extern "C" {


// After a sequence starts: SQ_EXIT runs the erasing hook (virtual 0xB4), which takes the name label down.
void beNDMWMdlItem_virtualB8(beNDMWMdlItem *self, beBaseInfoRam *ram)
{
    if (strcmp(ramDataOf(ram, lbl_8045C488)->_work->_seqCodeName, lbl_8045C564) == 0) virtuals(self)->erasing(ram);
}

}
