#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWMdlPEBase_register();
void beNDMWMdlPlayer_fieldInit();
void *beNDMWMdlPlayer_getMeta();
void beNDMWMdlPlayer_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338E68();
extern char lbl_8045437C[];
extern char lbl_804E2770[];
extern char lbl_80536178[];
void beNDMWMdlPlayer_register();
void *beNDMWMdlPlayer_getMetaCall();
}
extern "C" {
void fn_80338DA4(){
 fn_80066188((int)beNDMWMdlPlayer_register);
}
void beNDMWMdlPlayer_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536178,(int)beNDMWMdlPEBase_register,(int)fn_80338E68,(int)beNDMWMdlPlayer_getMetaCall,(int)lbl_8045437C,56,(int)beNDMWMdlPlayer_vtableRead,(int)beNDMWMdlPlayer_fieldInit,0,(int)lbl_804E2770);
}
void *beNDMWMdlPlayer_getMetaCall(){return beNDMWMdlPlayer_getMeta();}
}
#pragma pop
