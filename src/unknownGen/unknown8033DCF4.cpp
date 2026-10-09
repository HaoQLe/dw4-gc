#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWLoadIntf2DegiState_fieldInit();
void *beNDMWLoadIntf2DegiState_getMeta();
void beNDMWLoadIntf2DegiState_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char lbl_80454B00[];
extern char lbl_804E32C0[];
extern char lbl_8053645C[];
void beNDMWLoadIntf2DegiState_register();
void *beNDMWLoadIntf2DegiState_getMetaCall();
}
extern "C" {
void fn_8033DCF4(){
 fn_80066188((int)beNDMWLoadIntf2DegiState_register);
}
void beNDMWLoadIntf2DegiState_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053645C,(int)igObject_register,(int)fn_800237D0,(int)beNDMWLoadIntf2DegiState_getMetaCall,(int)lbl_80454B00,68,(int)beNDMWLoadIntf2DegiState_vtableRead,(int)beNDMWLoadIntf2DegiState_fieldInit,0,(int)lbl_804E32C0);
}
void *beNDMWLoadIntf2DegiState_getMetaCall(){return beNDMWLoadIntf2DegiState_getMeta();}
}
#pragma pop
