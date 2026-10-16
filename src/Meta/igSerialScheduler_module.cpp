// Written by tools/alchemymeta/poolsrc.py: units whose code addresses the data below from its start.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <unknownGen.h>
#include <meta/igMetaObject.h>
#include <meta/igStructMetaField.h>

// The unit's data.
extern "C" {
void fn_80022A90();
void fn_800251EC();
void fn_8002879C();
void fn_8002E1AC();
void fn_80031378();
void igClearRenderer_arkRegister();
void igEventDispatcher_arkRegister();
void igInfoList_arkRegister();
void igInfoManagerList_arkRegister();
void igInfoManagerOrderedList_arkRegister();
void igInfoManager_arkRegister();
void igInsightCore_arkRegister();
void igInsightPluginList_arkRegister();
void igInsightPlugin_arkRegister();
void igInsightScheduler_arkRegister();
void igLongMetaField_create();
void igMessageDefaultReceiver_arkRegister();
void igMessageDispatcher_arkRegister();
void igMessageFilterList_arkRegister();
void igMessageFilter_arkRegister();
void igMessageReceiverList_arkRegister();
void igMessageReceiver_arkRegister();
void igMessenger_arkRegister();
void igMetaObject_arkRegister();
void igObject_arkRegister();
void igRendererOrderedList_arkRegister();
void igStructMetaField_create();
void igTimer_arkRegister();
void igTriggerableList_arkRegister();
void igTriggerable_arkRegister();
void igVec2fMetaField_create();
void igVisualContext_arkRegister();
void igWindowResizeEventReceiver_arkRegister();
void igWindow_arkRegister();
extern char lbl_80416900[];
extern char lbl_80416934[];
extern char lbl_80416940[];
extern char lbl_8041694C[];
extern char lbl_80416954[];
extern char lbl_80416964[];
extern char lbl_80416978[];
extern char lbl_804169A4[];
extern char lbl_804169B4[];
extern char lbl_804169D4[];
extern char lbl_80416A3C[];
extern char lbl_80416A48[];
extern char lbl_80416A70[];
extern char lbl_80416A80[];
extern char lbl_80416ABC[];
extern char lbl_80416AC8[];
extern char lbl_80416B20[];
extern char lbl_80416B2C[];
extern char lbl_80416B38[];
extern char lbl_80416B40[];
extern char lbl_80416B50[];
extern char lbl_80416B60[];
extern char lbl_80416B78[];
extern char lbl_80416B84[];
extern char lbl_80416B94[];
extern char lbl_80416B9C[];
extern char lbl_80416BA4[];
extern char lbl_80416BB4[];
extern char lbl_80416BC0[];
extern char lbl_80416BDC[];
extern char lbl_80416BE8[];
extern char lbl_80416BF8[];
extern char lbl_80416C04[];
extern char lbl_80416C2C[];
extern char lbl_80416C58[];
extern char lbl_80416C60[];
extern char lbl_80416CA8[];
extern char lbl_80515C50[];
extern char lbl_80515C60[];
extern char lbl_80515C64[];
extern char lbl_80515C68[];
extern char lbl_80515C6C[];
extern char lbl_80515C74[];
extern char lbl_80515C78[];
extern char lbl_80515C80[];
extern char lbl_80515C98[];
extern char lbl_80515C9C[];
extern char lbl_80515CA4[];
extern char lbl_80515CA8[];
extern char lbl_80515CB4[];
extern char lbl_80515CB8[];
extern char lbl_80515CD0[];
extern char lbl_80515CD4[];
extern char lbl_80515CD8[];
extern char lbl_80515CDC[];
extern char lbl_80515CE0[];
extern char lbl_80515CE4[];
extern char lbl_80515CE8[];
extern char lbl_80515CEC[];
extern char lbl_80515CF0[];
extern char lbl_80515CF4[];
extern char lbl_80515CF8[];
extern char lbl_80515CFC[];
extern char lbl_80515D00[];
extern char lbl_80515D04[];
extern char lbl_80515D08[];
extern char lbl_80515D0C[];
extern char lbl_80515D10[];
extern char lbl_80515D14[];
extern char lbl_80515D18[];
extern char lbl_80515D20[];
extern char lbl_80515D28[];
extern char lbl_80515D2C[];
extern char lbl_80515D3C[];
void *lbl_804CAFC8[4] = {(void *)fn_80022A90, (void *)lbl_80416900, (void *)lbl_80515C50, (void *)0xC};
void *igTriggerableList_dependencies[26] = {(void *)igTriggerable_arkRegister, 0, (void *)lbl_80416934, (void *)lbl_80416940, 0, (void *)0x1, (void *)fn_80031378, (void *)fn_800251EC, (void *)lbl_8041694C, (void *)lbl_80416954, (void *)lbl_80515C60, (void *)lbl_80515C64, (void *)0x8, (void *)0xC, 0, (void *)igTriggerableList_arkRegister, (void *)igMessageDefaultReceiver_arkRegister, 0, (void *)fn_8002879C, (void *)fn_8002879C, (void *)lbl_80416964, (void *)lbl_80416978, (void *)lbl_80515C68, (void *)lbl_80515C6C, (void *)0x10, (void *)0x14};
void *igSerialScheduler_dependencies[3] = {(void *)igInfoManagerOrderedList_arkRegister, (void *)igInfoManagerList_arkRegister, 0};
void *igSerialScheduler_fieldTypes[2] = {(void *)fn_8002879C, (void *)fn_8002879C};
void *igSerialScheduler_fieldNames[2] = {(void *)lbl_804169A4, (void *)lbl_804169B4};
void *igSerialScheduler_fieldStorage[2] = {(void *)lbl_80515C74, (void *)lbl_80515C78};
void *igSerialScheduler_fieldOffsets[2] = {(void *)0x8, (void *)0xC};
void *igMessenger_dependencies[2] = {(void *)igMessageDispatcher_arkRegister, 0};
void *igMessenger_fieldTypes[1] = {(void *)fn_8002879C};
void *igMessenger_fieldNames[1] = {(void *)lbl_804169D4};
void *igMessenger_fieldStorage[1] = {(void *)lbl_80515C80};
void *igMessenger_fieldOffsets[1] = {(void *)0x8};
void *igMessageReceiverList_dependencies[2] = {(void *)igMessageReceiver_arkRegister, 0};
void *igMessageFilterList_dependencies[2] = {(void *)igMessageFilter_arkRegister, 0};
void *igMessageFilter_dependencies[3] = {(void *)igMetaObject_arkRegister, (void *)igMessageReceiverList_arkRegister, 0};
void *igMessageFilter_fieldTypes[2] = {(void *)fn_8002879C, (void *)fn_8002879C};
void *igMessageFilter_fieldNames[2] = {(void *)lbl_80416A3C, (void *)lbl_80416A48};
void *igMessageFilter_fieldStorage[2] = {(void *)lbl_80515C98, (void *)lbl_80515C9C};
void *igMessageFilter_fieldOffsets[2] = {(void *)0x8, (void *)0xC};
void *igFilterMessageDispatcher_dependencies[2] = {(void *)igMessageFilterList_arkRegister, 0};
void *igFilterMessageDispatcher_fieldTypes[2] = {(void *)fn_8002879C, (void *)fn_8002879C};
void *igFilterMessageDispatcher_fieldNames[2] = {(void *)lbl_80416A70, (void *)lbl_80416A80};
void *igFilterMessageDispatcher_fieldStorage[2] = {(void *)lbl_80515CA4, (void *)lbl_80515CA8};
void *igFilterMessageDispatcher_fieldOffsets[2] = {(void *)0x8, (void *)0xC};
void *igMessageDefaultReceiver_dependencies[2] = {(void *)igObject_arkRegister, 0};
void *igMessageDefaultReceiver_fieldTypes[2] = {(void *)fn_8002879C, (void *)igStructMetaField_create};
void *igMessageDefaultReceiver_fieldNames[2] = {(void *)lbl_80416ABC, (void *)lbl_80416AC8};
void *igMessageDefaultReceiver_fieldStorage[2] = {(void *)lbl_80515CB4, (void *)lbl_80515CB8};
void *igMessageDefaultReceiver_fieldOffsets[2] = {(void *)0x8, (void *)0xC};
void *igInsightPluginList_dependencies[2] = {(void *)igInsightPlugin_arkRegister, 0};
void *igInsightCore_dependencies[13] = {(void *)igInfoManagerOrderedList_arkRegister, (void *)igInsightScheduler_arkRegister, (void *)igInfoList_arkRegister, (void *)igWindow_arkRegister, (void *)igVisualContext_arkRegister, (void *)igRendererOrderedList_arkRegister, (void *)igEventDispatcher_arkRegister, (void *)igWindowResizeEventReceiver_arkRegister, (void *)igMessenger_arkRegister, (void *)igClearRenderer_arkRegister, (void *)igTimer_arkRegister, (void *)igInsightPluginList_arkRegister, 0};
void *igInsightCore_fieldTypes[19] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)igLongMetaField_create, (void *)igLongMetaField_create, (void *)fn_8002E1AC, (void *)igLongMetaField_create, (void *)igLongMetaField_create, (void *)igLongMetaField_create, (void *)fn_8002879C};
void *igInsightCore_fieldNames[19] = {(void *)lbl_804169A4, (void *)lbl_80416B20, (void *)lbl_80416B2C, (void *)lbl_80416B38, (void *)lbl_80416B40, (void *)lbl_80416B50, (void *)lbl_804169D4, (void *)lbl_80416B60, (void *)lbl_80416B78, (void *)lbl_80416B84, (void *)lbl_80416B94, (void *)lbl_80416B9C, (void *)lbl_80416BA4, (void *)lbl_80416BB4, (void *)lbl_80416BC0, (void *)lbl_80416BDC, (void *)lbl_80416BE8, (void *)lbl_80416BF8, (void *)lbl_80416C04};
void *igInsightCore_fieldStorage[19] = {(void *)lbl_80515CD0, (void *)lbl_80515CD4, (void *)lbl_80515CD8, (void *)lbl_80515CDC, (void *)lbl_80515CE0, (void *)lbl_80515CE4, (void *)lbl_80515CE8, (void *)lbl_80515CEC, (void *)lbl_80515CF0, (void *)lbl_80515CF4, (void *)lbl_80515CF8, (void *)lbl_80515CFC, (void *)lbl_80515D00, (void *)lbl_80515D04, (void *)lbl_80515D08, (void *)lbl_80515D0C, (void *)lbl_80515D10, (void *)lbl_80515D14, (void *)lbl_80515D18};
void *igInsightCore_fieldOffsets[19] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38, (void *)0x40, (void *)0x48, (void *)0x50, (void *)0x58, (void *)0x60, (void *)0x68};
void *igWindowResizeEventReceiver_dependencies[2] = {(void *)igInsightCore_arkRegister, 0};
void *igWindowResizeEventReceiver_fieldTypes[1] = {(void *)fn_8002879C};
void *igWindowResizeEventReceiver_fieldNames[1] = {(void *)lbl_80416C2C};
void *igWindowResizeEventReceiver_fieldStorage[1] = {(void *)lbl_80515D20};
void *igWindowResizeEventReceiver_fieldOffsets[1] = {(void *)0x8};
void *igViewportResizedMessage_fieldTypes[2] = {(void *)igVec2fMetaField_create, (void *)igVec2fMetaField_create};
void *igViewportResizedMessage_fieldNames[2] = {(void *)lbl_80416C58, (void *)lbl_80416C60};
void *igViewportResizedMessage_fieldStorage[2] = {(void *)lbl_80515D28, (void *)lbl_80515D2C};
void *igViewportResizedMessage_fieldOffsets[2] = {(void *)0x8, (void *)0x10};
void *igInfoManagerOrderedList_dependencies[2] = {(void *)igInfoManager_arkRegister, 0};
void *igInfoManagerList_dependencies[2] = {(void *)igInfoManager_arkRegister, 0};
void *igInfoManager_dependencies[2] = {(void *)igInsightCore_arkRegister, 0};
void *igInfoManager_fieldTypes[1] = {(void *)fn_8002879C};
void *igInfoManager_fieldNames[1] = {(void *)lbl_80416CA8};
void *igInfoManager_fieldStorage[1] = {(void *)lbl_80515D3C};
void *igInfoManager_fieldOffsets[1] = {(void *)0xC};
}

#pragma push
#pragma optimize_for_size off
#pragma use_lmw_stmw on
namespace igSerialScheduler_fieldInit {
// igSerialScheduler: Alchemy class registration (0x80284758..0x80284820). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSerialScheduler)
META_DECLARE(igInfoManagerList)
META_DECLARE(igInfoManagerOrderedList)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igSerialScheduler_fieldInit()
{
    Meta::igMetaObject *meta = igSerialScheduler_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSerialScheduler_fieldTypes, 2);
    Meta::igObjectRefMetaField *managerListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    managerListField->_metaObject = igInfoManagerOrderedList_metaObject();
    managerListField->_construct = true;
    Meta::igObjectRefMetaField *cachedManagerListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    cachedManagerListField->_metaObject = igInfoManagerList_metaObject();
    cachedManagerListField->_construct = true;
    meta_setupFields(meta, igSerialScheduler_fieldNames, igSerialScheduler_fieldStorage, igSerialScheduler_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown80284820 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void igMessenger_fieldInit();
void igObject_register();
extern char igMessenger_className[];
extern char igMessenger_vtable[];
extern void *igMessenger_meta;
extern void *lbl_805621F4;
void *igMessenger_getMeta();
void *igMessenger_vtableRead();
void igMessenger_arkRegister();
void igMessenger_register();
void *igMessenger_getMetaCall();
}
struct UnknownGenRoot802848C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802848C0(){igObject_construct(this);}
};
struct UnknownGenObject802848C0 : UnknownGenRoot802848C0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802848C0(){unknown00=igMessenger_vtable;}
};
extern "C" {
void *igMessenger_metaObject(){
 if(!igMessenger_meta) igMessenger_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMessenger_meta;
}
void *igMessenger_getMeta(){
 if(!igMessenger_meta || !(reinterpret_cast<unsigned int *>(igMessenger_meta)[0x24/4]&4)) igMessenger_arkRegister();
 return igMessenger_meta;
}
void *igMessenger_vtableRead(){
 UnknownGenObject802848C0 object;
 object.unknown00=igMessenger_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessenger_arkRegister(){
 meta_registerNow((int)igMessenger_register);
}
void igMessenger_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igMessenger_meta,(int)igObject_register,(int)fn_800237D0,(int)igMessenger_getMetaCall,(int)igMessenger_className,12,(int)igMessenger_vtableRead,(int)igMessenger_fieldInit,0,(int)igMessenger_dependencies);
}
void *igMessenger_getMetaCall(){return igMessenger_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
#pragma use_lmw_stmw on
namespace igMessenger_fieldInit {
// igMessenger: Alchemy class registration (0x80284A10..0x80284AB8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMessenger)
META_DECLARE(igMessageDispatcher)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMessenger_fieldInit()
{
    Meta::igMetaObject *meta = igMessenger_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMessenger_fieldTypes, 1);
    Meta::igObjectRefMetaField *dispatcherField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    dispatcherField->_metaObject = igMessageDispatcher_metaObject();
    dispatcherField->_construct = true;
    meta_setupFields(meta, igMessenger_fieldNames, igMessenger_fieldStorage, igMessenger_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igMessage {
// igMessage: Alchemy class registration (0x80284AB8..0x80284C00). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMessage)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80284294();
}

struct Instance_80284B04_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMessage)

void *igMessage_vtableRead()
{
    Instance_80284B04_0 object;
    igObject_construct(&object);
    object.__vtable = igMessage_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessage)

void igMessage_register()
{
    fn_80284294();
    meta_registerClass(0, &igMessage_meta, igObject_register,
                       fn_800237D0, igMessage_getMetaCall,
                       igMessage_className, 0x8,
                       igMessage_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igMessage)

}
#pragma pop
}

namespace igMessageReceiverList {
// igMessageReceiverList: Alchemy class registration (0x80284C00..0x80284DD0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMessageReceiverList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80284294();
extern char lbl_80476E0C[];
extern char lbl_804CB928[];
}

struct Instance_80284CA0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igMessageReceiverList)

META_GET_META(igMessageReceiverList)

void *igMessageReceiverList_vtableRead()
{
    Instance_80284CA0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CB928;
    object.__vtable = igMessageReceiverList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageReceiverList)

void igMessageReceiverList_register()
{
    fn_80284294();
    meta_registerClass(0, &igMessageReceiverList_meta, igObjectList_register,
                       fn_80024180, igMessageReceiverList_getMetaCall,
                       igMessageReceiverList_className, 0x14,
                       igMessageReceiverList_vtableRead, 0, 0, igMessageReceiverList_dependencies);
}

META_GET_META_CALL(igMessageReceiverList)

}
#pragma pop
}

namespace igMessageReceiver {
// igMessageReceiver: Alchemy class registration (0x80284DD0..0x80284ECC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMessageReceiver)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80284294();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMessageReceiver)

META_ARK_REGISTER(igMessageReceiver)

void igMessageReceiver_register()
{
    fn_80284294();
    meta_registerClass(1, &igMessageReceiver_meta, igObject_register,
                       fn_800237D0, igMessageReceiver_getMetaCall,
                       igMessageReceiver_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igMessageReceiver)

}
#pragma pop
}

namespace igMessageFilterList {
// igMessageFilterList: Alchemy class registration (0x80284ECC..0x8028509C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMessageFilterList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80284294();
extern char lbl_80476E0C[];
extern char lbl_804CB860[];
}

struct Instance_80284F6C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igMessageFilterList)

META_GET_META(igMessageFilterList)

void *igMessageFilterList_vtableRead()
{
    Instance_80284F6C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CB860;
    object.__vtable = igMessageFilterList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageFilterList)

void igMessageFilterList_register()
{
    fn_80284294();
    meta_registerClass(0, &igMessageFilterList_meta, igObjectList_register,
                       fn_80024180, igMessageFilterList_getMetaCall,
                       igMessageFilterList_className, 0x14,
                       igMessageFilterList_vtableRead, 0, 0, igMessageFilterList_dependencies);
}

META_GET_META_CALL(igMessageFilterList)

}
#pragma pop
}

namespace unknown8028509C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void igMessageFilter_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igMessage_className[];
extern char igMessageReceiverList_className[];
extern char igMessageReceiver_className[];
extern char igMessageFilterList_className[];
extern char igMessageFilter_className[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMessageFilter_vtable[];
extern char igMessageFilterList_vtable[];
extern char lbl_804CB860[];
extern char igMessageReceiverList_vtable[];
extern char lbl_804CB928[];
extern char igMessage_vtable[];
extern void *igMessage_meta;
extern void *igMessageReceiverList_meta;
extern void *igMessageReceiver_meta;
extern void *igMessageFilterList_meta;
extern void *igMessageFilter_meta;
extern void *lbl_805621F4;
void *igMessage_getMeta();
void *igMessage_vtableRead();
void igMessage_arkRegister();
void igMessage_register();
void *igMessage_getMetaCall();
void *igMessageReceiverList_getMeta();
void *igMessageReceiverList_vtableRead();
void igMessageReceiverList_arkRegister();
void igMessageReceiverList_register();
void *igMessageReceiverList_getMetaCall();
void *igMessageReceiver_getMeta();
void igMessageReceiver_arkRegister();
void igMessageReceiver_register();
void *igMessageReceiver_getMetaCall();
void *igMessageFilterList_getMeta();
void *igMessageFilterList_vtableRead();
void igMessageFilterList_arkRegister();
void igMessageFilterList_register();
void *igMessageFilterList_getMetaCall();
void *igMessageFilter_getMeta();
void *igMessageFilter_vtableRead();
void igMessageFilter_arkRegister();
void igMessageFilter_register();
void *igMessageFilter_getMetaCall();
}
struct UnknownGenObject80284B04_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject80284CA0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80284F6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80285128 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285128(){igObject_construct(this);}
};
struct UnknownGenObject80285128 : UnknownGenRoot80285128 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject80285128(){unknown00=igMessageFilter_vtable;}
};
extern "C" {
void *igMessageFilter_create(void *object){
 igMessageFilter_arkRegister();
 return meta_createInstance(igMessageFilter_meta,object);
}
void *igMessageFilter_getMeta(){
 if(!igMessageFilter_meta || !(reinterpret_cast<unsigned int *>(igMessageFilter_meta)[0x24/4]&4)) igMessageFilter_arkRegister();
 return igMessageFilter_meta;
}
void *igMessageFilter_vtableRead(){
 UnknownGenObject80285128 object;
 object.unknown00=igMessageFilter_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessageFilter_arkRegister(){
 meta_registerNow((int)igMessageFilter_register);
}
void igMessageFilter_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igMessageFilter_meta,(int)igObject_register,(int)fn_800237D0,(int)igMessageFilter_getMetaCall,(int)igMessageFilter_className,16,(int)igMessageFilter_vtableRead,(int)igMessageFilter_fieldInit,0,(int)igMessageFilter_dependencies);
}
void *igMessageFilter_getMetaCall(){return igMessageFilter_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
#pragma use_lmw_stmw on
namespace igMessageFilter_fieldInit {
// igMessageFilter: Alchemy class registration (0x802852BC..0x80285384). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMessageFilter)
META_DECLARE(igMessageReceiverList)

extern "C" {
void *fn_80029F84();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMessageFilter_fieldInit()
{
    Meta::igMetaObject *meta = igMessageFilter_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMessageFilter_fieldTypes, 2);
    Meta::igObjectRefMetaField *msgTypeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80029F84();
    msgTypeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    msgTypeField->_construct = true;
    Meta::igObjectRefMetaField *receiversField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    receiversField->_metaObject = igMessageReceiverList_metaObject();
    receiversField->_construct = true;
    meta_setupFields(meta, igMessageFilter_fieldNames, igMessageFilter_fieldStorage, igMessageFilter_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igFilterMessageDispatcher {
// igFilterMessageDispatcher: Alchemy class registration (0x80285384..0x8028556C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFilterMessageDispatcher)
META_DECLARE(igMessageDispatcher)

extern "C" {
void fn_80284294();
void *igFilterMessageDispatcher_parentMeta();
extern char lbl_804CB728[];
}

struct igFilterMessageDispatcherInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _defaultFilters;
    igObjectRefMember _filters;
    inline ~igFilterMessageDispatcherInstance() { __vtable = igFilterMessageDispatcher_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFilterMessageDispatcher)

void *igFilterMessageDispatcher_vtableRead()
{
    igFilterMessageDispatcherInstance object;
    object.__vtable = lbl_804CB728;
    object.__vtable = igFilterMessageDispatcher_vtable;
    object._defaultFilters._value = 0;
    object._filters._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFilterMessageDispatcher)

void igFilterMessageDispatcher_register()
{
    fn_80284294();
    meta_registerClass(0, &igFilterMessageDispatcher_meta, igMessageDispatcher_register,
                       igFilterMessageDispatcher_parentMeta, igFilterMessageDispatcher_getMetaCall,
                       igFilterMessageDispatcher_className, 0x10,
                       igFilterMessageDispatcher_vtableRead, igFilterMessageDispatcher_fieldInit, 0, igFilterMessageDispatcher_dependencies);
}

META_GET_META_CALL(igFilterMessageDispatcher)

}
#pragma pop
}

namespace unknown8028556C {
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void igFilterMessageDispatcher_fieldInit();
void igMessageDispatcher_register();
extern char igFilterMessageDispatcher_className[];
extern char lbl_804CB728[];
extern char igFilterMessageDispatcher_vtable[];
extern void *igFilterMessageDispatcher_meta;
extern void *igMessageDispatcher_meta;
void *igFilterMessageDispatcher_getMeta();
void *igFilterMessageDispatcher_vtableRead();
void igFilterMessageDispatcher_arkRegister();
void igFilterMessageDispatcher_register();
void *igFilterMessageDispatcher_getMetaCall();
void *igFilterMessageDispatcher_parentMeta();
}
struct UnknownGenRoot802853D0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802853D0(){igObject_construct(this);}
};
struct UnknownGenObject802853D0 : UnknownGenRoot802853D0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802853D0(){unknown00=igFilterMessageDispatcher_vtable;}
};
extern "C" {
void *igFilterMessageDispatcher_parentMeta(){return igMessageDispatcher_meta;}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
#pragma use_lmw_stmw on
namespace igFilterMessageDispatcher_fieldInit {
// igFilterMessageDispatcher: Alchemy class registration (0x8028557C..0x80285644). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFilterMessageDispatcher)
META_DECLARE(igMessageFilterList)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igFilterMessageDispatcher_fieldInit()
{
    Meta::igMetaObject *meta = igFilterMessageDispatcher_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFilterMessageDispatcher_fieldTypes, 2);
    Meta::igObjectRefMetaField *defaultFiltersField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    defaultFiltersField->_metaObject = igMessageFilterList_metaObject();
    defaultFiltersField->_construct = true;
    Meta::igObjectRefMetaField *filtersField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    Meta::igMetaObject *igMessageFilterListMeta_ = igMessageFilterList_metaObject();
    filtersField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igMessageFilterListMeta_);
    filtersField->_construct = true;
    meta_setupFields(meta, igFilterMessageDispatcher_fieldNames, igFilterMessageDispatcher_fieldStorage, igFilterMessageDispatcher_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igMessageDispatcher {
// igMessageDispatcher: Alchemy class registration (0x80285644..0x8028579C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMessageDispatcher)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80284294();
void fn_8028579C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igMessageDispatcher)

META_GET_META(igMessageDispatcher)

META_ARK_REGISTER(igMessageDispatcher)

void igMessageDispatcher_register()
{
    fn_80284294();
    meta_registerClass(1, &igMessageDispatcher_meta, igObject_register,
                       fn_800237D0, igMessageDispatcher_getMetaCall,
                       igMessageDispatcher_className, 0x8,
                       0, fn_8028579C, 0, 0);
}

META_GET_META_CALL(igMessageDispatcher)

}
#pragma pop
}

namespace unknown8028579C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void *igFilterMessageDispatcher_getMetaCall();
void igMessageDefaultReceiver_fieldInit();
void igMessageReceiver_register();
void igObject_register();
extern char igMessageDispatcher_className[];
extern char igMessageDefaultReceiver_className[];
extern char lbl_804CB6C8[];
extern char igMessageDefaultReceiver_vtable[];
extern void *igMessageReceiver_meta;
extern void *igMessageDispatcher_meta;
extern void *igMessageDefaultReceiver_meta;
extern void *lbl_805621F4;
void *igMessageDispatcher_getMeta();
void igMessageDispatcher_arkRegister();
void igMessageDispatcher_register();
void *igMessageDispatcher_getMetaCall();
void *fn_8028579C();
void *igMessageDefaultReceiver_getMeta();
void *igMessageDefaultReceiver_vtableRead();
void igMessageDefaultReceiver_arkRegister();
void igMessageDefaultReceiver_register();
void *igMessageDefaultReceiver_getMetaCall();
void *igMessageDefaultReceiver_parentMeta();
}
struct UnknownGenRoot80285844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285844(){igObject_construct(this);}
};
struct UnknownGenObject80285844 : UnknownGenRoot80285844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject80285844(){unknown00=igMessageDefaultReceiver_vtable;}
};
extern "C" {
void *fn_8028579C(){
 void *value0=igMessageDispatcher_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igFilterMessageDispatcher_getMetaCall;
 return value0;
}
}
#pragma pop
}

namespace igMessageDefaultReceiver {
// igMessageDefaultReceiver: Alchemy class registration (0x802857B8..0x802859A0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMessageDefaultReceiver)
META_DECLARE(igMessageReceiver)

extern "C" {
void fn_80284294();
void *igMessageDefaultReceiver_parentMeta();
extern char lbl_804CB6C8[];
}

struct igMessageDefaultReceiverInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _msgHandler;
    char unknown0C[20];
    inline ~igMessageDefaultReceiverInstance() { __vtable = igMessageDefaultReceiver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMessageDefaultReceiver)

META_GET_META(igMessageDefaultReceiver)

void *igMessageDefaultReceiver_vtableRead()
{
    igMessageDefaultReceiverInstance object;
    object.__vtable = lbl_804CB6C8;
    object.__vtable = igMessageDefaultReceiver_vtable;
    object._msgHandler._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageDefaultReceiver)

void igMessageDefaultReceiver_register()
{
    fn_80284294();
    meta_registerClass(0, &igMessageDefaultReceiver_meta, igMessageReceiver_register,
                       igMessageDefaultReceiver_parentMeta, igMessageDefaultReceiver_getMetaCall,
                       igMessageDefaultReceiver_className, 0x18,
                       igMessageDefaultReceiver_vtableRead, igMessageDefaultReceiver_fieldInit, 0, igMessageDefaultReceiver_dependencies);
}

META_GET_META_CALL(igMessageDefaultReceiver)

}
#pragma pop
}

namespace unknown802859A0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void *igFilterMessageDispatcher_getMetaCall();
void igMessageDefaultReceiver_fieldInit();
void igMessageReceiver_register();
void igObject_register();
extern char igMessageDispatcher_className[];
extern char igMessageDefaultReceiver_className[];
extern char lbl_804CB6C8[];
extern char igMessageDefaultReceiver_vtable[];
extern void *igMessageReceiver_meta;
extern void *igMessageDispatcher_meta;
extern void *igMessageDefaultReceiver_meta;
extern void *lbl_805621F4;
void *igMessageDispatcher_getMeta();
void igMessageDispatcher_arkRegister();
void igMessageDispatcher_register();
void *igMessageDispatcher_getMetaCall();
void *fn_8028579C();
void *igMessageDefaultReceiver_getMeta();
void *igMessageDefaultReceiver_vtableRead();
void igMessageDefaultReceiver_arkRegister();
void igMessageDefaultReceiver_register();
void *igMessageDefaultReceiver_getMetaCall();
void *igMessageDefaultReceiver_parentMeta();
}
struct UnknownGenRoot80285844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285844(){igObject_construct(this);}
};
struct UnknownGenObject80285844 : UnknownGenRoot80285844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject80285844(){unknown00=igMessageDefaultReceiver_vtable;}
};
extern "C" {
void *igMessageDefaultReceiver_parentMeta(){return igMessageReceiver_meta;}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
#pragma use_lmw_stmw on
namespace igMessageDefaultReceiver_fieldInit {
// igMessageDefaultReceiver: Alchemy class registration (0x802859B0..0x80285A5C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMessageDefaultReceiver)
META_DECLARE(igObject)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMessageDefaultReceiver_fieldInit()
{
    Meta::igMetaObject *meta = igMessageDefaultReceiver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMessageDefaultReceiver_fieldTypes, 2);
    Meta::igObjectRefMetaField *msgHandlerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    msgHandlerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    Meta::igStructMetaField *msgHandlerFuncField = static_cast<Meta::igStructMetaField *>(meta_field(meta, base + 1));
    msgHandlerFuncField->_size = 12;
    meta_setupFields(meta, igMessageDefaultReceiver_fieldNames, igMessageDefaultReceiver_fieldStorage, igMessageDefaultReceiver_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igInsightScheduler {
// igInsightScheduler: Alchemy class registration (0x80285A5C..0x80285BB4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igInsightScheduler)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80284294();
void fn_80285BB4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igInsightScheduler)

META_GET_META(igInsightScheduler)

META_ARK_REGISTER(igInsightScheduler)

void igInsightScheduler_register()
{
    fn_80284294();
    meta_registerClass(1, &igInsightScheduler_meta, igObject_register,
                       fn_800237D0, igInsightScheduler_getMetaCall,
                       igInsightScheduler_className, 0x8,
                       0, fn_80285BB4, 0, 0);
}

META_GET_META_CALL(igInsightScheduler)

}
#pragma pop
}

namespace unknown80285BB4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void fn_80286008(void *,short);
void igInsightCore_arkRegister();
void igObjectList_register();
void igObject_register();
void *igSerialScheduler_getMetaCall();
extern char igInsightScheduler_className[];
extern char igInsightPluginList_className[];
extern char igInsightPlugin_className[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igInsightPluginList_vtable[];
extern char lbl_804CB604[];
extern char igInsightCore_vtable[];
extern void *igInsightScheduler_meta;
extern void *igInsightPluginList_meta;
extern void *igInsightPlugin_meta;
extern void *igInsightCore_meta;
extern void *lbl_805621F4;
void *igInsightScheduler_getMeta();
void igInsightScheduler_arkRegister();
void igInsightScheduler_register();
void *igInsightScheduler_getMetaCall();
void *fn_80285BB4();
void *igInsightPluginList_getMeta();
void *igInsightPluginList_vtableRead();
void igInsightPluginList_arkRegister();
void igInsightPluginList_register();
void *igInsightPluginList_getMetaCall();
void *igInsightPlugin_getMeta();
void igInsightPlugin_arkRegister();
void igInsightPlugin_register();
void *igInsightPlugin_getMetaCall();
}
struct UnknownGenObject80285C70_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80285F7C {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 char unknown34[52];
 int unknown68;
 char unknown6C[4];
};
extern "C" {
void *fn_80285BB4(){
 void *value0=igInsightScheduler_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igSerialScheduler_getMetaCall;
 return value0;
}
}
#pragma pop
}

namespace igInsightPluginList {
// igInsightPluginList: Alchemy class registration (0x80285BD0..0x80285DA0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igInsightPluginList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80284294();
extern char lbl_80476E0C[];
extern char lbl_804CB604[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igInsightPluginList)

META_GET_META(igInsightPluginList)

void *igInsightPluginList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CB604;
    object.__vtable = igInsightPluginList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInsightPluginList)

void igInsightPluginList_register()
{
    fn_80284294();
    meta_registerClass(0, &igInsightPluginList_meta, igObjectList_register,
                       fn_80024180, igInsightPluginList_getMetaCall,
                       igInsightPluginList_className, 0x14,
                       igInsightPluginList_vtableRead, 0, 0, igInsightPluginList_dependencies);
}

META_GET_META_CALL(igInsightPluginList)

}
#pragma pop
}

namespace igInsightPlugin {
// igInsightPlugin: Alchemy class registration (0x80285DA0..0x80285E9C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igInsightPlugin)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80284294();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInsightPlugin)

META_ARK_REGISTER(igInsightPlugin)

void igInsightPlugin_register()
{
    fn_80284294();
    meta_registerClass(1, &igInsightPlugin_meta, igObject_register,
                       fn_800237D0, igInsightPlugin_getMetaCall,
                       igInsightPlugin_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igInsightPlugin)

}
#pragma pop
}

namespace igInsightCore {
// igInsightCore: Alchemy class registration (0x80285E9C..0x80286008). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igInsightCore)

extern "C" {
void fn_80286008(void *,short);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igInsightCore)

META_METAOBJECT(igInsightCore)

META_GET_META(igInsightCore)

void *igInsightCore_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        int unknown14;
        int unknown18;
        int unknown1C;
        int unknown20;
        int unknown24;
        int unknown28;
        int unknown2C;
        int unknown30;
        char unknown34[52];
        int unknown68;
        char unknown6C[4];
    } object;
    igObject_construct(&object);
    object.__vtable = igInsightCore_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown68 = 0;
    void *result = meta_vtableOf(&object);
    fn_80286008(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
}

namespace unknown80286008 {
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
extern char igInsightCore_vtable[];
}
extern "C" {
void *fn_80286008(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 void *value11;
 void *value12;
 void *value13;
 void *value14;
 void *value15;
 void *value16;
 void *value17;
 void *value18;
 void *value19;
 void *value20;
 void *value21;
 void *value22;
 void *value23;
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=igInsightCore_vtable;
  if((int)(p0+104)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+104);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(p0+48)!=0){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48);
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
   }
  }
  if((int)(p0+44)!=0){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
   if(value4){
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
     fn_80066E1C(value4);
    }
   }
  }
  if((int)(p0+40)!=0){
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
   if(value6){
    value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
     fn_80066E1C(value6);
    }
   }
  }
  if((int)(p0+36)!=0){
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
   if(value8){
    value9=*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+4)=(reinterpret_cast<char *>(value9)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4)&0x7FFFFF)){
     fn_80066E1C(value8);
    }
   }
  }
  if((int)(p0+32)!=0){
   value10=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
   if(value10){
    value11=*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+4)=(reinterpret_cast<char *>(value11)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4)&0x7FFFFF)){
     fn_80066E1C(value10);
    }
   }
  }
  if((int)(p0+28)!=0){
   value12=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
   if(value12){
    value13=*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+4)=(reinterpret_cast<char *>(value13)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4)&0x7FFFFF)){
     fn_80066E1C(value12);
    }
   }
  }
  if((int)(p0+24)!=0){
   value14=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
   if(value14){
    value15=*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+4)=(reinterpret_cast<char *>(value15)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4)&0x7FFFFF)){
     fn_80066E1C(value14);
    }
   }
  }
  if((int)(p0+20)!=0){
   value16=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
   if(value16){
    value17=*reinterpret_cast<void **>(reinterpret_cast<char *>(value16)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value16)+4)=(reinterpret_cast<char *>(value17)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value16)+4)&0x7FFFFF)){
     fn_80066E1C(value16);
    }
   }
  }
  if((int)(p0+16)!=0){
   value18=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
   if(value18){
    value19=*reinterpret_cast<void **>(reinterpret_cast<char *>(value18)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value18)+4)=(reinterpret_cast<char *>(value19)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value18)+4)&0x7FFFFF)){
     fn_80066E1C(value18);
    }
   }
  }
  if((int)(p0+12)!=0){
   value20=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
   if(value20){
    value21=*reinterpret_cast<void **>(reinterpret_cast<char *>(value20)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value20)+4)=(reinterpret_cast<char *>(value21)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value20)+4)&0x7FFFFF)){
     fn_80066E1C(value20);
    }
   }
  }
  if((int)(p0+8)!=0){
   value22=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
   if(value22){
    value23=*reinterpret_cast<void **>(reinterpret_cast<char *>(value22)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value22)+4)=(reinterpret_cast<char *>(value23)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value22)+4)&0x7FFFFF)){
     fn_80066E1C(value22);
    }
   }
  }
  if((int)(short)p1>0){
   fn_80066DFC((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
}

namespace unknown802862A0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80286560();
void igInsightCore_fieldInit();
void *igInsightCore_getMeta();
void igInsightCore_vtableRead();
void igObject_register();
extern char igInsightCore_className[];
extern char igInsightCore_meta[];
void igInsightCore_register();
void *igInsightCore_getMetaCall();
}
extern "C" {
void igInsightCore_arkRegister(){
 meta_registerNow((int)igInsightCore_register);
}
void igInsightCore_register(){
 fn_80284294();
 meta_registerClass(0,(int)igInsightCore_meta,(int)igObject_register,(int)fn_800237D0,(int)igInsightCore_getMetaCall,(int)igInsightCore_className,112,(int)igInsightCore_vtableRead,(int)igInsightCore_fieldInit,(int)fn_80286560,(int)igInsightCore_dependencies);
}
void *igInsightCore_getMetaCall(){return igInsightCore_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
#pragma use_lmw_stmw on
namespace igInsightCore_fieldInit {
// igInsightCore: Alchemy class registration (0x80286368..0x80286560). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igInsightCore)
META_DECLARE(igInfoManagerOrderedList)
META_DECLARE(igInsightPluginList)
META_DECLARE(igInsightScheduler)
META_DECLARE(igMessenger)
META_DECLARE(igWindowResizeEventReceiver)

extern "C" {
void *fn_800236A8();
void *fn_8002E824();
void *fn_800CAF4C();
void *fn_800CE788();
void *fn_8010DDC4();
void *fn_8010DFFC();
void *fn_80112E78();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igInsightCore_fieldInit()
{
    Meta::igMetaObject *meta = igInsightCore_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igInsightCore_fieldTypes, 19);
    Meta::igObjectRefMetaField *managerListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    managerListField->_metaObject = igInfoManagerOrderedList_metaObject();
    managerListField->_construct = true;
    Meta::igObjectRefMetaField *schedulerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    schedulerField->_metaObject = igInsightScheduler_metaObject();
    schedulerField->_construct = true;
    Meta::igObjectRefMetaField *infoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_8002E824();
    infoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    infoListField->_construct = true;
    Meta::igObjectRefMetaField *windowField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_800CAF4C();
    windowField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    Meta::igObjectRefMetaField *visualContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v10 = fn_800CE788();
    visualContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    Meta::igObjectRefMetaField *rendererListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v12 = fn_8010DFFC();
    rendererListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    rendererListField->_construct = true;
    Meta::igObjectRefMetaField *dispatcherField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_v14 = fn_80112E78();
    dispatcherField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v14);
    dispatcherField->_construct = true;
    Meta::igObjectRefMetaField *windowResizeReceiverField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    windowResizeReceiverField->_metaObject = igWindowResizeEventReceiver_metaObject();
    windowResizeReceiverField->_construct = true;
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    messengerField->_metaObject = igMessenger_metaObject();
    messengerField->_construct = true;
    Meta::igObjectRefMetaField *clearRendererField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_v20 = fn_8010DDC4();
    clearRendererField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v20);
    clearRendererField->_construct = true;
    Meta::igObjectRefMetaField *timerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    void *value_v22 = fn_800236A8();
    timerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v22);
    timerField->_construct = true;
    Meta::igObjectRefMetaField *pluginsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 18));
    pluginsField->_metaObject = igInsightPluginList_metaObject();
    pluginsField->_construct = true;
    meta_setupFields(meta, igInsightCore_fieldNames, igInsightCore_fieldStorage, igInsightCore_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown80286560 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010F4FC();
void fn_80284294();
void *fn_80289930();
void igEventReceiver_register();
void igWindowResizeEventReceiver_fieldInit();
extern char igWindowResizeEventReceiver_className[];
extern char igEventReceiver_vtable[];
extern char igWindowResizeEventReceiver_vtable[];
extern void *igWindowResizeEventReceiver_meta;
extern void *lbl_805621F4;
void *igWindowResizeEventReceiver_getMeta();
void *igWindowResizeEventReceiver_vtableRead();
void igWindowResizeEventReceiver_arkRegister();
void igWindowResizeEventReceiver_register();
void *igWindowResizeEventReceiver_getMetaCall();
}
struct UnknownGenObject80286620_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80286560(){return fn_80289930();}
void *igWindowResizeEventReceiver_metaObject(){
 if(!igWindowResizeEventReceiver_meta) igWindowResizeEventReceiver_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igWindowResizeEventReceiver_meta;
}
void *igWindowResizeEventReceiver_getMeta(){
 if(!igWindowResizeEventReceiver_meta || !(reinterpret_cast<unsigned int *>(igWindowResizeEventReceiver_meta)[0x24/4]&4)) igWindowResizeEventReceiver_arkRegister();
 return igWindowResizeEventReceiver_meta;
}
void *igWindowResizeEventReceiver_vtableRead(){
 UnknownGenObject80286620_0 object;
 igObject_construct(&object);
 object.unknown00=igEventReceiver_vtable;
 object.unknown00=igWindowResizeEventReceiver_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igWindowResizeEventReceiver_arkRegister(){
 meta_registerNow((int)igWindowResizeEventReceiver_register);
}
void igWindowResizeEventReceiver_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igWindowResizeEventReceiver_meta,(int)igEventReceiver_register,(int)fn_8010F4FC,(int)igWindowResizeEventReceiver_getMetaCall,(int)igWindowResizeEventReceiver_className,12,(int)igWindowResizeEventReceiver_vtableRead,(int)igWindowResizeEventReceiver_fieldInit,0,(int)igWindowResizeEventReceiver_dependencies);
}
void *igWindowResizeEventReceiver_getMetaCall(){return igWindowResizeEventReceiver_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
#pragma use_lmw_stmw on
namespace igWindowResizeEventReceiver_fieldInit {
// igWindowResizeEventReceiver: Alchemy class registration (0x80286738..0x802867E0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igWindowResizeEventReceiver)
META_DECLARE(igInsightCore)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igWindowResizeEventReceiver_fieldInit()
{
    Meta::igMetaObject *meta = igWindowResizeEventReceiver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igWindowResizeEventReceiver_fieldTypes, 1);
    Meta::igObjectRefMetaField *insightCoreField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    insightCoreField->_metaObject = igInsightCore_metaObject();
    insightCoreField->_refCounted = false;
    meta_setupFields(meta, igWindowResizeEventReceiver_fieldNames, igWindowResizeEventReceiver_fieldStorage, igWindowResizeEventReceiver_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown802867E0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void *fn_80284540();
void igMessage_register();
void igViewportResizedMessage_fieldInit();
extern char igViewportResizedMessage_className[];
extern char igViewportResizedMessage_vtable[];
extern char igMessage_vtable[];
extern void *igViewportResizedMessage_meta;
void *igViewportResizedMessage_getMeta();
void *igViewportResizedMessage_vtableRead();
void igViewportResizedMessage_arkRegister();
void igViewportResizedMessage_register();
void *igViewportResizedMessage_getMetaCall();
}
struct UnknownGenObject8028686C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igViewportResizedMessage_create(void *object){
 igViewportResizedMessage_arkRegister();
 return meta_createInstance(igViewportResizedMessage_meta,object);
}
void *igViewportResizedMessage_getMeta(){
 if(!igViewportResizedMessage_meta || !(reinterpret_cast<unsigned int *>(igViewportResizedMessage_meta)[0x24/4]&4)) igViewportResizedMessage_arkRegister();
 return igViewportResizedMessage_meta;
}
void *igViewportResizedMessage_vtableRead(){
 UnknownGenObject8028686C_0 object;
 igObject_construct(&object);
 object.unknown00=igMessage_vtable;
 object.unknown00=igViewportResizedMessage_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewportResizedMessage_arkRegister(){
 meta_registerNow((int)igViewportResizedMessage_register);
}
void igViewportResizedMessage_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igViewportResizedMessage_meta,(int)igMessage_register,(int)fn_80284540,(int)igViewportResizedMessage_getMetaCall,(int)igViewportResizedMessage_className,24,(int)igViewportResizedMessage_vtableRead,(int)igViewportResizedMessage_fieldInit,0,0);
}
void *igViewportResizedMessage_getMetaCall(){return igViewportResizedMessage_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
#pragma use_lmw_stmw on
namespace igViewportResizedMessage_fieldInit {
// igViewportResizedMessage: Alchemy class registration (0x8028697C..0x802869FC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewportResizedMessage)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewportResizedMessage_fieldInit()
{
    Meta::igMetaObject *meta = igViewportResizedMessage_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewportResizedMessage_fieldTypes, 2);
    meta_setupFields(meta, igViewportResizedMessage_fieldNames, igViewportResizedMessage_fieldStorage, igViewportResizedMessage_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

#pragma push
#pragma optimize_for_size off
namespace igInfoManagerOrderedList {
// igInfoManagerOrderedList: Alchemy class registration (0x802869FC..0x80286CC8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igInfoManagerOrderedList)
META_DECLARE(igDependencyOrderedList)

extern "C" {
void *fn_8010E280();
void fn_80284294();
extern char lbl_804CB400[];
}

struct igDependencyOrderedListInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _objectList;
    igObjectRefMember _dependencies;
    igObjectRefMember _order;
    igObjectRefMember _checkPoints;
    inline ~igDependencyOrderedListInstance() { __vtable = igDependencyOrderedList_vtable; }
};

struct Instance_804CB400 : igDependencyOrderedListInstance {
    inline ~Instance_804CB400() { __vtable = lbl_804CB400; }
};

struct igInfoManagerOrderedListInstance : Instance_804CB400 {
    char unknown18[16];
    inline ~igInfoManagerOrderedListInstance() { __vtable = igInfoManagerOrderedList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igInfoManagerOrderedList)

META_GET_META(igInfoManagerOrderedList)

void *igInfoManagerOrderedList_vtableRead()
{
    igInfoManagerOrderedListInstance object;
    object.__vtable = igDependencyOrderedList_vtable;
    object._objectList._value = 0;
    object._dependencies._value = 0;
    object._order._value = 0;
    object._checkPoints._value = 0;
    object.__vtable = lbl_804CB400;
    object.__vtable = igInfoManagerOrderedList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInfoManagerOrderedList)

void igInfoManagerOrderedList_register()
{
    fn_80284294();
    meta_registerClass(0, &igInfoManagerOrderedList_meta, igDependencyOrderedList_register,
                       fn_8010E280, igInfoManagerOrderedList_getMetaCall,
                       igInfoManagerOrderedList_className, 0x1C,
                       igInfoManagerOrderedList_vtableRead, 0, 0, igInfoManagerOrderedList_dependencies);
}

META_GET_META_CALL(igInfoManagerOrderedList)

}
#pragma pop
}
#pragma pop

#pragma push
#pragma optimize_for_size off
namespace igInfoManagerList {
// igInfoManagerList: Alchemy class registration (0x80286CC8..0x80286E98). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igInfoManagerList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80284294();
extern char lbl_80476E0C[];
extern char lbl_804CB340[];
}

struct Instance_80286D68_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igInfoManagerList)

META_GET_META(igInfoManagerList)

void *igInfoManagerList_vtableRead()
{
    Instance_80286D68_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CB340;
    object.__vtable = igInfoManagerList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInfoManagerList)

void igInfoManagerList_register()
{
    fn_80284294();
    meta_registerClass(0, &igInfoManagerList_meta, igObjectList_register,
                       fn_80024180, igInfoManagerList_getMetaCall,
                       igInfoManagerList_className, 0x14,
                       igInfoManagerList_vtableRead, 0, 0, igInfoManagerList_dependencies);
}

META_GET_META_CALL(igInfoManagerList)

}
#pragma pop
}
#pragma pop

#pragma push
#pragma optimize_for_size off
namespace unknown80286E98 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010E280();
void fn_80284294();
void igDependencyOrderedList_register();
void igInfoManager_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char igInfoManagerOrderedList_className[];
extern char igInfoManagerList_className[];
extern char igInfoManager_className[];
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igInfoManagerList_vtable[];
extern char lbl_804CB340[];
extern char igInfoManagerOrderedList_vtable[];
extern char lbl_804CB400[];
extern void *igInfoManagerOrderedList_meta;
extern void *igInfoManagerList_meta;
extern void *igInfoManager_meta;
extern void *lbl_805621F4;
void *igInfoManagerOrderedList_getMeta();
void *igInfoManagerOrderedList_vtableRead();
void igInfoManagerOrderedList_arkRegister();
void igInfoManagerOrderedList_register();
void *igInfoManagerOrderedList_getMetaCall();
void *igInfoManagerList_getMeta();
void *igInfoManagerList_vtableRead();
void igInfoManagerList_arkRegister();
void igInfoManagerList_register();
void *igInfoManagerList_getMetaCall();
void *igInfoManager_getMeta();
void igInfoManager_arkRegister();
void igInfoManager_register();
void *igInfoManager_getMetaCall();
}
struct UnknownGenRoot80286A9C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80286A9C(){igObject_construct(this);}
};
struct UnknownGenObject80286A9C_0 : UnknownGenRoot80286A9C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80286A9C_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject80286A9C_1 : UnknownGenObject80286A9C_0 {
 inline ~UnknownGenObject80286A9C_1(){unknown00=lbl_804CB400;}
};
struct UnknownGenObject80286A9C : UnknownGenObject80286A9C_1 {
 char unknown18[16];
 inline ~UnknownGenObject80286A9C(){unknown00=igInfoManagerOrderedList_vtable;}
};
struct UnknownGenObject80286D68_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igInfoManager_getMeta(){
 if(!igInfoManager_meta || !(reinterpret_cast<unsigned int *>(igInfoManager_meta)[0x24/4]&4)) igInfoManager_arkRegister();
 return igInfoManager_meta;
}
void igInfoManager_arkRegister(){
 meta_registerNow((int)igInfoManager_register);
}
void igInfoManager_register(){
 fn_80284294();
 meta_registerClass(1,(int)&igInfoManager_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igInfoManager_getMetaCall,(int)igInfoManager_className,16,0,(int)igInfoManager_fieldInit,0,(int)igInfoManager_dependencies);
}
void *igInfoManager_getMetaCall(){return igInfoManager_getMeta();}
}
#pragma pop
}
#pragma pop

#pragma push
#pragma optimize_for_size off
#pragma use_lmw_stmw on
namespace igInfoManager_fieldInit {
// igInfoManager: Alchemy class registration (0x80286FA4..0x8028704C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igInfoManager)
META_DECLARE(igInsightCore)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igInfoManager_fieldInit()
{
    Meta::igMetaObject *meta = igInfoManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igInfoManager_fieldTypes, 1);
    Meta::igObjectRefMetaField *insightField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    insightField->_metaObject = igInsightCore_metaObject();
    insightField->_refCounted = false;
    meta_setupFields(meta, igInfoManager_fieldNames, igInfoManager_fieldStorage, igInfoManager_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop
