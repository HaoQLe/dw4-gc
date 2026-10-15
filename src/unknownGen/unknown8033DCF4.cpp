#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWLoadIntf2DegiState_fieldInit();
void *beNDMWLoadIntf2DegiState_getMeta();
void beNDMWLoadIntf2DegiState_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char beNDMWLoadIntf2DegiState_className[];
extern char lbl_804E32C0[];
extern char beNDMWLoadIntf2DegiState_meta[];
void beNDMWLoadIntf2DegiState_register();
void *beNDMWLoadIntf2DegiState_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2DegiState_registerNow(){
 meta_registerNow((int)beNDMWLoadIntf2DegiState_register);
}
void beNDMWLoadIntf2DegiState_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2DegiState_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWLoadIntf2DegiState_getMetaCall,(int)beNDMWLoadIntf2DegiState_className,68,(int)beNDMWLoadIntf2DegiState_vtableRead,(int)beNDMWLoadIntf2DegiState_fieldInit,0,(int)lbl_804E32C0);
}
void *beNDMWLoadIntf2DegiState_getMetaCall(){return beNDMWLoadIntf2DegiState_getMeta();}
}
#pragma pop
