#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beWaterMoveDataList_arkRegister();
extern void *beWaterMoveDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beWaterMoveDataList_metaObject(){
 if(!beWaterMoveDataList_meta) beWaterMoveDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beWaterMoveDataList_meta;
}
void *beWaterMoveDataList_getMeta(){
 if(!beWaterMoveDataList_meta || !(reinterpret_cast<unsigned int *>(beWaterMoveDataList_meta)[0x24/4]&4)) beWaterMoveDataList_arkRegister();
 return beWaterMoveDataList_meta;
}
}
#pragma pop
