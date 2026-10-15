#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igNonRefCountedObjectList_register();
void igObjectPool_register();
void igObject_register();
void igRenderPackage_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igRenderPackageList_className[];
extern char igRenderPackagePool_className[];
extern char igRenderPackage_dependencies[];
extern char igRenderPackage_className[];
extern char igRenderPackage_vtable[];
extern char igRenderPackagePool_vtable[];
extern char lbl_804B9650[];
extern char igRenderPackageList_vtable[];
extern char lbl_804B9718[];
extern char igObjectPool_vtable[];
extern char igRenderPackageList_dependencies[8];
extern char igRenderPackagePool_dependencies[8];
extern void *lbl_805621F4;
extern void *igObjectPool_meta;
extern void *igRenderPackageList_meta;
extern void *igRenderPackagePool_meta;
extern void *igRenderPackage_meta;
void *igRenderPackageList_getMeta();
void *igRenderPackageList_vtableRead();
void igRenderPackageList_arkRegister();
void igRenderPackageList_register();
void *igRenderPackageList_getMetaCall();
void *igRenderPackagePool_getMeta();
void *igRenderPackagePool_vtableRead();
void igRenderPackagePool_arkRegister();
void igRenderPackagePool_register();
void *igRenderPackagePool_getMetaCall();
void *fn_801AF130();
void *igRenderPackage_getMeta();
void *igRenderPackage_vtableRead();
void igRenderPackage_arkRegister();
void igRenderPackage_register();
void *igRenderPackage_getMetaCall();
}
struct UnknownGenObject801AEE64_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AF000_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot801AF1E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AF1E8(){igObject_construct(this);}
};
struct UnknownGenObject801AF1E8 : UnknownGenRoot801AF1E8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801AF1E8(){unknown00=igRenderPackage_vtable;}
};
extern "C" {
void *fn_801AEDEC(){
 if(!igRenderPackageList_meta) igRenderPackageList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRenderPackageList_meta;
}
}
#pragma pop
