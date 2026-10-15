// beNumberCtrlInfoRam: Alchemy class registration (0x802C2EF0..0x802C30A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNumberCtrlInfoRam)
META_DECLARE(beBaseInfoRam)

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beNumberCtrlInfoRamInstance : beBaseInfoRamInstance {
    igObjectRefMember _geometry;
    char unknown30[12];
    igObjectRefMember _numList;
    igObjectRefMember _work;
    char unknown44[4];
    inline ~beNumberCtrlInfoRamInstance() { __vtable = beNumberCtrlInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNumberCtrlInfoRam)

#pragma push
#pragma optimize_for_size off
void *beNumberCtrlInfoRam_vtableRead()
{
    beNumberCtrlInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beNumberCtrlInfoRam_vtable;
    object._geometry._value = 0;
    object._numList._value = 0;
    object._work._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
