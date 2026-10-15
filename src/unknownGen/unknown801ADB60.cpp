#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801AE468(void *,short);
void igSorter_arkRegister();
void *fn_801C7344();
void igGroup_register();
void igPropertyKey_register();
void igPropertyValue_register();
extern char igNamedObject_vtable[];
extern char igSwitch_className[];
extern char igStringValue_className[];
extern char igStringKey_className[];
extern char igSwitch_vtable[];
extern char igStringKey_vtable[];
extern char igSorter_vtable[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char lbl_804B977C[];
extern char igStringValue_vtable[];
extern char lbl_804B983C[];
extern char igSwitch_dependencies[8];
extern char igSwitch_fieldTypes[4];
extern char igSwitch_fieldNames[4];
extern char igSwitch_fieldStorage[4];
extern char igSwitch_fieldOffsets[4];
extern char igStringValue_fieldTypes[4];
extern char igStringValue_fieldNames[4];
extern char igStringValue_fieldStorage[4];
extern char igStringValue_fieldOffsets[4];
extern char igStringKey_fieldTypes[4];
extern char igStringKey_fieldNames[4];
extern char igStringKey_fieldStorage[4];
extern char igStringKey_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igSwitch_meta;
extern void *igStringValue_meta;
extern void *igStringKey_meta;
extern void *igSorter_meta;
extern void *igPropertyValue_meta;
extern void *igPropertyKey_meta;
void *igSwitch_getMeta();
void *igSwitch_vtableRead();
void igSwitch_arkRegister();
void igSwitch_register();
void *igSwitch_getMetaCall();
void igSwitch_fieldInit();
void *igStringValue_getMeta();
void *igStringValue_vtableRead();
void igStringValue_arkRegister();
void igStringValue_register();
void *igStringValue_getMetaCall();
void *igStringValue_parentMeta();
void igStringValue_fieldInit();
void *igStringKey_getMeta();
void *igStringKey_vtableRead();
void igStringKey_arkRegister();
void igStringKey_register();
void *igStringKey_getMetaCall();
void *igStringKey_parentMeta();
void igStringKey_fieldInit();
}
struct UnknownGenRoot801ADC10 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801ADC10(){igObject_construct(this);}
};
struct UnknownGenObject801ADC10_0 : UnknownGenRoot801ADC10 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801ADC10_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801ADC10_1 : UnknownGenObject801ADC10_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801ADC10_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801ADC10_2 : UnknownGenObject801ADC10_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801ADC10_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801ADC10 : UnknownGenObject801ADC10_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801ADC10(){unknown00=igSwitch_vtable;}
};
struct UnknownGenRoot801ADF48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801ADF48(){igObject_construct(this);}
};
struct UnknownGenObject801ADF48 : UnknownGenRoot801ADF48 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801ADF48(){unknown00=igStringValue_vtable;}
};
struct UnknownGenRoot801AE178 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AE178(){igObject_construct(this);}
};
struct UnknownGenObject801AE178 : UnknownGenRoot801AE178 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801AE178(){unknown00=igStringKey_vtable;}
};
struct UnknownGenObject801AE3AC {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 char unknown0C[4];
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 int unknown38;
 int unknown3C;
 int unknown40;
 int unknown44;
 int unknown48;
 char unknown4C[4];
 int unknown50;
 int unknown54;
 int unknown58;
 int unknown5C;
 int unknown60;
 int unknown64;
 int unknown68;
 int unknown6C;
 char unknown70[4];
 int unknown74;
 char unknown78[24];
};
extern "C" {
void *igSwitch_create(void *object){
 igSwitch_arkRegister();
 return meta_createInstance(igSwitch_meta,object);
}
void *fn_801ADB98(){
 if(!igSwitch_meta) igSwitch_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSwitch_meta;
}
void *igSwitch_getMeta(){
 if(!igSwitch_meta || !(reinterpret_cast<unsigned int *>(igSwitch_meta)[0x24/4]&4)) igSwitch_arkRegister();
 return igSwitch_meta;
}
void *igSwitch_vtableRead(){
 UnknownGenObject801ADC10 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=igSwitch_vtable;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSwitch_arkRegister(){
 meta_registerNow((int)igSwitch_register);
}
void igSwitch_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSwitch_meta,(int)igGroup_register,(int)fn_8011148C,(int)igSwitch_getMetaCall,(int)igSwitch_className,36,(int)igSwitch_vtableRead,(int)igSwitch_fieldInit,0,(int)igSwitch_dependencies);
}
void *igSwitch_getMetaCall(){return igSwitch_getMeta();}
void igSwitch_fieldInit(){
 void *value0=igSwitch_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igSwitch_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801C7344();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,igSwitch_fieldNames,igSwitch_fieldStorage,igSwitch_fieldOffsets,value1);
}
void *igStringValue_getMeta(){
 if(!igStringValue_meta || !(reinterpret_cast<unsigned int *>(igStringValue_meta)[0x24/4]&4)) igStringValue_arkRegister();
 return igStringValue_meta;
}
void *igStringValue_vtableRead(){
 UnknownGenObject801ADF48 object;
 object.unknown00=lbl_804B983C;
 object.unknown00=igStringValue_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStringValue_arkRegister(){
 meta_registerNow((int)igStringValue_register);
}
void igStringValue_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igStringValue_meta,(int)igPropertyValue_register,(int)igStringValue_parentMeta,(int)igStringValue_getMetaCall,(int)igStringValue_className,12,(int)igStringValue_vtableRead,(int)igStringValue_fieldInit,0,0);
}
void *igStringValue_getMetaCall(){return igStringValue_getMeta();}
void *igStringValue_parentMeta(){return igPropertyValue_meta;}
void igStringValue_fieldInit(){
 void *value0=igStringValue_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igStringValue_fieldTypes,1);
 meta_setupFields(value0,igStringValue_fieldNames,igStringValue_fieldStorage,igStringValue_fieldOffsets,value1);
}
void *igStringKey_create(void *object){
 igStringKey_arkRegister();
 return meta_createInstance(igStringKey_meta,object);
}
void *igStringKey_getMeta(){
 if(!igStringKey_meta || !(reinterpret_cast<unsigned int *>(igStringKey_meta)[0x24/4]&4)) igStringKey_arkRegister();
 return igStringKey_meta;
}
void *igStringKey_vtableRead(){
 UnknownGenObject801AE178 object;
 object.unknown00=lbl_804B977C;
 object.unknown00=igStringKey_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStringKey_arkRegister(){
 meta_registerNow((int)igStringKey_register);
}
void igStringKey_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igStringKey_meta,(int)igPropertyKey_register,(int)igStringKey_parentMeta,(int)igStringKey_getMetaCall,(int)igStringKey_className,12,(int)igStringKey_vtableRead,(int)igStringKey_fieldInit,0,0);
}
void *igStringKey_getMetaCall(){return igStringKey_getMeta();}
void *igStringKey_parentMeta(){return igPropertyKey_meta;}
void igStringKey_fieldInit(){
 void *value0=igStringKey_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igStringKey_fieldTypes,1);
 meta_setupFields(value0,igStringKey_fieldNames,igStringKey_fieldStorage,igStringKey_fieldOffsets,value1);
}
void *fn_801AE334(){
 if(!igSorter_meta) igSorter_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSorter_meta;
}
void *igSorter_getMeta(){
 if(!igSorter_meta || !(reinterpret_cast<unsigned int *>(igSorter_meta)[0x24/4]&4)) igSorter_arkRegister();
 return igSorter_meta;
}
void *igSorter_vtableRead(){
 UnknownGenObject801AE3AC object;
 igObject_construct(&object);
 object.unknown00=igSorter_vtable;
 object.unknown08=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 object.unknown38=0;
 object.unknown3C=0;
 object.unknown40=0;
 object.unknown44=0;
 object.unknown48=0;
 object.unknown50=0;
 object.unknown54=0;
 object.unknown58=0;
 object.unknown5C=0;
 object.unknown60=0;
 object.unknown64=0;
 object.unknown68=0;
 object.unknown6C=0;
 object.unknown74=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801AE468(&object,-1);
 return result;
}
}
#pragma pop
