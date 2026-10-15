#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_80035C70();
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void igBillboardProcessor_fieldInit();
void igShaderProcessor_register();
void igUnsignedIntList_register();
extern char igDataList_vtable[];
extern char igUnsignedIntList_vtable[];
extern char lbl_80474900[];
extern char lbl_804AAFB8[];
extern char igBitMask_className[];
extern char igBillboardProcessor_className[];
extern char igShaderProcessor_vtable[];
extern char igBillboardProcessor_vtable[];
extern char igBitMask_vtable[];
extern char igBitMask_fieldTypes[4];
extern char igBitMask_fieldNames[4];
extern char igBitMask_fieldStorage[4];
extern char igBitMask_fieldOffsets[4];
extern char igBillboardProcessor_dependencies[8];
extern void *lbl_805621F4;
extern void *igBitMask_meta;
extern void *lbl_805652D4;
extern void *igBillboardProcessor_meta;
void *igBitMask_getMeta();
void *igBitMask_vtableRead();
void igBitMask_arkRegister();
void igBitMask_register();
void *igBitMask_getMetaCall();
void igBitMask_fieldInit();
void *igBillboardProcessor_getMeta();
void *igBillboardProcessor_vtableRead();
void igBillboardProcessor_arkRegister();
void igBillboardProcessor_register();
void *igBillboardProcessor_getMetaCall();
}
struct UnknownGenObject801C73BC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C75C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C75C8(){igObject_construct(this);}
};
struct UnknownGenObject801C75C8 : UnknownGenRoot801C75C8 {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801C75C8(){unknown00=igBillboardProcessor_vtable;}
};
extern "C" {
void *fn_801C7344(){
 if(!igBitMask_meta) igBitMask_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBitMask_meta;
}
}
#pragma pop
