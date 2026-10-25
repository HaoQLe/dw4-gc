// beModelCtrl: AIMAP commands (0x8030BB3C..0x8030BCB0).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// An AIMAP command: selects the AI's map by name. A map aimed at a world position asks the "aim" Lua script for
// it (kind WPos), which writes it through the hit context. The AI timer restarts.
bool fn_8030BB3C(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work, igNamedObject *command)
{
    const beModelCtrlPool &mc = MC;
    beModelCtrlInfoDataAIM *aim = static_cast<beModelCtrlInfoDataAIM *>(fn_800695CC(info->_dataList, nameField(), mc.AIM));
    beModelCtrlAIMapList *maps = aim->_aIMapList;
    beModelCtrlAIMap *map = static_cast<beModelCtrlAIMap *>(fn_800695CC(maps, nameField(), nameOrEmpty(command)));
    int index = indexOf(maps, &map, 0);
    if (work->_aI) {
        work->_aI->_mapNo = index;
        if (map->_targetType && strcmp(map->_targetType, mc.WPOS) == 0) {
            ModelLuaContext *context = &lbl_80535914;
            Vec3 position;
            context->position = &position.x;
            fn_8030B6EC(self, ram, mc.aim, mc.WPos, nameOrEmpty(info), 0, 0, 0, 0, 0);
            *reinterpret_cast<Vec3 *>(work->_aI->_worldPos) = position;
            context->position = 0;
        }
    }
    fn_8031E8BC(ram, mc.AITIMER);
    return true;
}

}
