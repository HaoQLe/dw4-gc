#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void igUnsignedIntMetaField_arkRegister();
void *fn_80023E40();
void *fn_80026020();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_800755F8();
void *fn_8007568C();
void fn_80075A2C(void *);
void *igGamecubeThreadManager_getMeta();
void *igLongTimer_getMeta();
void igMetaField_register();
void igNamedObject_register();
void igObject_register();
void *igThread_fieldInit();
void *igUnsignedIntMetaField_getMeta();
void igUnsignedIntMetaField_register();
extern char igVirtualCFuncMetaField_className[];
extern char igUnsignedIntArrayMetaField_className[];
extern char igUnsignedCharMetaField_className[];
extern char igUnsignedCharArrayMetaField_className[];
extern char igThreadManager_dependencies[];
extern char igThreadManager_className[];
extern char lbl_804632A8[];
extern char lbl_804632B4[];
extern char igThread_className[];
extern char igUnsignedIntArrayMetaField_vtable[];
extern char igUnsignedCharMetaField_vtable[];
extern char igUnsignedCharArrayMetaField_vtable[];
extern char lbl_80471914[];
extern char lbl_80476E6C[];
extern char igUnsignedIntArrayMetaField_dependencies[8];
extern char igUnsignedIntArrayMetaField_fieldTypes[4];
extern char igUnsignedIntArrayMetaField_fieldNames[4];
extern char igUnsignedIntArrayMetaField_fieldStorage[4];
extern char igUnsignedIntArrayMetaField_fieldOffsets[4];
extern char igUnsignedCharMetaField_dependencies[8];
extern char igUnsignedCharArrayMetaField_dependencies[8];
extern char igUnsignedCharArrayMetaField_fieldTypes[4];
extern char igUnsignedCharArrayMetaField_fieldNames[4];
extern char igUnsignedCharArrayMetaField_fieldStorage[4];
extern char igUnsignedCharArrayMetaField_fieldOffsets[4];
extern char lbl_8055CF90[8];
extern char igThreadManager_fieldTypes[8];
extern char igThreadManager_fieldNames[8];
extern char igThreadManager_fieldStorage[8];
extern char igThreadManager_fieldOffsets[8];
extern char lbl_8055CFF0[8];
extern char lbl_8055CFF8[8];
extern char lbl_8055D000[6];
extern char lbl_8055D018[6];
extern char lbl_8055D030[8];
extern char lbl_8055D038[8];
extern char lbl_8055D040[5];
extern void *igUnsignedIntMetaField_meta;
extern void *lbl_805614C0;
extern void *igUnsignedIntArrayMetaField_meta;
extern void *lbl_805614C8;
extern void *igUnsignedCharMetaField_meta;
extern void *lbl_805614D4;
extern void *igUnsignedCharArrayMetaField_meta;
extern void *lbl_805614DC;
extern void *igTimer_meta;
extern void *igThreadManager_meta;
extern void *lbl_805614F4;
extern void *lbl_805614F8;
extern void *lbl_805614FC;
extern void *lbl_80561500;
extern void *igThread_meta;
extern void *igNamedObject_meta;
extern void *lbl_805621F4;
extern void *igObject_meta;
void *igUnsignedIntArrayMetaField_getMeta();
void *igUnsignedIntArrayMetaField_vtableRead();
void igUnsignedIntArrayMetaField_arkRegister();
void igUnsignedIntArrayMetaField_register();
void *igUnsignedIntArrayMetaField_getMetaCall();
void *igUnsignedIntArrayMetaField_parentMeta();
void igUnsignedIntArrayMetaField_fieldInit();
void *igUnsignedCharMetaField_getMeta();
void *igUnsignedCharMetaField_vtableRead();
void igUnsignedCharMetaField_arkRegister();
void igUnsignedCharMetaField_register();
void *igUnsignedCharMetaField_getMetaCall();
void *igUnsignedCharArrayMetaField_getMeta();
void *igUnsignedCharArrayMetaField_vtableRead();
void igUnsignedCharArrayMetaField_arkRegister();
void igUnsignedCharArrayMetaField_register();
void *igUnsignedCharArrayMetaField_getMetaCall();
void *igUnsignedCharArrayMetaField_parentMeta();
void igUnsignedCharArrayMetaField_fieldInit();
void *igTimer_getMeta();
void igTimer_arkRegister();
void igTimer_register();
void *igTimer_getMetaCall();
void *fn_800237D0();
void *fn_800237D8();
void *igLongTimer_getMetaCall();
void *igThreadManager_getMeta();
void igThreadManager_arkRegister();
void igThreadManager_register();
void *igThreadManager_getMetaCall();
void igThreadManager_fieldInit();
void *igGamecubeThreadManager_getMetaCall();
void *fn_80023A30();
void *fn_80023A50();
void *igThread_getMeta();
void igThread_arkRegister();
void igThread_register();
void *igThread_getMetaCall();
void *fn_80023CF4();
}
struct UnknownGenRoot80022E9C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80022E9C(){fn_80075A2C(this);}
};
struct UnknownGenObject80022E9C_0 : UnknownGenRoot80022E9C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80022E9C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80022E9C_1 : UnknownGenObject80022E9C_0 {
 inline ~UnknownGenObject80022E9C_1(){unknown00=lbl_80476E6C;}
};
struct UnknownGenObject80022E9C : UnknownGenObject80022E9C_1 {
 char unknown10[48];
 inline ~UnknownGenObject80022E9C(){unknown00=igUnsignedIntArrayMetaField_vtable;}
};
struct UnknownGenRoot80023180 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80023180(){fn_800638E0(this);}
};
struct UnknownGenObject80023180_0 : UnknownGenRoot80023180 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80023180_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80023180 : UnknownGenObject80023180_0 {
 char unknown10[48];
 inline ~UnknownGenObject80023180(){unknown00=igUnsignedCharMetaField_vtable;}
};
struct UnknownGenRoot800233FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800233FC(){fn_800638E0(this);}
};
struct UnknownGenObject800233FC_0 : UnknownGenRoot800233FC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800233FC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800233FC_1 : UnknownGenObject800233FC_0 {
 inline ~UnknownGenObject800233FC_1(){unknown00=igUnsignedCharMetaField_vtable;}
};
struct UnknownGenObject800233FC : UnknownGenObject800233FC_1 {
 char unknown10[48];
 inline ~UnknownGenObject800233FC(){unknown00=igUnsignedCharArrayMetaField_vtable;}
};
extern "C" {
void *fn_80023BC8(){
 if(!igThread_meta) igThread_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igThread_meta;
}
}
#pragma pop
