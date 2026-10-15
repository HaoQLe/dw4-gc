#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010DD30();
void *fn_80111CD4();
void igObject_register();
void igSimpleChildHolderModel_register();
extern char igActivableHolderModel_className[];
extern char igAction_className[];
extern char igModel_vtable[];
extern char igActivableHolderModel_vtable[];
extern char igSimpleChildHolderModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igActivableHolderModel_dependencies[8];
extern char igActivableHolderModel_fieldTypes[8];
extern char igActivableHolderModel_fieldNames[8];
extern char igActivableHolderModel_fieldStorage[8];
extern char igActivableHolderModel_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igActivableHolderModel_meta;
extern void *igAction_meta;
void *igActivableHolderModel_getMeta();
void *igActivableHolderModel_vtableRead();
void igActivableHolderModel_arkRegister();
void igActivableHolderModel_register();
void *igActivableHolderModel_getMetaCall();
void igActivableHolderModel_fieldInit();
void *igAction_getMeta();
void igAction_arkRegister();
void igAction_register();
void *igAction_getMetaCall();
}
struct UnknownGenRoot80115778 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80115778(){igObject_construct(this);}
};
struct UnknownGenObject80115778_0 : UnknownGenRoot80115778 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80115778_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject80115778_1 : UnknownGenObject80115778_0 {
 inline ~UnknownGenObject80115778_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject80115778_2 : UnknownGenObject80115778_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80115778_2(){unknown00=igSimpleChildHolderModel_vtable;}
};
struct UnknownGenObject80115778 : UnknownGenObject80115778_2 {
 char unknown28[12];
 UnknownGenRefMember unknown34;
 char unknown38[16];
 inline ~UnknownGenObject80115778(){unknown00=igActivableHolderModel_vtable;}
};
extern "C" {
void *fn_801159FC(){return igAction_meta;}
void *fn_80115A04(){
 if(!igAction_meta) igAction_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAction_meta;
}
}
#pragma pop
