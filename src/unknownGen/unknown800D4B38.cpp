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
extern char igDecalExt_fieldTypes[4];
extern char igDecalExt_fieldNames[4];
extern char igDecalExt_fieldStorage[4];
extern char igDecalExt_fieldOffsets[4];
extern char igCustomVectorStateList_dependencies[8];
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
void igGenericCapabilityManager_arkRegister();
void igGenericCapabilityManager_register();
void *igGenericCapabilityManager_getMetaCall();
void *igExternalImageEntry_getMeta();
void *igExternalImageEntry_vtableRead();
void igExternalImageEntry_arkRegister();
void igExternalImageEntry_register();
void *igExternalImageEntry_getMetaCall();
void *igExternalImageEntry_parentMeta();
void *igDisableExt_getMeta();
void igDisableExt_arkRegister();
void igDisableExt_register();
void *igDisableExt_getMetaCall();
void *igDecalExt_getMeta();
void igDecalExt_arkRegister();
void igDecalExt_register();
void *igDecalExt_getMetaCall();
void igDecalExt_fieldInit();
void *igCustomVectorStateList_getMeta();
void *igCustomVectorStateList_vtableRead();
void igCustomVectorStateList_arkRegister();
void igCustomVectorStateList_register();
void *igCustomVectorStateList_getMetaCall();
void *igCustomVectorState_getMeta();
void *igCustomVectorState_vtableRead();
void igCustomVectorState_arkRegister();
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
void *igExternalImageEntry_parentMeta(){return igExternalDirEntry_meta;}
void *fn_800D4B40(){
 if(!igDisableExt_meta) igDisableExt_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDisableExt_meta;
}
}
#pragma pop
