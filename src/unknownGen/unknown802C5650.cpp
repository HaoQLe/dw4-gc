#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlSCSound_fieldInit();
void *beModelCtrlSCSound_getMeta();
void beModelCtrlSCSound_vtableRead();
void beModelCtrlSubComBase_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C570C();
extern char lbl_8041E970[];
extern char lbl_80534BF8[];
void beModelCtrlSCSound_register();
void *beModelCtrlSCSound_getMetaCall();
}
extern "C" {
void fn_802C5650(){
 fn_80066188((int)beModelCtrlSCSound_register);
}
void beModelCtrlSCSound_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BF8,(int)beModelCtrlSubComBase_register,(int)fn_802C570C,(int)beModelCtrlSCSound_getMetaCall,(int)lbl_8041E970,32,(int)beModelCtrlSCSound_vtableRead,(int)beModelCtrlSCSound_fieldInit,0,0);
}
void *beModelCtrlSCSound_getMetaCall(){return beModelCtrlSCSound_getMeta();}
}
#pragma pop
