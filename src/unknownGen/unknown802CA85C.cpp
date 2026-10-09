#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlAIDataList_getMeta();
void beModelCtrlAIDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CAA00();
void igObjectList_register();
extern char lbl_8041F1C0[];
extern char lbl_804D0EEC[];
extern char lbl_80534E9C[];
extern void *lbl_80534EA0;
void beModelCtrlAIDataList_register();
void *beModelCtrlAIDataList_getMetaCall();
}
extern "C" {
void fn_802CA85C(){
 fn_80066188((int)beModelCtrlAIDataList_register);
}
void beModelCtrlAIDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E9C,(int)igObjectList_register,(int)fn_80024180,(int)beModelCtrlAIDataList_getMetaCall,(int)lbl_8041F1C0,20,(int)beModelCtrlAIDataList_vtableRead,0,0,(int)lbl_804D0EEC);
}
void *beModelCtrlAIDataList_getMetaCall(){return beModelCtrlAIDataList_getMeta();}
void *beModelCtrlAIData_getMeta(){
 if(!lbl_80534EA0 || !(reinterpret_cast<unsigned int *>(lbl_80534EA0)[0x24/4]&4)) fn_802CAA00();
 return lbl_80534EA0;
}
}
#pragma pop
