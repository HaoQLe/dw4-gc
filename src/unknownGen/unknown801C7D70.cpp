#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void fn_801C7E6C(void *,short);
void igAttrStackManager_arkRegister();
void igNonRefCountedObjectList_register();
extern char igDataList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNonRefCountedAttrStackManagerList_className[];
extern char igAttrStackManager_vtable[];
extern char igNonRefCountedAttrStackManagerList_vtable[];
extern char lbl_804B6BFC[];
extern char igNonRefCountedAttrStackManagerList_dependencies[8];
extern void *lbl_805621F4;
extern void *igNonRefCountedAttrStackManagerList_meta;
extern void *igAttrStackManager_meta;
void *igNonRefCountedAttrStackManagerList_getMeta();
void *igNonRefCountedAttrStackManagerList_vtableRead();
void igNonRefCountedAttrStackManagerList_arkRegister();
void igNonRefCountedAttrStackManagerList_register();
void *igNonRefCountedAttrStackManagerList_getMetaCall();
}
struct UnknownGenObject801C7C4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801C7DE8 {
 void *unknown00;
 char unknown04[12];
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 char unknown30[4];
 int unknown34;
 int unknown38;
 char unknown3C[4];
 int unknown40;
 char unknown44[12];
};
extern "C" {
void *fn_801C7D70(){
 if(!igAttrStackManager_meta) igAttrStackManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrStackManager_meta;
}
}
#pragma pop
