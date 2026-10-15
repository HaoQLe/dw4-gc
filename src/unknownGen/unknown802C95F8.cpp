#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoDataSeq_fieldInit();
void *beModelCtrlInfoDataSeq_getMeta();
void beModelCtrlInfoDataSeq_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beModelCtrlInfoDataSeq_className[];
extern char beModelCtrlInfoDataSeq_dependencies[];
extern char beModelCtrlInfoDataSeq_meta[];
void beModelCtrlInfoDataSeq_register();
void *beModelCtrlInfoDataSeq_getMetaCall();
}
extern "C" {
void beModelCtrlInfoDataSeq_arkRegister(){
 meta_registerNow((int)beModelCtrlInfoDataSeq_register);
}
void beModelCtrlInfoDataSeq_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoDataSeq_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoDataSeq_getMetaCall,(int)beModelCtrlInfoDataSeq_className,20,(int)beModelCtrlInfoDataSeq_vtableRead,(int)beModelCtrlInfoDataSeq_fieldInit,0,(int)beModelCtrlInfoDataSeq_dependencies);
}
void *beModelCtrlInfoDataSeq_getMetaCall(){return beModelCtrlInfoDataSeq_getMeta();}
}
#pragma pop
