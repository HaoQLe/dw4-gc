#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void *fn_80028F84();
void *fn_80029A5C();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igNamedObject_register();
void igObjectList_register();
void igObject_register();
extern char igVirtualCFuncMetaField_className[];
extern char igPluginRepositoryList_className[];
extern char igPluginRepository_className[];
extern char igObjectStringMap_dependencies[];
extern char igObjectStringMap_className[];
extern char igDataList_vtable[];
extern char igObjectStringMap_vtable[];
extern char igPluginRepository_vtable[];
extern char igNamedObject_vtable[];
extern char igPluginRepositoryList_vtable[];
extern char lbl_804765CC[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igPluginRepositoryList_dependencies[8];
extern char igPluginRepository_fieldTypes[8];
extern char igPluginRepository_fieldNames[8];
extern char igPluginRepository_fieldStorage[8];
extern char igPluginRepository_fieldOffsets[8];
extern char igObjectStringMap_fieldTypes[8];
extern char igObjectStringMap_fieldNames[8];
extern char igObjectStringMap_fieldStorage[8];
extern char igObjectStringMap_fieldOffsets[8];
extern void *igPluginRepositoryList_meta;
extern void *lbl_805616C8;
extern void *igPluginRepository_meta;
extern void *igObjectStringMap_meta;
extern void *igInfo_meta;
extern void *lbl_805621F4;
void *igPluginRepositoryList_getMeta();
void *igPluginRepositoryList_vtableRead();
void igPluginRepositoryList_arkRegister();
void igPluginRepositoryList_register();
void *igPluginRepositoryList_getMetaCall();
void *fn_80028214();
void *igPluginRepository_getMeta();
void *igPluginRepository_vtableRead();
void igPluginRepository_arkRegister();
void igPluginRepository_register();
void *igPluginRepository_getMetaCall();
void igPluginRepository_fieldInit();
void *igObjectStringMap_getMeta();
void *igObjectStringMap_vtableRead();
void igObjectStringMap_arkRegister();
void igObjectStringMap_register();
void *igObjectStringMap_getMetaCall();
void igObjectStringMap_fieldInit();
}
struct UnknownGenObject800280F0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800282D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800282D4(){igObject_construct(this);}
};
struct UnknownGenObject800282D4_0 : UnknownGenRoot800282D4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800282D4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800282D4 : UnknownGenObject800282D4_0 {
 UnknownGenString unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800282D4(){unknown00=igPluginRepository_vtable;}
};
struct UnknownGenRoot8002856C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002856C(){igObject_construct(this);}
};
struct UnknownGenObject8002856C : UnknownGenRoot8002856C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8002856C(){unknown00=igObjectStringMap_vtable;}
};
extern "C" {
void *fn_80028214(){
 char *data=igVirtualCFuncMetaField_className;
 if(!lbl_805616C8) lbl_805616C8=fn_800635C8(data+0xF38,data+0xF20,data+0xF2C,0x3);
 return lbl_805616C8;
}
}
#pragma pop
