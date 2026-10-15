#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beMatCtrlDataList_registerNow();
extern void *beMatCtrlDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beMatCtrlDataList_metaObject(){
 if(!beMatCtrlDataList_meta) beMatCtrlDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMatCtrlDataList_meta;
}
void *beMatCtrlDataList_getMeta(){
 if(!beMatCtrlDataList_meta || !(reinterpret_cast<unsigned int *>(beMatCtrlDataList_meta)[0x24/4]&4)) beMatCtrlDataList_registerNow();
 return beMatCtrlDataList_meta;
}
}
#pragma pop
