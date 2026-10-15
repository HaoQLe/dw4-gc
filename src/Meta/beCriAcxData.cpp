// beCriAcxData: Alchemy class registration (0x802DFB34..0x802DFCF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beCriAcxData)
META_DECLARE(beBinDataObject)
META_DECLARE(igNamedObject)

extern "C" {
void fn_802B1AC8();
void *fn_802DEA84();
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

struct beCriAcxDataInstance : Instance_804D5160 {
    char unknown0C[20];
    inline ~beCriAcxDataInstance() { __vtable = beCriAcxData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beCriAcxData)

void *beCriAcxData_vtableRead()
{
    beCriAcxDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = lbl_804D5160;
    object.__vtable = beCriAcxData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCriAcxData)

void beCriAcxData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCriAcxData_meta, beBinDataObject_register,
                       fn_802DEA84, beCriAcxData_getMetaCall,
                       beCriAcxData_className, 0x18,
                       beCriAcxData_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beCriAcxData)

}
#pragma pop
