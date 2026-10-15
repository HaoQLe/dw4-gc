#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoDataHit_fieldInit();
void *beModelCtrlInfoDataHit_getMeta();
void beModelCtrlInfoDataHit_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beModelCtrlInfoDataHit_className[];
extern char lbl_804D0D5C[];
extern char beModelCtrlInfoDataHit_meta[];
void beModelCtrlInfoDataHit_register();
void *beModelCtrlInfoDataHit_getMetaCall();
}
extern "C" {
void beModelCtrlInfoDataHit_registerNow(){
 meta_registerNow((int)beModelCtrlInfoDataHit_register);
}
void beModelCtrlInfoDataHit_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoDataHit_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoDataHit_getMetaCall,(int)beModelCtrlInfoDataHit_className,28,(int)beModelCtrlInfoDataHit_vtableRead,(int)beModelCtrlInfoDataHit_fieldInit,0,(int)lbl_804D0D5C);
}
void *beModelCtrlInfoDataHit_getMetaCall(){return beModelCtrlInfoDataHit_getMeta();}
}
#pragma pop
