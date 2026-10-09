#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWMcUtilCtrl_fieldInit();
void *beNDMWMcUtilCtrl_getMeta();
void beNDMWMcUtilCtrl_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char lbl_80454CE0[];
extern char lbl_804E36BC[];
extern char lbl_80536560[];
void beNDMWMcUtilCtrl_register();
void *beNDMWMcUtilCtrl_getMetaCall();
}
extern "C" {
void fn_8033F37C(){
 fn_80066188((int)beNDMWMcUtilCtrl_register);
}
void beNDMWMcUtilCtrl_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536560,(int)igObject_register,(int)fn_800237D0,(int)beNDMWMcUtilCtrl_getMetaCall,(int)lbl_80454CE0,64,(int)beNDMWMcUtilCtrl_vtableRead,(int)beNDMWMcUtilCtrl_fieldInit,0,(int)lbl_804E36BC);
}
void *beNDMWMcUtilCtrl_getMetaCall(){return beNDMWMcUtilCtrl_getMeta();}
}
#pragma pop
