#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_80202550();
void *fn_80202600();
void igInfo_register();
void igNamedObject_register();
void igObjectList_register();
void igObject_register();
void igShaderFactory_fieldInit();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_804AAFB8[];
extern char igShaderProcessor_className[];
extern char igShaderInfo_className[];
extern char igShaderFunction_className[];
extern char igShaderFactoryList_className[];
extern char igShaderFactory_className[];
extern char igShaderProcessor_vtable[];
extern char igShaderInfo_vtable[];
extern char igShaderFactory_vtable[];
extern char igShaderFactoryList_vtable[];
extern char lbl_804B90FC[];
extern char igShaderInfo_dependencies[8];
extern char igShaderInfo_fieldTypes[4];
extern char igShaderInfo_fieldNames[4];
extern char igShaderInfo_fieldStorage[4];
extern char igShaderInfo_fieldOffsets[4];
extern char igShaderFactoryList_dependencies[8];
extern char igShaderFactory_dependencies[8];
extern void *lbl_805621F4;
extern void *igShaderProcessor_meta;
extern void *igShaderInfo_meta;
extern void *igShaderFunction_meta;
extern void *igShaderFactoryList_meta;
extern void *lbl_805648E4;
extern void *igShaderFactory_meta;
void *igShaderProcessor_getMeta();
void *igShaderProcessor_vtableRead();
void igShaderProcessor_arkRegister();
void igShaderProcessor_register();
void *igShaderProcessor_getMetaCall();
void *igShaderInfo_getMeta();
void *igShaderInfo_vtableRead();
void igShaderInfo_arkRegister();
void igShaderInfo_register();
void *igShaderInfo_getMetaCall();
void igShaderInfo_fieldInit();
void *fn_801B0D2C();
void *fn_801B0D4C();
void *igShaderFunction_getMeta();
void igShaderFunction_arkRegister();
void igShaderFunction_register();
void *igShaderFunction_getMetaCall();
void *fn_801B0E54();
void *igShaderFactoryList_getMeta();
void *igShaderFactoryList_vtableRead();
void igShaderFactoryList_arkRegister();
void igShaderFactoryList_register();
void *igShaderFactoryList_getMetaCall();
void *igShaderFactory_getMeta();
void *igShaderFactory_vtableRead();
void igShaderFactory_arkRegister();
void igShaderFactory_register();
void *igShaderFactory_getMetaCall();
}
struct UnknownGenObject801B097C_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot801B0AE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B0AE0(){igObject_construct(this);}
};
struct UnknownGenObject801B0AE0_0 : UnknownGenRoot801B0AE0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B0AE0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801B0AE0_1 : UnknownGenObject801B0AE0_0 {
 inline ~UnknownGenObject801B0AE0_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject801B0AE0 : UnknownGenObject801B0AE0_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject801B0AE0(){unknown00=igShaderInfo_vtable;}
};
struct UnknownGenObject801B0ECC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B10B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B10B4(){igObject_construct(this);}
};
struct UnknownGenObject801B10B4_0 : UnknownGenRoot801B10B4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B10B4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801B10B4 : UnknownGenObject801B10B4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801B10B4(){unknown00=igShaderFactory_vtable;}
};
extern "C" {
void *igShaderProcessor_create(void *object){
 igShaderProcessor_arkRegister();
 return meta_createInstance(igShaderProcessor_meta,object);
}
void *fn_801B0904(){
 if(!igShaderProcessor_meta) igShaderProcessor_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igShaderProcessor_meta;
}
void *igShaderProcessor_getMeta(){
 if(!igShaderProcessor_meta || !(reinterpret_cast<unsigned int *>(igShaderProcessor_meta)[0x24/4]&4)) igShaderProcessor_arkRegister();
 return igShaderProcessor_meta;
}
void *igShaderProcessor_vtableRead(){
 UnknownGenObject801B097C_0 object;
 igObject_construct(&object);
 object.unknown00=igShaderProcessor_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igShaderProcessor_arkRegister(){
 meta_registerNow((int)igShaderProcessor_register);
}
void igShaderProcessor_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igShaderProcessor_meta,(int)igObject_register,(int)fn_800237D0,(int)igShaderProcessor_getMetaCall,(int)igShaderProcessor_className,8,(int)igShaderProcessor_vtableRead,0,0,0);
}
void *igShaderProcessor_getMetaCall(){return igShaderProcessor_getMeta();}
void *igShaderInfo_create(void *object){
 igShaderInfo_arkRegister();
 return meta_createInstance(igShaderInfo_meta,object);
}
void *igShaderInfo_getMeta(){
 if(!igShaderInfo_meta || !(reinterpret_cast<unsigned int *>(igShaderInfo_meta)[0x24/4]&4)) igShaderInfo_arkRegister();
 return igShaderInfo_meta;
}
void *igShaderInfo_vtableRead(){
 UnknownGenObject801B0AE0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=igShaderInfo_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igShaderInfo_arkRegister(){
 meta_registerNow((int)igShaderInfo_register);
}
void igShaderInfo_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igShaderInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igShaderInfo_getMetaCall,(int)igShaderInfo_className,24,(int)igShaderInfo_vtableRead,(int)igShaderInfo_fieldInit,(int)fn_801B0D2C,(int)igShaderInfo_dependencies);
}
void *igShaderInfo_getMetaCall(){return igShaderInfo_getMeta();}
void igShaderInfo_fieldInit(){
 void *value0=igShaderInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igShaderInfo_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801B0E54();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,igShaderInfo_fieldNames,igShaderInfo_fieldStorage,igShaderInfo_fieldOffsets,value1);
 fn_80065D94((void *)fn_801B0D4C);
}
void *fn_801B0D2C(){return fn_80202550();}
void *fn_801B0D4C(){return fn_80202600();}
void *igShaderFunction_getMeta(){
 if(!igShaderFunction_meta || !(reinterpret_cast<unsigned int *>(igShaderFunction_meta)[0x24/4]&4)) igShaderFunction_arkRegister();
 return igShaderFunction_meta;
}
void igShaderFunction_arkRegister(){
 meta_registerNow((int)igShaderFunction_register);
}
void igShaderFunction_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igShaderFunction_meta,(int)igObject_register,(int)fn_800237D0,(int)igShaderFunction_getMetaCall,(int)igShaderFunction_className,8,0,0,0,0);
}
void *igShaderFunction_getMetaCall(){return igShaderFunction_getMeta();}
void *fn_801B0E54(){
 if(!igShaderFactoryList_meta) igShaderFactoryList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igShaderFactoryList_meta;
}
void *igShaderFactoryList_getMeta(){
 if(!igShaderFactoryList_meta || !(reinterpret_cast<unsigned int *>(igShaderFactoryList_meta)[0x24/4]&4)) igShaderFactoryList_arkRegister();
 return igShaderFactoryList_meta;
}
void *igShaderFactoryList_vtableRead(){
 UnknownGenObject801B0ECC_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B90FC;
 object.unknown00=igShaderFactoryList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igShaderFactoryList_arkRegister(){
 meta_registerNow((int)igShaderFactoryList_register);
}
void igShaderFactoryList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igShaderFactoryList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igShaderFactoryList_getMetaCall,(int)igShaderFactoryList_className,20,(int)igShaderFactoryList_vtableRead,0,0,(int)igShaderFactoryList_dependencies);
}
void *igShaderFactoryList_getMetaCall(){return igShaderFactoryList_getMeta();}
void *fn_801B0FF0(){
 char *data=lbl_804AAFB8;
 if(!lbl_805648E4) lbl_805648E4=fn_800635C8(data+0x1AD4,data+0x1AB4,data+0x1AC4,0x4);
 return lbl_805648E4;
}
void *fn_801B103C(){
 if(!igShaderFactory_meta) igShaderFactory_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igShaderFactory_meta;
}
void *igShaderFactory_getMeta(){
 if(!igShaderFactory_meta || !(reinterpret_cast<unsigned int *>(igShaderFactory_meta)[0x24/4]&4)) igShaderFactory_arkRegister();
 return igShaderFactory_meta;
}
void *igShaderFactory_vtableRead(){
 UnknownGenObject801B10B4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igShaderFactory_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igShaderFactory_arkRegister(){
 meta_registerNow((int)igShaderFactory_register);
}
void igShaderFactory_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igShaderFactory_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igShaderFactory_getMetaCall,(int)igShaderFactory_className,24,(int)igShaderFactory_vtableRead,(int)igShaderFactory_fieldInit,0,(int)igShaderFactory_dependencies);
}
void *igShaderFactory_getMetaCall(){return igShaderFactory_getMeta();}
}
#pragma pop
