#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoDataSeq_fieldInit();
void *beModelCtrlInfoDataSeq_getMeta();
void beModelCtrlInfoDataSeq_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041F008[];
extern char lbl_804D0D44[];
extern char lbl_80534E14[];
void beModelCtrlInfoDataSeq_register();
void *beModelCtrlInfoDataSeq_getMetaCall();
}
extern "C" {
void fn_802C95F8(){
 fn_80066188((int)beModelCtrlInfoDataSeq_register);
}
void beModelCtrlInfoDataSeq_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E14,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoDataSeq_getMetaCall,(int)lbl_8041F008,20,(int)beModelCtrlInfoDataSeq_vtableRead,(int)beModelCtrlInfoDataSeq_fieldInit,0,(int)lbl_804D0D44);
}
void *beModelCtrlInfoDataSeq_getMetaCall(){return beModelCtrlInfoDataSeq_getMeta();}
}
#pragma pop
