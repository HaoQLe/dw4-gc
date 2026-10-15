#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlInfoList_getMeta();
void beModelCtrlInfoList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlInfo_registerNow();
void igObjectList_register();
extern char beModelCtrlInfoList_className[];
extern char lbl_804D0CE8[];
extern char beModelCtrlInfoList_meta[];
extern void *beModelCtrlInfo_meta;
void beModelCtrlInfoList_register();
void *beModelCtrlInfoList_getMetaCall();
}
extern "C" {
void beModelCtrlInfoList_registerNow(){
 meta_registerNow((int)beModelCtrlInfoList_register);
}
void beModelCtrlInfoList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beModelCtrlInfoList_getMetaCall,(int)beModelCtrlInfoList_className,20,(int)beModelCtrlInfoList_vtableRead,0,0,(int)lbl_804D0CE8);
}
void *beModelCtrlInfoList_getMetaCall(){return beModelCtrlInfoList_getMeta();}
void *beModelCtrlInfo_getMeta(){
 if(!beModelCtrlInfo_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfo_meta)[0x24/4]&4)) beModelCtrlInfo_registerNow();
 return beModelCtrlInfo_meta;
}
}
#pragma pop
