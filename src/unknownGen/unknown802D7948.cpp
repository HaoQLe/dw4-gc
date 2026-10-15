#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beGeneraterPlayerDataList_registerNow();
extern void *beGeneraterPlayerDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beGeneraterPlayerDataList_metaObject(){
 if(!beGeneraterPlayerDataList_meta) beGeneraterPlayerDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beGeneraterPlayerDataList_meta;
}
void *beGeneraterPlayerDataList_getMeta(){
 if(!beGeneraterPlayerDataList_meta || !(reinterpret_cast<unsigned int *>(beGeneraterPlayerDataList_meta)[0x24/4]&4)) beGeneraterPlayerDataList_registerNow();
 return beGeneraterPlayerDataList_meta;
}
}
#pragma pop
