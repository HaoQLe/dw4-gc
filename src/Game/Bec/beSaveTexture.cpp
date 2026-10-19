// The save layer's texture palettes (TPL files) for the banner and icons (0x80320604..0x80320834).
#include "beSave.h"
#include <game/Virtual.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {
void fn_80065704(void *meta, int);   // called on destruction with the class's metaobject
void fn_800667B4(igObject *self);    // igObject's virtual28
extern char beSaveMemoryObj_meta[];
}

extern "C" {

// Copies a texture palette file into _iconWork and binds it (TPLBind: offsets become pointers).
void fn_80320604(beSaveApi *api, const void *file, int size)
{
    SaveCardWork *card = cardOf(api);
    renewBlock(api, api->_iconWork);
    fn_8031F9FC(api->_iconWork, size, 32);
    card->tpl = static_cast<TEXPalette *>(api->_iconWork->_mem);
    memcpy(card->tpl, file, size);
    card->tpl->descriptorArray = reinterpret_cast<TEXDescriptor *>(reinterpret_cast<u32>(card->tpl->descriptorArray) + reinterpret_cast<u32>(card->tpl));
    for (u16 i = 0; i < card->tpl->numDescriptors; i++) {
        if (card->tpl->descriptorArray[i].textureHeader) {
            card->tpl->descriptorArray[i].textureHeader = reinterpret_cast<TEXHeader *>(reinterpret_cast<u32>(card->tpl->descriptorArray[i].textureHeader) + reinterpret_cast<u32>(card->tpl));
            if (!card->tpl->descriptorArray[i].textureHeader->unpacked) {
                card->tpl->descriptorArray[i].textureHeader->data = reinterpret_cast<Ptr>(reinterpret_cast<u32>(card->tpl->descriptorArray[i].textureHeader->data) + reinterpret_cast<u32>(card->tpl));
                card->tpl->descriptorArray[i].textureHeader->unpacked = 1;
            }
        }
        if (card->tpl->descriptorArray[i].CLUTHeader) {
            card->tpl->descriptorArray[i].CLUTHeader = reinterpret_cast<CLUTHeader *>(reinterpret_cast<u32>(card->tpl->descriptorArray[i].CLUTHeader) + reinterpret_cast<u32>(card->tpl));
            if (!card->tpl->descriptorArray[i].CLUTHeader->unpacked) {
                card->tpl->descriptorArray[i].CLUTHeader->data = reinterpret_cast<Ptr>(reinterpret_cast<u32>(card->tpl->descriptorArray[i].CLUTHeader->data) + reinterpret_cast<u32>(card->tpl));
                card->tpl->descriptorArray[i].CLUTHeader->unpacked = 1;
            }
        }
    }
    card->tplBound = true;
}

// Texture index of the bound palette (TPLGet).
TEXDescriptor *fn_803207BC(beSaveApi *api, int index) { return &cardOf(api)->tpl->descriptorArray[index]; }

// Releases the palette's block once it has been copied into the image.
void fn_803207D0(beSaveApi *api)
{
    if (cardOf(api)->tplBound != true) return;
    if (api->_iconWork) release(api->_iconWork);
    api->_iconWork = 0;
}

}
