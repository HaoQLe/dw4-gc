// beCameraCtrlInfoRamShake: Alchemy class registration (0x802E2114..0x802E247C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beCameraCtrlInfoRamShake)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beCameraCtrlInfoRamShake_fieldNames[32];
extern char beCameraCtrlInfoRamShake_fieldOffsets[32];
extern char beCameraCtrlInfoRamShake_fieldStorage[32];
extern char beCameraCtrlInfoRamShake_fieldTypes[32];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D93C[6];
extern char lbl_80420BA8[4];
extern char lbl_804DBC50[];
extern char lbl_80535638[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beCameraCtrlInfoRamShakeInstance : Instance_804DBC50 {
    char unknown0C[32];
    igStringMember _moveCode;
    char unknown30[16];
    inline ~beCameraCtrlInfoRamShakeInstance() { __vtable = beCameraCtrlInfoRamShake_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beCameraCtrlInfoRamShake)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beCameraCtrlInfoRamShake)
#pragma pop

void *beCameraCtrlInfoRamShake_vtableRead()
{
    beCameraCtrlInfoRamShakeInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beCameraCtrlInfoRamShake_vtable;
    object._moveCode._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCameraCtrlInfoRamShake)

void beCameraCtrlInfoRamShake_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCameraCtrlInfoRamShake_meta, beBaseInfoData_register,
                       fn_802B8770, beCameraCtrlInfoRamShake_getMetaCall,
                       beCameraCtrlInfoRamShake_className, 0x40,
                       beCameraCtrlInfoRamShake_vtableRead, beCameraCtrlInfoRamShake_fieldInit, 0, 0);
}

META_GET_META_CALL(beCameraCtrlInfoRamShake)

#pragma push
#pragma optimize_for_size off
void beCameraCtrlInfoRamShake_fieldInit()
{
    Meta::igMetaObject *meta = beCameraCtrlInfoRamShake_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCameraCtrlInfoRamShake_fieldTypes, 8);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_8041D93C));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80420BA8);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80535638);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    meta_setupFields(meta, beCameraCtrlInfoRamShake_fieldNames, beCameraCtrlInfoRamShake_fieldStorage, beCameraCtrlInfoRamShake_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
