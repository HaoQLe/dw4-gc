#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igGeometry_arkRegister();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igGeometryList_className[];
extern char igGeometryList_vtable[];
extern char lbl_804B7370[];
extern char igGeometryList_dependencies[8];
extern void *lbl_805621F4;
extern void *igGeometryList_meta;
extern void *igGeometry_meta;
void *igGeometryList_getMeta();
void *igGeometryList_vtableRead();
void igGeometryList_arkRegister();
void igGeometryList_register();
void *igGeometryList_getMetaCall();
}
struct UnknownGenObject801BFFB0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801BFF38(){
 if(!igGeometryList_meta) igGeometryList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGeometryList_meta;
}
}
#pragma pop
