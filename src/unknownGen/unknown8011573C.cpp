#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
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
extern char lbl_8055F2BC[8];
extern char lbl_8055F2C4[8];
extern char lbl_8055F2CC[8];
extern char lbl_8055F2D4[8];
extern char lbl_8055F2DC[8];
extern void *lbl_805621F4;
extern void *igActivableHolderModel_meta;
extern void *igAction_meta;
void *igActivableHolderModel_getMeta();
void *igActivableHolderModel_vtableRead();
void igActivableHolderModel_registerNow();
void igActivableHolderModel_register();
void *igActivableHolderModel_getMetaCall();
void igActivableHolderModel_fieldInit();
void *igAction_getMeta();
void igAction_registerNow();
void igAction_register();
void *igAction_getMetaCall();
}
struct UnknownGenRoot80115778 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80115778(){fn_8006665C(this);}
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
void *igActivableHolderModel_getMeta(){
 if(!igActivableHolderModel_meta || !(reinterpret_cast<unsigned int *>(igActivableHolderModel_meta)[0x24/4]&4)) igActivableHolderModel_registerNow();
 return igActivableHolderModel_meta;
}
void *igActivableHolderModel_vtableRead(){
 UnknownGenObject80115778 object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 object.unknown00=igGuiComponentModel_vtable;
 object.unknown00=igSimpleChildHolderModel_vtable;
 object.unknown24.value=0;
 object.unknown00=igActivableHolderModel_vtable;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igActivableHolderModel_registerNow(){
 meta_registerNow((int)igActivableHolderModel_register);
}
void igActivableHolderModel_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igActivableHolderModel_meta,(int)igSimpleChildHolderModel_register,(int)fn_8010DD30,(int)igActivableHolderModel_getMetaCall,(int)igActivableHolderModel_className,60,(int)igActivableHolderModel_vtableRead,(int)igActivableHolderModel_fieldInit,0,(int)lbl_8055F2BC);
}
void *igActivableHolderModel_getMetaCall(){return igActivableHolderModel_getMeta();}
void igActivableHolderModel_fieldInit(){
 void *value0=igActivableHolderModel_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F2C4,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80111CD4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055F2CC,lbl_8055F2D4,lbl_8055F2DC,value1);
}
void *fn_801159FC(){return igAction_meta;}
void *fn_80115A04(){
 if(!igAction_meta) igAction_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAction_meta;
}
void *igAction_getMeta(){
 if(!igAction_meta || !(reinterpret_cast<unsigned int *>(igAction_meta)[0x24/4]&4)) igAction_registerNow();
 return igAction_meta;
}
void igAction_registerNow(){
 meta_registerNow((int)igAction_register);
}
void igAction_register(){
 fn_8010CBD4();
 meta_registerClass(1,(int)&igAction_meta,(int)igObject_register,(int)fn_800237D0,(int)igAction_getMetaCall,(int)igAction_className,8,0,0,0,0);
}
void *igAction_getMetaCall(){return igAction_getMeta();}
}
#pragma pop
