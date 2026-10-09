#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2MakeChr_fieldInit();
void *beNDMWLoadIntf2MakeChr_getMeta();
void beNDMWLoadIntf2MakeChr_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80454B54[];
extern char lbl_805364A0[];
void beNDMWLoadIntf2MakeChr_register();
void *beNDMWLoadIntf2MakeChr_getMetaCall();
}
extern "C" {
void fn_8033DFFC(){
 fn_80066188((int)beNDMWLoadIntf2MakeChr_register);
}
void beNDMWLoadIntf2MakeChr_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805364A0,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2MakeChr_getMetaCall,(int)lbl_80454B54,60,(int)beNDMWLoadIntf2MakeChr_vtableRead,(int)beNDMWLoadIntf2MakeChr_fieldInit,0,0);
}
void *beNDMWLoadIntf2MakeChr_getMetaCall(){return beNDMWLoadIntf2MakeChr_getMeta();}
}
#pragma pop
