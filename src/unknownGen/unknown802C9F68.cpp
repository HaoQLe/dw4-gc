#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoDataAIM_fieldInit();
void *beModelCtrlInfoDataAIM_getMeta();
void beModelCtrlInfoDataAIM_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beModelCtrlInfoDataAIM_className[];
extern char beModelCtrlInfoDataAIM_dependencies[];
extern char beModelCtrlInfoDataAIM_meta[];
void beModelCtrlInfoDataAIM_register();
void *beModelCtrlInfoDataAIM_getMetaCall();
}
extern "C" {
void beModelCtrlInfoDataAIM_arkRegister(){
 meta_registerNow((int)beModelCtrlInfoDataAIM_register);
}
void beModelCtrlInfoDataAIM_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoDataAIM_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoDataAIM_getMetaCall,(int)beModelCtrlInfoDataAIM_className,20,(int)beModelCtrlInfoDataAIM_vtableRead,(int)beModelCtrlInfoDataAIM_fieldInit,0,(int)beModelCtrlInfoDataAIM_dependencies);
}
void *beModelCtrlInfoDataAIM_getMetaCall(){return beModelCtrlInfoDataAIM_getMeta();}
}
#pragma pop
