#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void beNDMWMdlItem_fieldInit();
void *beNDMWMdlItem_getMeta();
void beNDMWMdlItem_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
extern char lbl_804546A8[];
extern char lbl_804E2A10[];
extern char lbl_805361F8[];
void beNDMWMdlItem_register();
void *beNDMWMdlItem_getMetaCall();
}
extern "C" {
void fn_8033A71C(){
 fn_80066188((int)beNDMWMdlItem_register);
}
void beNDMWMdlItem_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361F8,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlItem_getMetaCall,(int)lbl_804546A8,52,(int)beNDMWMdlItem_vtableRead,(int)beNDMWMdlItem_fieldInit,0,(int)lbl_804E2A10);
}
void *beNDMWMdlItem_getMetaCall(){return beNDMWMdlItem_getMeta();}
}
#pragma pop
