#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWLoadIntf2_fieldInit();
void *beNDMWLoadIntf2_getMeta();
void beNDMWLoadIntf2_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char lbl_80454BF8[];
extern char lbl_804E3554[];
extern char lbl_80536504[];
void beNDMWLoadIntf2_register();
void *beNDMWLoadIntf2_getMetaCall();
}
extern "C" {
void fn_8033E79C(){
 fn_80066188((int)beNDMWLoadIntf2_register);
}
void beNDMWLoadIntf2_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536504,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWLoadIntf2_getMetaCall,(int)lbl_80454BF8,48,(int)beNDMWLoadIntf2_vtableRead,(int)beNDMWLoadIntf2_fieldInit,0,(int)lbl_804E3554);
}
void *beNDMWLoadIntf2_getMetaCall(){return beNDMWLoadIntf2_getMeta();}
}
#pragma pop
