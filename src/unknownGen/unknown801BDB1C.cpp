#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void fn_801F5C1C(int);
void fn_801F5CE8();
void *fn_801F5D14();
void igObject_register();
void igProbe_fieldInit();
extern char igProbe_dependencies[];
extern char igProbe_vtable[];
extern char lbl_8056055C[8];
extern void *lbl_805621F4;
extern void *igProbe_meta;
void *igProbe_getMeta();
void *igProbe_vtableRead();
void igProbe_arkRegister();
void igProbe_register();
void *igProbe_getMetaCall();
}
struct UnknownGenRoot801BDC18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BDC18(){igObject_construct(this);}
};
struct UnknownGenObject801BDC18 : UnknownGenRoot801BDC18 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801BDC18(){unknown00=igProbe_vtable;}
};
extern "C" {
void fn_801BDB1C(){
 fn_801F5CE8();
 fn_80065DBC((int)fn_801F5C1C);
}
void *fn_801BDB48(){return fn_801F5D14();}
}
#pragma pop
