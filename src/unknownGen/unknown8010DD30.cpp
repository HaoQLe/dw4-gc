#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void igScalerModel_fieldInit();
void igSimpleChildHolderModel_register();
extern char igScalerModel_className[];
extern char igModel_vtable[];
extern char igScalerModel_vtable[];
extern char igSimpleChildHolderModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern void *igSimpleChildHolderModel_meta;
extern void *igScalerModel_meta;
extern void *igGuiComponentAspect_meta;
void *igScalerModel_getMeta();
void *igScalerModel_vtableRead();
void igScalerModel_arkRegister();
void igScalerModel_register();
void *igScalerModel_getMetaCall();
void *fn_8010DD30();
}
struct UnknownGenRoot8010DB70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DB70(){igObject_construct(this);}
};
struct UnknownGenObject8010DB70_0 : UnknownGenRoot8010DB70 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DB70_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010DB70_1 : UnknownGenObject8010DB70_0 {
 inline ~UnknownGenObject8010DB70_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010DB70_2 : UnknownGenObject8010DB70_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010DB70_2(){unknown00=igSimpleChildHolderModel_vtable;}
};
struct UnknownGenObject8010DB70 : UnknownGenObject8010DB70_2 {
 char unknown28[24];
 inline ~UnknownGenObject8010DB70(){unknown00=igScalerModel_vtable;}
};
extern "C" {
void *fn_8010DD30(){return igSimpleChildHolderModel_meta;}
}
#pragma pop
