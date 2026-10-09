#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2ComMdlCtrl_fieldInit();
void *beNDMWLoadIntf2ComMdlCtrl_getMeta();
void beNDMWLoadIntf2ComMdlCtrl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80455038[];
extern char lbl_804E3BA8[];
extern char lbl_805366BC[];
void beNDMWLoadIntf2ComMdlCtrl_register();
void *beNDMWLoadIntf2ComMdlCtrl_getMetaCall();
}
extern "C" {
void fn_80341298(){
 fn_80066188((int)beNDMWLoadIntf2ComMdlCtrl_register);
}
void beNDMWLoadIntf2ComMdlCtrl_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805366BC,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2ComMdlCtrl_getMetaCall,(int)lbl_80455038,40,(int)beNDMWLoadIntf2ComMdlCtrl_vtableRead,(int)beNDMWLoadIntf2ComMdlCtrl_fieldInit,0,(int)lbl_804E3BA8);
}
void *beNDMWLoadIntf2ComMdlCtrl_getMetaCall(){return beNDMWLoadIntf2ComMdlCtrl_getMeta();}
}
#pragma pop
