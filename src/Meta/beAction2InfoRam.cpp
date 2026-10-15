// beAction2InfoRam: Alchemy class registration (0x802E58D8..0x802E5AA8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beAction2InfoRam)
META_DECLARE(beBaseInfoRam)

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beAction2InfoRamInstance : beBaseInfoRamInstance {
    igObjectRefMember _node;
    igObjectRefMember _appearanceList;
    igObjectRefMember _actorList;
    igObjectRefMember _work;
    char unknown3C[4];
    inline ~beAction2InfoRamInstance() { __vtable = beAction2InfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beAction2InfoRam)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beAction2InfoRam_vtableRead()
{
    beAction2InfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beAction2InfoRam_vtable;
    object._node._value = 0;
    object._appearanceList._value = 0;
    object._actorList._value = 0;
    object._work._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
