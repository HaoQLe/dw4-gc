// beNDMWMdlItem: an item's per-frame step (use, name label) and taking the label down
// (0x803AB5AC..0x803ABFB8).
#include "beNDMWMdlItem.h"

#pragma auto_inline off

extern "C" {


// Each frame. An unnamed item is used when a player comes within reach: the item acts (virtual 0x60) and the
// model plays SQ_DDMG; item 0 runs its script, items 1 to 25 apply their effect. A named item shows its name to
// the first player that comes near (one label per player), blinking its colour every half second, and keeps the
// label over itself on screen while that player stays near.
void beNDMWMdlItem_virtualA0(beNDMWMdlItem *self, beBaseInfoRam *ram)
{
    const beNDMWMdlItemPool &pool = lbl_8045C288;
    beModelCtrlInfoRamData *data = ramDataOf(ram, pool.ONE);
    beNDMWMdlItemInfoWork *work = static_cast<beNDMWMdlItemInfoWork *>(data->_work);
    if (self->_lockRamList->_count == 0) {
        for (int i = 0; i < 4; i++) fn_80069128(self->_lockRamList, 0);
    }
    bool isNear = false;
    int player = 0;
    if (fn_8031C67C(data->_node->_m, pool.PLAYER, pool.NEAR)) {
        float distance = fn_8031C8EC();
        player = fn_8031C954();
        if (distance < pool.nearDistance) isNear = true;
        else isNear = false;
    }
    if (!work->_isNamed) {
        if (!isNear) return;
        reinterpret_cast<beNDMWItemVirtuals *>(work->_itemObject)->use(self, player);
        setString(work->_keyEventName, pool.SQ_DDMG);
        beNDMWItemBase *item = work->_itemObject;
        int effect = item->_recNo;
        if (effect == 0) {
            ModelLuaContext *context = &lbl_80535914;
            context->ram = ram;
            context->matrix = data->_node->_m;
            fn_802EDC54(reinterpret_cast<void **>(item)[5], 4);
        } else if (effect > 0 && effect < 26) {
            fn_803AA9A0(self, effect, player);
        }
        return;
    }
    switch (ram->_st0) {
    case 0:
        if (!isNear) return;
        if (!item<igObject>(self->_lockRamList, player)) {
            const char *font = lbl_804EDB90[player];
            textRequest(self, pool, font);
            fn_80306FDC(self->_messenger, pool.CENTER);
            fn_80305A28(self->_messenger, pool.ALIGN);
            const char *name = fn_803B0790(work->_itemObject, self, pool.NAME);
            textRequest(self, pool, font);
            fn_80306FDC(self->_messenger, name);
            fn_80305A28(self->_messenger, pool.TEXTSET);
            work->_isColorLight = false;
            fn_8031E8BC(ram, pool.COLOR);
            textRequest(self, pool, font);
            fn_80306FDC(self->_messenger, pool.SET);
            fn_80305A28(self->_messenger, pool.SWITCH);
            work->_isDispName = true;
            setString(work->_fontType, font);
            work->_dispPlayerRamNo = player;
            setObjectAt(self->_lockRamList, player, ram);
            ram->_st0++;
            ram->_st3 = 0;
            ram->_st2 = 0;
            ram->_st1 = 0;
        }
        if (ram->_st0 == 0) return;
    case 1: {
        if (fn_8031E238(ram, pool.COLOR)) {
            Vec3f color(fn_803B07E0(work->_itemObject));
            float red = color.x, green = color.y, blue = color.z;
            if (work->_isColorLight) {
                work->_isColorLight = false;
                red /= pool.three;
                green /= pool.three;
                blue /= pool.three;
            } else {
                work->_isColorLight = true;
            }
            textRequest(self, pool, work->_fontType);
            float rgb[3];
            rgb[0] = red;
            rgb[1] = green;
            rgb[2] = blue;
            fn_80306C84(self->_messenger, rgb);
            fn_80305A28(self->_messenger, pool.COLOR);
            fn_8031DE44(ram, pool.COLOR, 500000000);
        }
        float position[3];
        fn_80128DAC(data->_node->_m, position);
        fn_80305ED0(self->_messenger, pool.PLAYER, 0, work->_dispPlayerRamNo, pool.GETMATRIX);
        float distance;
        if (fn_80306D58(self->_messenger) != 0) {
            float playerPosition[3];
            fn_80128DAC(fn_80306DE8(self->_messenger, 0).m, playerPosition);
            float dx = position[0] - playerPosition[0];
            float dy = position[1] - playerPosition[1];
            float dz = position[2] - playerPosition[2];
            distance = dx * dx + dy * dy + dz * dz;
        } else {
            distance = pool.hundred;
        }
        if (distance < pool.nearDistance) {
            Matrix44 view;
            Matrix44 projection;
            fn_80128CF4(view.m, cameraMatrix(self, 0x6C));
            fn_80128CF4(projection.m, cameraMatrix(self, 0x2C));
            float point[3];
            fn_80128DAC(data->_node->_m, point);
            point[1] += pool.labelHeight;
            float viewPoint[3];
            fn_8012D498(viewPoint, point, view.m);
            fn_8012D498(point, viewPoint, projection.m);
            int x, y, width, height;
            getViewport(self->_insight->_visualContext, &x, &y, &width, &height);
            float screenY = height - ((pool.one + point[1]) * height * pool.half + y);
            float labelX = ((pool.one + point[0]) * width * pool.half + x - width / 2) / pool.hundred - pool.labelOffsetX;
            float labelY = (height - screenY - height / 2) / pool.hundred;
            textRequest(self, pool, work->_fontType);
            float where[3];
            where[0] = labelX;
            where[1] = labelY;
            where[2] = pool.labelDepth;
            fn_80306C84(self->_messenger, where);
            fn_80305A28(self->_messenger, pool.SETPOSITION);
        } else {
            virtuals(self)->erasing(ram);
            ram->_st0 = 0;
            ram->_st3 = 0;
            ram->_st2 = 0;
            ram->_st1 = 0;
        }
    }
    }
}

// SQ_ERAS: takes the name label down and frees the player's label slot.
void beNDMWMdlItem_virtualB4(beNDMWMdlItem *self, beBaseInfoRam *ram)
{
    const beNDMWMdlItemPool &pool = lbl_8045C288;
    beNDMWMdlItemInfoWork *work = static_cast<beNDMWMdlItemInfoWork *>(ramDataOf(ram, pool.ONE)->_work);
    if (work->_isDispName) {
        work->_isDispName = false;
        setObjectAt(self->_lockRamList, work->_dispPlayerRamNo, 0);
        work->_dispPlayerRamNo = -1;
        textRequest(self, pool, work->_fontType);
        fn_80306FDC(self->_messenger, pool.CLR);
        fn_80305A28(self->_messenger, pool.SWITCH);
    }
}

}
