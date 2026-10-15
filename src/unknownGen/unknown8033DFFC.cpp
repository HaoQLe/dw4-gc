#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2MakeChr_fieldInit();
void *beNDMWLoadIntf2MakeChr_getMeta();
void beNDMWLoadIntf2MakeChr_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2MakeChr_className[];
extern char beNDMWLoadIntf2MakeChr_meta[];
void beNDMWLoadIntf2MakeChr_register();
void *beNDMWLoadIntf2MakeChr_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2MakeChr_arkRegister(){
 meta_registerNow((int)beNDMWLoadIntf2MakeChr_register);
}
void beNDMWLoadIntf2MakeChr_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2MakeChr_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2MakeChr_getMetaCall,(int)beNDMWLoadIntf2MakeChr_className,60,(int)beNDMWLoadIntf2MakeChr_vtableRead,(int)beNDMWLoadIntf2MakeChr_fieldInit,0,0);
}
void *beNDMWLoadIntf2MakeChr_getMetaCall(){return beNDMWLoadIntf2MakeChr_getMeta();}
}
#pragma pop
