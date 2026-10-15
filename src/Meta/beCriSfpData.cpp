// beCriSfpData: Alchemy class registration (0x802DE8B8..0x802DEA84). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beCriSfpData)
META_DECLARE(beBinDataObject)
META_DECLARE(igNamedObject)

extern "C" {
void fn_802B1AC8();
void *fn_802DEA84();
void fn_802DEB14();
extern char lbl_804D5160[];
extern char lbl_804DBC50[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct Instance_804D5160 : Instance_804DBC50 {
    inline ~Instance_804D5160() { __vtable = lbl_804D5160; }
};

struct beCriSfpDataInstance : Instance_804D5160 {
    char unknown0C[36];
    inline ~beCriSfpDataInstance() { __vtable = beCriSfpData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beCriSfpData)

void *beCriSfpData_vtableRead()
{
    beCriSfpDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = lbl_804D5160;
    object.__vtable = beCriSfpData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCriSfpData)

void beCriSfpData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCriSfpData_meta, beBinDataObject_register,
                       fn_802DEA84, beCriSfpData_getMetaCall,
                       beCriSfpData_className, 0x28,
                       beCriSfpData_vtableRead, beCriSfpData_fieldInit, fn_802DEB14, 0);
}

META_GET_META_CALL(beCriSfpData)

}
#pragma pop
