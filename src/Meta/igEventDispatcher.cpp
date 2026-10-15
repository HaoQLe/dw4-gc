// igEventDispatcher: Alchemy class registration (0x80112EB4..0x80113170). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igEventDispatcher)
META_DECLARE(igInterfaceManager)

extern "C" {
void *fn_800CB840();
void *fn_800CB8B8();
void fn_8010CBD4();
void *fn_80112AC8();
extern char igEventDispatcher_dependencies[12];
extern char igEventDispatcher_fieldNames[8];
extern char igEventDispatcher_fieldOffsets[8];
extern char igEventDispatcher_fieldStorage[8];
extern char igEventDispatcher_fieldTypes[8];
extern char lbl_80480440[];
}

struct Instance_80480440 : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _devices;
    inline ~Instance_80480440() { __vtable = lbl_80480440; }
};

struct igEventDispatcherInstance : Instance_80480440 {
    igObjectRefMember _receivers;
    igObjectRefMember _controllerManager;
    char unknown14[4];
    inline ~igEventDispatcherInstance() { __vtable = igEventDispatcher_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEventDispatcher)

void *igEventDispatcher_vtableRead()
{
    igEventDispatcherInstance object;
    object.__vtable = lbl_80480440;
    object._devices._value = 0;
    object.__vtable = igEventDispatcher_vtable;
    object._receivers._value = 0;
    object._controllerManager._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEventDispatcher)

void igEventDispatcher_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igEventDispatcher_meta, igInterfaceManager_register,
                       fn_800CB840, igEventDispatcher_getMetaCall,
                       igEventDispatcher_className, 0x14,
                       igEventDispatcher_vtableRead, igEventDispatcher_fieldInit, 0, igEventDispatcher_dependencies);
}

META_GET_META_CALL(igEventDispatcher)

void igEventDispatcher_fieldInit()
{
    Meta::igMetaObject *meta = igEventDispatcher_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igEventDispatcher_fieldTypes, 2);
    Meta::igObjectRefMetaField *receiversField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80112AC8();
    receiversField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    receiversField->_construct = true;
    Meta::igObjectRefMetaField *controllerManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800CB8B8();
    controllerManagerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    controllerManagerField->_construct = true;
    meta_setupFields(meta, igEventDispatcher_fieldNames, igEventDispatcher_fieldStorage, igEventDispatcher_fieldOffsets, base);
}

}
#pragma pop
