#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlAIDataList_getMeta();
void beModelCtrlAIDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlAIData_registerNow();
void igObjectList_register();
extern char beModelCtrlAIDataList_className[];
extern char lbl_804D0EEC[];
extern char beModelCtrlAIDataList_meta[];
extern void *beModelCtrlAIData_meta;
void beModelCtrlAIDataList_register();
void *beModelCtrlAIDataList_getMetaCall();
}
extern "C" {
void beModelCtrlAIDataList_registerNow(){
 meta_registerNow((int)beModelCtrlAIDataList_register);
}
void beModelCtrlAIDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlAIDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beModelCtrlAIDataList_getMetaCall,(int)beModelCtrlAIDataList_className,20,(int)beModelCtrlAIDataList_vtableRead,0,0,(int)lbl_804D0EEC);
}
void *beModelCtrlAIDataList_getMetaCall(){return beModelCtrlAIDataList_getMeta();}
void *beModelCtrlAIData_getMeta(){
 if(!beModelCtrlAIData_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlAIData_meta)[0x24/4]&4)) beModelCtrlAIData_registerNow();
 return beModelCtrlAIData_meta;
}
}
#pragma pop
