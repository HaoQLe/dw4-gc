#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beMatCtrlInfo_fieldInit();
void *beMatCtrlInfo_getMeta();
void beMatCtrlInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041F934[];
extern char lbl_804D168C[];
extern char lbl_80535094[];
void beMatCtrlInfo_register();
void *beMatCtrlInfo_getMetaCall();
}
extern "C" {
void fn_802D0690(){
 fn_80066188((int)beMatCtrlInfo_register);
}
void beMatCtrlInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535094,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beMatCtrlInfo_getMetaCall,(int)lbl_8041F934,40,(int)beMatCtrlInfo_vtableRead,(int)beMatCtrlInfo_fieldInit,0,(int)lbl_804D168C);
}
void *beMatCtrlInfo_getMetaCall(){return beMatCtrlInfo_getMeta();}
}
#pragma pop
