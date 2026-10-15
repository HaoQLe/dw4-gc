#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoDataAIH_fieldInit();
void *beModelCtrlInfoDataAIH_getMeta();
void beModelCtrlInfoDataAIH_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beModelCtrlInfoDataAIH_className[];
extern char beModelCtrlInfoDataAIH_meta[];
void beModelCtrlInfoDataAIH_register();
void *beModelCtrlInfoDataAIH_getMetaCall();
}
extern "C" {
void beModelCtrlInfoDataAIH_arkRegister(){
 meta_registerNow((int)beModelCtrlInfoDataAIH_register);
}
void beModelCtrlInfoDataAIH_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoDataAIH_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoDataAIH_getMetaCall,(int)beModelCtrlInfoDataAIH_className,44,(int)beModelCtrlInfoDataAIH_vtableRead,(int)beModelCtrlInfoDataAIH_fieldInit,0,0);
}
void *beModelCtrlInfoDataAIH_getMetaCall(){return beModelCtrlInfoDataAIH_getMeta();}
}
#pragma pop
