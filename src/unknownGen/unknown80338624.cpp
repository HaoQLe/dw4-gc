#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void beNDMWMdlPlayer2_fieldInit();
void *beNDMWMdlPlayer2_getMeta();
void beNDMWMdlPlayer2_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
extern char lbl_804542D8[];
extern char lbl_804E26E0[];
extern char lbl_80536158[];
void beNDMWMdlPlayer2_register();
void *beNDMWMdlPlayer2_getMetaCall();
}
extern "C" {
void fn_80338624(){
 fn_80066188((int)beNDMWMdlPlayer2_register);
}
void beNDMWMdlPlayer2_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536158,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlPlayer2_getMetaCall,(int)lbl_804542D8,48,(int)beNDMWMdlPlayer2_vtableRead,(int)beNDMWMdlPlayer2_fieldInit,0,(int)lbl_804E26E0);
}
void *beNDMWMdlPlayer2_getMetaCall(){return beNDMWMdlPlayer2_getMeta();}
}
#pragma pop
