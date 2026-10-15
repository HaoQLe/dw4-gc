#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beHitLandResultDataList_arkRegister();
extern void *beHitLandResultDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beHitLandResultDataList_metaObject(){
 if(!beHitLandResultDataList_meta) beHitLandResultDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beHitLandResultDataList_meta;
}
void *beHitLandResultDataList_getMeta(){
 if(!beHitLandResultDataList_meta || !(reinterpret_cast<unsigned int *>(beHitLandResultDataList_meta)[0x24/4]&4)) beHitLandResultDataList_arkRegister();
 return beHitLandResultDataList_meta;
}
}
#pragma pop
