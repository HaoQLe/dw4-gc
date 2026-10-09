#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoWork_register();
void beNDMWMdlPEBaseInfoWork_fieldInit();
void *beNDMWMdlPEBaseInfoWork_getMeta();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338A20();
void fn_8033979C();
extern char lbl_804545BC[];
extern char lbl_804E2960[];
extern char lbl_805361BC[];
void beNDMWMdlPEBaseInfoWork_register();
void *beNDMWMdlPEBaseInfoWork_getMetaCall();
}
extern "C" {
void fn_803397EC(){
 fn_80066188((int)beNDMWMdlPEBaseInfoWork_register);
}
void beNDMWMdlPEBaseInfoWork_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361BC,(int)beModelCtrlInfoWork_register,(int)fn_80338A20,(int)beNDMWMdlPEBaseInfoWork_getMetaCall,(int)lbl_804545BC,276,(int)fn_8033979C,(int)beNDMWMdlPEBaseInfoWork_fieldInit,0,(int)lbl_804E2960);
}
void *beNDMWMdlPEBaseInfoWork_getMetaCall(){return beNDMWMdlPEBaseInfoWork_getMeta();}
}
#pragma pop
