#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beMatCtrlSearchList_registerNow();
extern void *beMatCtrlSearchList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beMatCtrlSearchList_metaObject(){
 if(!beMatCtrlSearchList_meta) beMatCtrlSearchList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMatCtrlSearchList_meta;
}
void *beMatCtrlSearchList_getMeta(){
 if(!beMatCtrlSearchList_meta || !(reinterpret_cast<unsigned int *>(beMatCtrlSearchList_meta)[0x24/4]&4)) beMatCtrlSearchList_registerNow();
 return beMatCtrlSearchList_meta;
}
}
#pragma pop
