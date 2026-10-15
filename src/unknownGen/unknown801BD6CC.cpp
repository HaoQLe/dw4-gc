#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void fn_801BDB1C();
void igIntersectTraversal_fieldInit();
void igTraversal_register();
extern char igIntersectTraversal_dependencies[];
extern char igIntersectTraversal_className[];
extern char igTraversal_vtable[];
extern char igIntersectTraversal_vtable[];
extern void *lbl_805621F4;
extern void *igTraversal_meta;
extern void *igIntersectTraversal_meta;
void *igIntersectTraversal_getMeta();
void *igIntersectTraversal_vtableRead();
void igIntersectTraversal_arkRegister();
void igIntersectTraversal_register();
void *igIntersectTraversal_getMetaCall();
void *fn_801BD9C8();
}
struct UnknownGenRoot801BD744 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BD744(){igObject_construct(this);}
};
struct UnknownGenObject801BD744_0 : UnknownGenRoot801BD744 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BD744_0(){unknown00=igTraversal_vtable;}
};
struct UnknownGenObject801BD744 : UnknownGenObject801BD744_0 {
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[8];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject801BD744(){unknown00=igIntersectTraversal_vtable;}
};
extern "C" {
void *fn_801BD6CC(){
 if(!igIntersectTraversal_meta) igIntersectTraversal_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igIntersectTraversal_meta;
}
}
#pragma pop
