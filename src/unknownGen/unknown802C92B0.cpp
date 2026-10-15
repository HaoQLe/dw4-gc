#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoDataTrc_fieldInit();
void *beModelCtrlInfoDataTrc_getMeta();
void beModelCtrlInfoDataTrc_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beModelCtrlInfoDataTrc_className[];
extern char lbl_804D0D2C[];
extern char beModelCtrlInfoDataTrc_meta[];
void beModelCtrlInfoDataTrc_register();
void *beModelCtrlInfoDataTrc_getMetaCall();
}
extern "C" {
void beModelCtrlInfoDataTrc_registerNow(){
 meta_registerNow((int)beModelCtrlInfoDataTrc_register);
}
void beModelCtrlInfoDataTrc_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoDataTrc_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoDataTrc_getMetaCall,(int)beModelCtrlInfoDataTrc_className,20,(int)beModelCtrlInfoDataTrc_vtableRead,(int)beModelCtrlInfoDataTrc_fieldInit,0,(int)lbl_804D0D2C);
}
void *beModelCtrlInfoDataTrc_getMetaCall(){return beModelCtrlInfoDataTrc_getMeta();}
}
#pragma pop
