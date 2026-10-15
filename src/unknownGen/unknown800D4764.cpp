#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *fn_800CE528();
void *fn_800D031C();
void igCapabilityManager_register();
void igContextExt_register();
void igCustomState_register();
void igCustomVectorState_fieldInit();
void igExternalDirEntry_register();
void igObjectList_register();
extern char igExternalDirEntry_vtable[];
extern char igDirEntry_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igGenericCapabilityManager_className[];
extern char igExternalImageEntry_className[];
extern char igDisableExt_className[];
extern char igDecalExt_className[];
extern char igCustomVectorStateList_className[];
extern char igCustomVectorState_className[];
extern char igGenericCapabilityManager_vtable[];
extern char igExternalImageEntry_vtable[];
extern char lbl_80492AD0[];
extern char igCustomVectorState_vtable[];
extern char lbl_80493290[];
extern char igCustomVectorStateList_vtable[];
extern char lbl_80493354[];
extern char lbl_8055ECB8[4];
extern char lbl_8055ECBC[4];
extern char lbl_8055ECC0[4];
extern char lbl_8055ECC4[4];
extern char lbl_8055ECC8[8];
extern void *igExternalDirEntry_meta;
extern void *lbl_805621F4;
extern void *igCustomState_meta;
extern void *igGenericCapabilityManager_meta;
extern void *igExternalImageEntry_meta;
extern void *igDisableExt_meta;
extern void *igDecalExt_meta;
extern void *igCustomVectorStateList_meta;
extern void *igCustomVectorState_meta;
void *igGenericCapabilityManager_getMeta();
void *igGenericCapabilityManager_vtableRead();
void igGenericCapabilityManager_registerNow();
void igGenericCapabilityManager_register();
void *igGenericCapabilityManager_getMetaCall();
void *igExternalImageEntry_getMeta();
void *igExternalImageEntry_vtableRead();
void igExternalImageEntry_registerNow();
void igExternalImageEntry_register();
void *igExternalImageEntry_getMetaCall();
void *igExternalImageEntry_parentMeta();
void *igDisableExt_getMeta();
void igDisableExt_registerNow();
void igDisableExt_register();
void *igDisableExt_getMetaCall();
void *igDecalExt_getMeta();
void igDecalExt_registerNow();
void igDecalExt_register();
void *igDecalExt_getMetaCall();
void igDecalExt_fieldInit();
void *igCustomVectorStateList_getMeta();
void *igCustomVectorStateList_vtableRead();
void igCustomVectorStateList_registerNow();
void igCustomVectorStateList_register();
void *igCustomVectorStateList_getMetaCall();
void *igCustomVectorState_getMeta();
void *igCustomVectorState_vtableRead();
void igCustomVectorState_registerNow();
void igCustomVectorState_register();
void *igCustomVectorState_getMetaCall();
void *fn_800D5128();
}
struct UnknownGenObject800D47D8_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot800D4910 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D4910(){igObject_construct(this);}
};
struct UnknownGenObject800D4910_0 : UnknownGenRoot800D4910 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D4910_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D4910_1 : UnknownGenObject800D4910_0 {
 inline ~UnknownGenObject800D4910_1(){unknown00=igDirEntry_vtable;}
};
struct UnknownGenObject800D4910_2 : UnknownGenObject800D4910_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 char unknown24[4];
 UnknownGenString unknown28;
 inline ~UnknownGenObject800D4910_2(){unknown00=igExternalDirEntry_vtable;}
};
struct UnknownGenObject800D4910 : UnknownGenObject800D4910_2 {
 char unknown2C[12];
 inline ~UnknownGenObject800D4910(){unknown00=igExternalImageEntry_vtable;}
};
struct UnknownGenObject800D4E30_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D4FC8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D4FC8(){igObject_construct(this);}
};
struct UnknownGenObject800D4FC8_0 : UnknownGenRoot800D4FC8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D4FC8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D4FC8_1 : UnknownGenObject800D4FC8_0 {
 inline ~UnknownGenObject800D4FC8_1(){unknown00=lbl_80493290;}
};
struct UnknownGenObject800D4FC8 : UnknownGenObject800D4FC8_1 {
 char unknown0C[20];
 inline ~UnknownGenObject800D4FC8(){unknown00=igCustomVectorState_vtable;}
};
extern "C" {
void *igGenericCapabilityManager_create(void *object){
 igGenericCapabilityManager_registerNow();
 return meta_createInstance(igGenericCapabilityManager_meta,object);
}
void *igGenericCapabilityManager_getMeta(){
 if(!igGenericCapabilityManager_meta || !(reinterpret_cast<unsigned int *>(igGenericCapabilityManager_meta)[0x24/4]&4)) igGenericCapabilityManager_registerNow();
 return igGenericCapabilityManager_meta;
}
void *igGenericCapabilityManager_vtableRead(){
 UnknownGenObject800D47D8_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80492AD0;
 object.unknown00=igGenericCapabilityManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGenericCapabilityManager_registerNow(){
 meta_registerNow((int)igGenericCapabilityManager_register);
}
void igGenericCapabilityManager_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGenericCapabilityManager_meta,(int)igCapabilityManager_register,(int)fn_800CE528,(int)igGenericCapabilityManager_getMetaCall,(int)igGenericCapabilityManager_className,8,(int)igGenericCapabilityManager_vtableRead,0,0,0);
}
void *igGenericCapabilityManager_getMetaCall(){return igGenericCapabilityManager_getMeta();}
void *igExternalImageEntry_getMeta(){
 if(!igExternalImageEntry_meta || !(reinterpret_cast<unsigned int *>(igExternalImageEntry_meta)[0x24/4]&4)) igExternalImageEntry_registerNow();
 return igExternalImageEntry_meta;
}
void *igExternalImageEntry_vtableRead(){
 UnknownGenObject800D4910 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igDirEntry_vtable;
 object.unknown00=igExternalDirEntry_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown28.value=0;
 object.unknown00=igExternalImageEntry_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igExternalImageEntry_registerNow(){
 meta_registerNow((int)igExternalImageEntry_register);
}
void igExternalImageEntry_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igExternalImageEntry_meta,(int)igExternalDirEntry_register,(int)igExternalImageEntry_parentMeta,(int)igExternalImageEntry_getMetaCall,(int)igExternalImageEntry_className,44,(int)igExternalImageEntry_vtableRead,0,0,0);
}
void *igExternalImageEntry_getMetaCall(){return igExternalImageEntry_getMeta();}
void *igExternalImageEntry_parentMeta(){return igExternalDirEntry_meta;}
void *fn_800D4B40(){
 if(!igDisableExt_meta) igDisableExt_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDisableExt_meta;
}
void *igDisableExt_getMeta(){
 if(!igDisableExt_meta || !(reinterpret_cast<unsigned int *>(igDisableExt_meta)[0x24/4]&4)) igDisableExt_registerNow();
 return igDisableExt_meta;
}
void igDisableExt_registerNow(){
 meta_registerNow((int)igDisableExt_register);
}
void igDisableExt_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igDisableExt_meta,(int)igContextExt_register,(int)fn_800D031C,(int)igDisableExt_getMetaCall,(int)igDisableExt_className,20,0,0,0,0);
}
void *igDisableExt_getMetaCall(){return igDisableExt_getMeta();}
void *igDecalExt_getMeta(){
 if(!igDecalExt_meta || !(reinterpret_cast<unsigned int *>(igDecalExt_meta)[0x24/4]&4)) igDecalExt_registerNow();
 return igDecalExt_meta;
}
void igDecalExt_registerNow(){
 meta_registerNow((int)igDecalExt_register);
}
void igDecalExt_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igDecalExt_meta,(int)igContextExt_register,(int)fn_800D031C,(int)igDecalExt_getMetaCall,(int)igDecalExt_className,24,0,(int)igDecalExt_fieldInit,0,0);
}
void *igDecalExt_getMetaCall(){return igDecalExt_getMeta();}
void igDecalExt_fieldInit(){
 void *value0=igDecalExt_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055ECB8,1);
 meta_setupFields(value0,lbl_8055ECBC,lbl_8055ECC0,lbl_8055ECC4,value1);
}
void *igCustomVectorStateList_create(void *object){
 igCustomVectorStateList_registerNow();
 return meta_createInstance(igCustomVectorStateList_meta,object);
}
void *igCustomVectorStateList_getMeta(){
 if(!igCustomVectorStateList_meta || !(reinterpret_cast<unsigned int *>(igCustomVectorStateList_meta)[0x24/4]&4)) igCustomVectorStateList_registerNow();
 return igCustomVectorStateList_meta;
}
void *igCustomVectorStateList_vtableRead(){
 UnknownGenObject800D4E30_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80493354;
 object.unknown00=igCustomVectorStateList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCustomVectorStateList_registerNow(){
 meta_registerNow((int)igCustomVectorStateList_register);
}
void igCustomVectorStateList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igCustomVectorStateList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igCustomVectorStateList_getMetaCall,(int)igCustomVectorStateList_className,20,(int)igCustomVectorStateList_vtableRead,0,0,(int)lbl_8055ECC8);
}
void *igCustomVectorStateList_getMetaCall(){return igCustomVectorStateList_getMeta();}
void *igCustomVectorState_create(void *object){
 igCustomVectorState_registerNow();
 return meta_createInstance(igCustomVectorState_meta,object);
}
void *igCustomVectorState_getMeta(){
 if(!igCustomVectorState_meta || !(reinterpret_cast<unsigned int *>(igCustomVectorState_meta)[0x24/4]&4)) igCustomVectorState_registerNow();
 return igCustomVectorState_meta;
}
void *igCustomVectorState_vtableRead(){
 UnknownGenObject800D4FC8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_80493290;
 object.unknown00=igCustomVectorState_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCustomVectorState_registerNow(){
 meta_registerNow((int)igCustomVectorState_register);
}
void igCustomVectorState_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igCustomVectorState_meta,(int)igCustomState_register,(int)fn_800D5128,(int)igCustomVectorState_getMetaCall,(int)igCustomVectorState_className,28,(int)igCustomVectorState_vtableRead,(int)igCustomVectorState_fieldInit,0,0);
}
void *igCustomVectorState_getMetaCall(){return igCustomVectorState_getMeta();}
void *fn_800D5128(){return igCustomState_meta;}
}
#pragma pop
