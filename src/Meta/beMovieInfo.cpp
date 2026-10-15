// beMovieInfo: Alchemy class registration (0x802C48C4..0x802C4B14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMovieInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_804DCD14[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct Instance_804DCD14 : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _dataList;
    igObjectRefMember _ramList;
    inline ~Instance_804DCD14() { __vtable = lbl_804DCD14; }
};

struct beMovieInfoInstance : Instance_804DCD14 {
    char unknown1C[12];
    inline ~beMovieInfoInstance() { __vtable = beMovieInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beMovieInfo)

#pragma push
#pragma optimize_for_size off
void *beMovieInfo_vtableRead()
{
    beMovieInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beMovieInfo_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beMovieInfo)

void beMovieInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMovieInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beMovieInfo_getMetaCall,
                       beMovieInfo_className, 0x1C,
                       beMovieInfo_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beMovieInfo)

}
#pragma pop
