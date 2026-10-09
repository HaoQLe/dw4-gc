#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWSaveIntfComMdlCtrl_fieldInit();
void *beNDMWSaveIntfComMdlCtrl_getMeta();
void beNDMWSaveIntfComMdlCtrl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80453E90[];
extern char lbl_804E214C[];
extern char lbl_80535FE0[];
void beNDMWSaveIntfComMdlCtrl_register();
void *beNDMWSaveIntfComMdlCtrl_getMetaCall();
}
extern "C" {
void fn_80334F74(){
 fn_80066188((int)beNDMWSaveIntfComMdlCtrl_register);
}
void beNDMWSaveIntfComMdlCtrl_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FE0,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWSaveIntfComMdlCtrl_getMetaCall,(int)lbl_80453E90,40,(int)beNDMWSaveIntfComMdlCtrl_vtableRead,(int)beNDMWSaveIntfComMdlCtrl_fieldInit,0,(int)lbl_804E214C);
}
void *beNDMWSaveIntfComMdlCtrl_getMetaCall(){return beNDMWSaveIntfComMdlCtrl_getMeta();}
}
#pragma pop
