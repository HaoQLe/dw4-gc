#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWMdlPEBaseInfoWork_register();
void beNDMWMdlPlayerInfoWork_fieldInit();
void *beNDMWMdlPlayerInfoWork_getMeta();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80339040();
void *fn_80339484();
extern char lbl_804543A0[];
extern char lbl_804E27B0[];
extern char lbl_80536188[];
void beNDMWMdlPlayerInfoWork_register();
void *beNDMWMdlPlayerInfoWork_getMetaCall();
}
extern "C" {
void fn_803393C0(){
 fn_80066188((int)beNDMWMdlPlayerInfoWork_register);
}
void beNDMWMdlPlayerInfoWork_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536188,(int)beNDMWMdlPEBaseInfoWork_register,(int)fn_80339484,(int)beNDMWMdlPlayerInfoWork_getMetaCall,(int)lbl_804543A0,304,(int)fn_80339040,(int)beNDMWMdlPlayerInfoWork_fieldInit,0,(int)lbl_804E27B0);
}
void *beNDMWMdlPlayerInfoWork_getMetaCall(){return beNDMWMdlPlayerInfoWork_getMeta();}
}
#pragma pop
