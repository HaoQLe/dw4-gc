// The save layer's memory blocks, image checksum and memory-card mount (0x8031F918..0x8032029C).
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

// Allocates a block of size bytes in a data holder. The callers' holders have beSaveDataDeliver's layout
// (_data, _size); which class they are is not established.
void fn_8031F918(beSaveDataDeliver *block, int size)
{
    block->_size = size;
    block->_data = fn_80056138(size, poolFor(block, lbl_8056225C));
}

// Frees a data holder's block.
void fn_8031F988(beSaveDataDeliver *block)
{
    if (block->_data) fn_800563E4(block->_data, poolFor(block, lbl_8056225C));
    block->_data = 0;
    block->_size = 0;
}

// Allocates a cleared block of size bytes, aligned to align bytes unless align is 0.
void fn_8031F9FC(beSaveMemoryObj *block, unsigned int size, unsigned int align)
{
    if (!align) block->_mem = fn_80056138(size, poolFor(block, lbl_8056225C));
    else block->_mem = fn_800561C0(size, align, poolFor(block, lbl_8056225C));
    memset(block->_mem, 0, size);
}

// Frees the block.
void fn_8031FAC8(beSaveMemoryObj *block)
{
    if (block->_mem) fn_800563E4(block->_mem, poolFor(block, lbl_8056225C));
    block->_mem = 0;
}

void beSaveMemoryObj_virtual28(beSaveMemoryObj *self)
{
    fn_8031FAC8(self);
    fn_80065704(metaOf(self), 1);
    fn_800667B4(self);
}

// The class's metaobject.
void *beSaveMemoryObj_virtual58(beSaveMemoryObj *) { return *reinterpret_cast<void **>(beSaveMemoryObj_meta); }

// The image checksum: the sum of its 32-bit words after the first (which holds the checksum).
unsigned int beSaveApi_virtual68(beSaveApi *, const void *image, unsigned int size)
{
    int i;
    unsigned int sum;
    const unsigned int *word;
    sum = 0;
    word = static_cast<const unsigned int *>(image) + 1;
    for (i = 0; i < (int)((size - 4) / 4); i++) sum += *word++;
    return sum;
}

// Prepares the mount: a card work area (CARD_WORKAREA_SIZE bytes, 32-byte aligned).
void fn_8031FC40(beSaveApi *api)
{
    cardOf(api)->mountStep = 0;
    cardOf(api)->mounted = false;
    void *pool = poolFor(api, lbl_8056225C);
    if (api->_mountWork) release(api->_mountWork);
    api->_mountWork = beSaveMemoryObj_create(pool);
    fn_8031F9FC(api->_mountWork, CARD_WORKAREA_SIZE, 32);
}

// One step of mounting the card in slot _connect: probe (three tries), mount, wait, check.
int fn_8031FCF0(beSaveApi *api)
{
    int result = SAVE_RUNNING;
    SaveCardWork *card = cardOf(api);
    switch (card->mountStep) {
    case 0:
        card->probeRetries = 0;
        card->mountStep++;
        break;
    case 1: {
        int probe = CARDProbeEx(api->_connect, 0, 0);
        if (probe == CARD_RESULT_BUSY) break;
        if (probe == CARD_RESULT_READY) {
            card->mountStep++;
            break;
        }
        card->probeRetries++;
        if (card->probeRetries < 3) break;
        switch (probe) {
        case CARD_RESULT_WRONGDEVICE:
            result = SAVE_WRONGDEVICE;
            break;
        default:
            result = SAVE_NOCARD;
            break;
        }
        break;
    }
    case 2: {
        int mount = CARDMountAsync(api->_connect, api->_mountWork->_mem, 0, 0);
        if (mount < CARD_RESULT_READY && mount != CARD_RESULT_BUSY) {
            if (api->_mountWork) release(api->_mountWork);
            api->_mountWork = 0;
            result = SAVE_IOERROR;
            break;
        }
        card->mounted = true;
        card->mountStep++;
        break;
    }
    case 3:
        switch (CARDGetResultCode(api->_connect)) {
        case CARD_RESULT_READY:
            card->mountStep++;
            break;
        case CARD_RESULT_IOERROR:
        case CARD_RESULT_FATAL_ERROR:
            result = SAVE_IOERROR;
            break;
        case CARD_RESULT_WRONGDEVICE:
            result = SAVE_WRONGDEVICE;
            break;
        case CARD_RESULT_BROKEN:
        case CARD_RESULT_ENCODING:
            card->mountStep++;   // checked next
            break;
        case CARD_RESULT_BUSY:
            break;
        case CARD_RESULT_NOCARD:
        default:
            result = SAVE_NOCARD;
            break;
        }
        break;
    case 4:
        switch (CARDCheck(api->_connect)) {
        case CARD_RESULT_READY:
            card->mountStep++;
            result = SAVE_DONE;
            break;
        case CARD_RESULT_IOERROR:
        case CARD_RESULT_FATAL_ERROR:
            card->mountStep++;
            result = SAVE_IOERROR;
            break;
        case CARD_RESULT_WRONGDEVICE:
            result = SAVE_WRONGDEVICE;
            break;
        case CARD_RESULT_BROKEN:
        case CARD_RESULT_ENCODING:
            card->mountStep++;
            result = SAVE_BROKEN;
            break;
        case CARD_RESULT_BUSY:
            break;
        case CARD_RESULT_NOCARD:
        default:
            card->mountStep++;
            result = SAVE_NOCARD;
            break;
        }
        break;
    case 5:   // mounted and checked
        break;
    }
    return result;
}

// Unmounts the card if this operation mounted it, and releases the work area.
void fn_8031FF98(beSaveApi *api)
{
    if (!cardOf(api)->mounted) return;
    CARDUnmount(api->_connect);
    if (api->_mountWork) release(api->_mountWork);
    api->_mountWork = 0;
}

// Builds the card image in _imageWork: the comment (64 bytes), the banner (C8 with its palette, or RGB5A3),
// the icon frames (C8, or RGB5A3 when _iconType is 1) and, for C8 icons, their shared palette. The banner and
// icons come from the texture palettes in the platform data.
void fn_80320004(beSaveApi *api)
{
    beSvPlatDataGC *plat = lbl_80535C18[0];
    cardOf(api)->writeStep = 0;
    if (plat->_imageSize < 0x2000) {
        renewBlock(api, api->_imageWork);
        fn_8031F9FC(api->_imageWork, 0x2000, 32);
    } else {
        renewBlock(api, api->_imageWork);
        fn_8031F9FC(api->_imageWork, 0x4000, 32);
    }
    char *image = static_cast<char *>(api->_imageWork->_mem);
    memcpy(image, plat->_comment, sizeof(plat->_comment));
    char *out = image + sizeof(plat->_comment);
    fn_80320604(api, plat->_banTplData, plat->_banTplSize);
    TEXDescriptor *banner = fn_803207BC(api, 0);
    switch (plat->_bannerType) {
    case CARD_STAT_BANNER_C8:
        memcpy(out, banner->textureHeader->data, 96 * 32);
        memcpy(out + 96 * 32, banner->CLUTHeader->data, 256 * 2);
        out += 96 * 32 + 256 * 2;
        break;
    case CARD_STAT_BANNER_RGB5A3:
        memcpy(out, banner->textureHeader->data, 96 * 32 * 2);
        out += 96 * 32 * 2;
        break;
    case CARD_STAT_BANNER_NONE:
        break;
    }
    fn_803207D0(api);
    fn_80320604(api, plat->_iconTplData, plat->_iconTplSize);
    for (int i = 0; i < plat->_iconKaz; i++) {
        TEXDescriptor *icon = fn_803207BC(api, i);
        if (plat->_iconType != 1) {
            memcpy(out, icon->textureHeader->data, 32 * 32);
            out += 32 * 32;
        } else {
            memcpy(out, icon->textureHeader->data, 32 * 32 * 2);
            out += 32 * 32 * 2;
        }
    }
    if (plat->_iconType != 1) {
        TEXDescriptor *icon = fn_803207BC(api, 0);
        memcpy(out, icon->CLUTHeader->data, 256 * 2);
    }
    fn_803207D0(api);
}

}
