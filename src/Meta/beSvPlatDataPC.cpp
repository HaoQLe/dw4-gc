// beSvPlatDataPC: Alchemy class registration (0x802BC28C..0x802BC428). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvPlatDataPC)
META_DECLARE(beSvPlatBaseData)

extern "C" {
void fn_802B1AC8();
void *fn_802BC428();
}

struct beSvPlatBaseDataInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _slotList;
    inline ~beSvPlatBaseDataInstance() { __vtable = beSvPlatBaseData_vtable; }
};

struct beSvPlatDataPCInstance : beSvPlatBaseDataInstance {
    char unknown10[16];
    inline ~beSvPlatDataPCInstance() { __vtable = beSvPlatDataPC_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beSvPlatDataPC)
#pragma pop

void *beSvPlatDataPC_vtableRead()
{
    beSvPlatDataPCInstance object;
    object.__vtable = beSvPlatBaseData_vtable;
    object._slotList._value = 0;
    object.__vtable = beSvPlatDataPC_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSvPlatDataPC)

void beSvPlatDataPC_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvPlatDataPC_meta, beSvPlatBaseData_register,
                       fn_802BC428, beSvPlatDataPC_getMetaCall,
                       beSvPlatDataPC_className, 0x18,
                       beSvPlatDataPC_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beSvPlatDataPC)

}
#pragma pop
