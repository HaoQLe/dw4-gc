#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beMeterCtrlInfo_fieldInit();
void *beMeterCtrlInfo_getMeta();
void beMeterCtrlInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041F57C[];
extern char lbl_804D1208[];
extern char lbl_80534F70[];
void beMeterCtrlInfo_register();
void *beMeterCtrlInfo_getMetaCall();
}
extern "C" {
void fn_802CD6E0(){
 fn_80066188((int)beMeterCtrlInfo_register);
}
void beMeterCtrlInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F70,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beMeterCtrlInfo_getMetaCall,(int)lbl_8041F57C,32,(int)beMeterCtrlInfo_vtableRead,(int)beMeterCtrlInfo_fieldInit,0,(int)lbl_804D1208);
}
void *beMeterCtrlInfo_getMetaCall(){return beMeterCtrlInfo_getMeta();}
}
#pragma pop
