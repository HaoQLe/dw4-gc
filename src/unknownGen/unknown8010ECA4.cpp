#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010CC08();
void *fn_8010D6A0();
void igEventReceiver_register();
void igGuiComponentModel_register();
void igHotKeyBinding_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igRadioGroupModel_className[];
extern char igOnOffModel_className[];
extern char igHotKeyEventReceiver_className[];
extern char igHotKeyBindingList_className[];
extern char igHotKeyBinding_className[];
extern char igModel_vtable[];
extern char igHotKeyEventReceiver_vtable[];
extern char igHotKeyBinding_vtable[];
extern char igHotKeyBindingList_vtable[];
extern char lbl_804976C0[];
extern char igEventReceiver_vtable[];
extern char igOnOffModel_vtable[];
extern char igRadioGroupModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igRadioGroupModel_fieldTypes[4];
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igOnOffModel_fieldTypes[4];
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igModel_dependencies[8];
extern char lbl_8055EFEC[8];
extern char igModel_fieldTypes[4];
extern char igModel_fieldNames[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldOffsets[4];
extern char igHotKeyEventReceiver_dependencies[8];
extern char igHotKeyEventReceiver_fieldTypes[4];
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyBindingList_dependencies[8];
extern char igHotKeyBinding_dependencies[8];
extern void *lbl_805621F4;
extern void *igRadioGroupModel_meta;
extern void *igOnOffModel_meta;
extern void *igModel_meta;
extern void *igHotKeyEventReceiver_meta;
extern void *igHotKeyBindingList_meta;
extern void *igHotKeyBinding_meta;
extern void *igEventReceiver_meta;
void *igRadioGroupModel_getMeta();
void *igRadioGroupModel_vtableRead();
void igRadioGroupModel_arkRegister();
void igRadioGroupModel_register();
void *igRadioGroupModel_getMetaCall();
void *fn_8010EE6C();
void igRadioGroupModel_fieldInit();
void *igOnOffModel_getMeta();
void *igOnOffModel_vtableRead();
void igOnOffModel_arkRegister();
void igOnOffModel_register();
void *igOnOffModel_getMetaCall();
void igOnOffModel_fieldInit();
void *igModel_getMeta();
void *igModel_vtableRead();
void igModel_arkRegister();
void igModel_register();
void *igModel_getMetaCall();
void igModel_fieldInit();
void *igHotKeyEventReceiver_getMeta();
void *igHotKeyEventReceiver_vtableRead();
void igHotKeyEventReceiver_arkRegister();
void igHotKeyEventReceiver_register();
void *igHotKeyEventReceiver_getMetaCall();
void *fn_8010F4FC();
void igHotKeyEventReceiver_fieldInit();
void *fn_8010F58C();
void *igHotKeyBindingList_getMeta();
void *igHotKeyBindingList_vtableRead();
void igHotKeyBindingList_arkRegister();
void igHotKeyBindingList_register();
void *igHotKeyBindingList_getMetaCall();
void *igHotKeyBinding_getMeta();
void *igHotKeyBinding_vtableRead();
void igHotKeyBinding_arkRegister();
void igHotKeyBinding_register();
void *igHotKeyBinding_getMetaCall();
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){igObject_construct(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=igRadioGroupModel_vtable;}
};
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){igObject_construct(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=igOnOffModel_vtable;}
};
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){igObject_construct(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=igModel_vtable;}
};
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){igObject_construct(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=igHotKeyEventReceiver_vtable;}
};
struct UnknownGenObject8010F604_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){igObject_construct(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=igHotKeyBinding_vtable;}
};
extern "C" {
void *fn_8010ECA4(){
 if(!igRadioGroupModel_meta) igRadioGroupModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRadioGroupModel_meta;
}
void *igRadioGroupModel_getMeta(){
 if(!igRadioGroupModel_meta || !(reinterpret_cast<unsigned int *>(igRadioGroupModel_meta)[0x24/4]&4)) igRadioGroupModel_arkRegister();
 return igRadioGroupModel_meta;
}
void *igRadioGroupModel_vtableRead(){
 UnknownGenObject8010ED1C object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 object.unknown00=igRadioGroupModel_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRadioGroupModel_arkRegister(){
 meta_registerNow((int)igRadioGroupModel_register);
}
void igRadioGroupModel_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igRadioGroupModel_meta,(int)igModel_register,(int)fn_8010EE6C,(int)igRadioGroupModel_getMetaCall,(int)igRadioGroupModel_className,16,(int)igRadioGroupModel_vtableRead,(int)igRadioGroupModel_fieldInit,0,0);
}
void *igRadioGroupModel_getMetaCall(){return igRadioGroupModel_getMeta();}
void *fn_8010EE6C(){return igModel_meta;}
void igRadioGroupModel_fieldInit(){
 void *value0=igRadioGroupModel_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igRadioGroupModel_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 fn_80053650(value2,-1);
 meta_setupFields(value0,igRadioGroupModel_fieldNames,igRadioGroupModel_fieldStorage,igRadioGroupModel_fieldOffsets,value1);
}
void *igOnOffModel_getMeta(){
 if(!igOnOffModel_meta || !(reinterpret_cast<unsigned int *>(igOnOffModel_meta)[0x24/4]&4)) igOnOffModel_arkRegister();
 return igOnOffModel_meta;
}
void *igOnOffModel_vtableRead(){
 UnknownGenObject8010EF2C object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 object.unknown00=igGuiComponentModel_vtable;
 object.unknown00=igOnOffModel_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOnOffModel_arkRegister(){
 meta_registerNow((int)igOnOffModel_register);
}
void igOnOffModel_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igOnOffModel_meta,(int)igGuiComponentModel_register,(int)fn_8010D6A0,(int)igOnOffModel_getMetaCall,(int)igOnOffModel_className,40,(int)igOnOffModel_vtableRead,(int)igOnOffModel_fieldInit,0,0);
}
void *igOnOffModel_getMetaCall(){return igOnOffModel_getMeta();}
void igOnOffModel_fieldInit(){
 void *value0=igOnOffModel_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igOnOffModel_fieldTypes,1);
 meta_setupFields(value0,igOnOffModel_fieldNames,igOnOffModel_fieldStorage,igOnOffModel_fieldOffsets,value1);
}
void *fn_8010F0F4(){
 if(!igModel_meta) igModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igModel_meta;
}
void *igModel_getMeta(){
 if(!igModel_meta || !(reinterpret_cast<unsigned int *>(igModel_meta)[0x24/4]&4)) igModel_arkRegister();
 return igModel_meta;
}
void *igModel_vtableRead(){
 UnknownGenObject8010F16C object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igModel_arkRegister(){
 meta_registerNow((int)igModel_register);
}
void igModel_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igModel_meta,(int)igObject_register,(int)fn_800237D0,(int)igModel_getMetaCall,(int)lbl_8055EFEC,12,(int)igModel_vtableRead,(int)igModel_fieldInit,0,(int)igModel_dependencies);
}
void *igModel_getMetaCall(){return igModel_getMeta();}
void igModel_fieldInit(){
 void *value0=igModel_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igModel_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8010CC08();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,igModel_fieldNames,igModel_fieldStorage,igModel_fieldOffsets,value1);
}
void *fn_8010F334(){
 if(!igHotKeyEventReceiver_meta) igHotKeyEventReceiver_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igHotKeyEventReceiver_meta;
}
void *igHotKeyEventReceiver_getMeta(){
 if(!igHotKeyEventReceiver_meta || !(reinterpret_cast<unsigned int *>(igHotKeyEventReceiver_meta)[0x24/4]&4)) igHotKeyEventReceiver_arkRegister();
 return igHotKeyEventReceiver_meta;
}
void *igHotKeyEventReceiver_vtableRead(){
 UnknownGenObject8010F3AC object;
 object.unknown00=igEventReceiver_vtable;
 object.unknown00=igHotKeyEventReceiver_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igHotKeyEventReceiver_arkRegister(){
 meta_registerNow((int)igHotKeyEventReceiver_register);
}
void igHotKeyEventReceiver_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igHotKeyEventReceiver_meta,(int)igEventReceiver_register,(int)fn_8010F4FC,(int)igHotKeyEventReceiver_getMetaCall,(int)igHotKeyEventReceiver_className,12,(int)igHotKeyEventReceiver_vtableRead,(int)igHotKeyEventReceiver_fieldInit,0,(int)igHotKeyEventReceiver_dependencies);
}
void *igHotKeyEventReceiver_getMetaCall(){return igHotKeyEventReceiver_getMeta();}
void *fn_8010F4FC(){return igEventReceiver_meta;}
void igHotKeyEventReceiver_fieldInit(){
 void *value0=igHotKeyEventReceiver_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igHotKeyEventReceiver_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8010F58C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,igHotKeyEventReceiver_fieldNames,igHotKeyEventReceiver_fieldStorage,igHotKeyEventReceiver_fieldOffsets,value1);
}
void *fn_8010F58C(){
 if(!igHotKeyBindingList_meta) igHotKeyBindingList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igHotKeyBindingList_meta;
}
void *igHotKeyBindingList_getMeta(){
 if(!igHotKeyBindingList_meta || !(reinterpret_cast<unsigned int *>(igHotKeyBindingList_meta)[0x24/4]&4)) igHotKeyBindingList_arkRegister();
 return igHotKeyBindingList_meta;
}
void *igHotKeyBindingList_vtableRead(){
 UnknownGenObject8010F604_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804976C0;
 object.unknown00=igHotKeyBindingList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igHotKeyBindingList_arkRegister(){
 meta_registerNow((int)igHotKeyBindingList_register);
}
void igHotKeyBindingList_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igHotKeyBindingList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igHotKeyBindingList_getMetaCall,(int)igHotKeyBindingList_className,20,(int)igHotKeyBindingList_vtableRead,0,0,(int)igHotKeyBindingList_dependencies);
}
void *igHotKeyBindingList_getMetaCall(){return igHotKeyBindingList_getMeta();}
void *igHotKeyBinding_create(void *object){
 igHotKeyBinding_arkRegister();
 return meta_createInstance(igHotKeyBinding_meta,object);
}
void *igHotKeyBinding_getMeta(){
 if(!igHotKeyBinding_meta || !(reinterpret_cast<unsigned int *>(igHotKeyBinding_meta)[0x24/4]&4)) igHotKeyBinding_arkRegister();
 return igHotKeyBinding_meta;
}
void *igHotKeyBinding_vtableRead(){
 UnknownGenObject8010F79C object;
 object.unknown00=igHotKeyBinding_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igHotKeyBinding_arkRegister(){
 meta_registerNow((int)igHotKeyBinding_register);
}
void igHotKeyBinding_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igHotKeyBinding_meta,(int)igObject_register,(int)fn_800237D0,(int)igHotKeyBinding_getMetaCall,(int)igHotKeyBinding_className,20,(int)igHotKeyBinding_vtableRead,(int)igHotKeyBinding_fieldInit,0,(int)igHotKeyBinding_dependencies);
}
void *igHotKeyBinding_getMetaCall(){return igHotKeyBinding_getMeta();}
}
#pragma pop
