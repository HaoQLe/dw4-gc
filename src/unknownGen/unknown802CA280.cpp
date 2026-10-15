#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlAIMapList_getMeta();
void beModelCtrlAIMapList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlAIMap_registerNow();
void igObjectList_register();
extern char beModelCtrlAIMapList_className[];
extern char lbl_804D0E3C[];
extern char beModelCtrlAIMapList_meta[];
extern void *beModelCtrlAIMap_meta;
void beModelCtrlAIMapList_register();
void *beModelCtrlAIMapList_getMetaCall();
}
extern "C" {
void beModelCtrlAIMapList_registerNow(){
 meta_registerNow((int)beModelCtrlAIMapList_register);
}
void beModelCtrlAIMapList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlAIMapList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beModelCtrlAIMapList_getMetaCall,(int)beModelCtrlAIMapList_className,20,(int)beModelCtrlAIMapList_vtableRead,0,0,(int)lbl_804D0E3C);
}
void *beModelCtrlAIMapList_getMetaCall(){return beModelCtrlAIMapList_getMeta();}
void *beModelCtrlAIMap_getMeta(){
 if(!beModelCtrlAIMap_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlAIMap_meta)[0x24/4]&4)) beModelCtrlAIMap_registerNow();
 return beModelCtrlAIMap_meta;
}
}
#pragma pop
