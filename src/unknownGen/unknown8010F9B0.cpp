#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010F4FC();
void igEventReceiver_register();
void igGuiSystem_fieldInit();
extern char igGuiSystem_dependencies[];
extern char igGuiSystem_className[];
extern char igGuiSystem_vtable[];
extern char igEventReceiver_vtable[];
extern void *lbl_805621F4;
extern void *igGuiSystem_meta;
void *igGuiSystem_getMeta();
void *igGuiSystem_vtableRead();
void igGuiSystem_arkRegister();
void igGuiSystem_register();
void *igGuiSystem_getMetaCall();
}
struct UnknownGenRoot8010FA28 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FA28(){igObject_construct(this);}
};
struct UnknownGenObject8010FA28 : UnknownGenRoot8010FA28 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject8010FA28(){unknown00=igGuiSystem_vtable;}
};
extern "C" {
void *fn_8010F9B0(){
 if(!igGuiSystem_meta) igGuiSystem_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiSystem_meta;
}
}
#pragma pop
