#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beModelCtrlAIDataList_registerNow();
extern void *beModelCtrlAIDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beModelCtrlAIDataList_metaObject(){
 if(!beModelCtrlAIDataList_meta) beModelCtrlAIDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlAIDataList_meta;
}
void *beModelCtrlAIDataList_getMeta(){
 if(!beModelCtrlAIDataList_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlAIDataList_meta)[0x24/4]&4)) beModelCtrlAIDataList_registerNow();
 return beModelCtrlAIDataList_meta;
}
}
#pragma pop
