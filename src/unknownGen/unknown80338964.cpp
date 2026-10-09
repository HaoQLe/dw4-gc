#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoWork_register();
void beNDMWMdlPlayer2InfoWork_fieldInit();
void *beNDMWMdlPlayer2InfoWork_getMeta();
void beNDMWMdlPlayer2InfoWork_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338A20();
extern char lbl_804542EC[];
extern char lbl_80536160[];
void beNDMWMdlPlayer2InfoWork_register();
void *beNDMWMdlPlayer2InfoWork_getMetaCall();
}
extern "C" {
void fn_80338964(){
 fn_80066188((int)beNDMWMdlPlayer2InfoWork_register);
}
void beNDMWMdlPlayer2InfoWork_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536160,(int)beModelCtrlInfoWork_register,(int)fn_80338A20,(int)beNDMWMdlPlayer2InfoWork_getMetaCall,(int)lbl_804542EC,252,(int)beNDMWMdlPlayer2InfoWork_vtableRead,(int)beNDMWMdlPlayer2InfoWork_fieldInit,0,0);
}
void *beNDMWMdlPlayer2InfoWork_getMetaCall(){return beNDMWMdlPlayer2InfoWork_getMeta();}
}
#pragma pop
