#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beSwitchCtrlInfo_fieldInit();
void *beSwitchCtrlInfo_getMeta();
void beSwitchCtrlInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041D5B4[];
extern char lbl_804CF430[];
extern char lbl_80534714[];
void beSwitchCtrlInfo_register();
void *beSwitchCtrlInfo_getMetaCall();
}
extern "C" {
void fn_802B7BB0(){
 fn_80066188((int)beSwitchCtrlInfo_register);
}
void beSwitchCtrlInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534714,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beSwitchCtrlInfo_getMetaCall,(int)lbl_8041D5B4,32,(int)beSwitchCtrlInfo_vtableRead,(int)beSwitchCtrlInfo_fieldInit,0,(int)lbl_804CF430);
}
void *beSwitchCtrlInfo_getMetaCall(){return beSwitchCtrlInfo_getMeta();}
}
#pragma pop
