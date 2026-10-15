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
void *fn_801B0D2C(){return fn_80202550();}
void *fn_801B0D4C(){return fn_80202600();}
}
#pragma pop
