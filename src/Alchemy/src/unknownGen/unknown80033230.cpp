#include <unknownGen.h>
#include <meta/igDependencyMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void fn_80033734(void *);
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igCompoundMetaField_register();
void igDataList_register();
extern char igDependencyList_className[];
extern char igDependencyMetaField_className[];
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char lbl_80474018[];
extern char igDependencyMetaField_vtable[];
extern char igDependencyList_vtable[];
extern char lbl_80475704[];
extern char lbl_8055D0A0[6];
extern char igDependencyMetaField_dependencies[8];
extern void *igDependencyList_meta;
extern char lbl_80561D30[4];
extern void *igDependencyMetaField_meta;
extern void *lbl_80561D38;
extern void *igCompoundMetaField_meta;
extern void *lbl_805621F4;
void *igDependencyList_getMeta();
void *igDependencyList_vtableRead();
void igDependencyList_arkRegister();
void igDependencyList_register();
void *igDependencyList_getMetaCall();
void fn_800333B8();
void *igDependencyMetaField_getMeta();
void *igDependencyMetaField_vtableRead();
void igDependencyMetaField_arkRegister();
void igDependencyMetaField_register();
void *igDependencyMetaField_getMetaCall();
void *fn_80033638();
void *fn_800336D8();
}
struct UnknownGenObject800332A8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800334B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800334B0(){fn_800638E0(this);}
};
struct UnknownGenObject800334B0_0 : UnknownGenRoot800334B0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800334B0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800334B0_1 : UnknownGenObject800334B0_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject800334B0_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject800334B0 : UnknownGenObject800334B0_1 {
 char unknown38[8];
 inline ~UnknownGenObject800334B0(){unknown00=igDependencyMetaField_vtable;}
};
extern "C" {
void *fn_80033230(){
 if(!igDependencyList_meta) igDependencyList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDependencyList_meta;
}
}
#pragma pop
