#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core15igStringObjListFv();
void fn_80021B94();
void *fn_800256C0();
void *meta_newMetaObject(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDataList_register();
extern char igStringRefList_className[];
extern char igStringRefList_vtable[];
extern char igDataList_vtable[];
extern char igStringObjList_vtable[];
extern char lbl_80476AF0[];
extern char lbl_80476B54[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_8055D0A0[6];
extern void *igStringRefList_meta;
extern char lbl_80561590[4];
extern void *igStringObjList_meta;
extern void *igDataList_meta;
extern void *lbl_805621F4;
void *igStringRefList_getMeta();
void *igStringRefList_vtableRead();
void igStringRefList_arkRegister();
void igStringRefList_register();
void *igStringRefList_getMetaCall();
void *fn_80024D1C();
void fn_80024D24();
}
struct UnknownGenObject80024C0C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80024E90_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80024B94(){
 if(!igStringRefList_meta) igStringRefList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStringRefList_meta;
}
}
#pragma pop
