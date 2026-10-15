#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beModelCtrlAIMapList_registerNow();
extern void *beModelCtrlAIMapList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beModelCtrlAIMapList_metaObject(){
 if(!beModelCtrlAIMapList_meta) beModelCtrlAIMapList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlAIMapList_meta;
}
void *beModelCtrlAIMapList_getMeta(){
 if(!beModelCtrlAIMapList_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlAIMapList_meta)[0x24/4]&4)) beModelCtrlAIMapList_registerNow();
 return beModelCtrlAIMapList_meta;
}
}
#pragma pop
