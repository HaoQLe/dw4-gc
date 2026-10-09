#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beModelCtrlInfo_fieldInit();
void *beModelCtrlInfo_getMeta();
void beModelCtrlInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041EFA0[];
extern char lbl_80534DF0[];
void beModelCtrlInfo_register();
void *beModelCtrlInfo_getMetaCall();
}
extern "C" {
void fn_802C8BAC(){
 fn_80066188((int)beModelCtrlInfo_register);
}
void beModelCtrlInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DF0,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beModelCtrlInfo_getMetaCall,(int)lbl_8041EFA0,32,(int)beModelCtrlInfo_vtableRead,(int)beModelCtrlInfo_fieldInit,0,0);
}
void *beModelCtrlInfo_getMetaCall(){return beModelCtrlInfo_getMeta();}
}
#pragma pop
