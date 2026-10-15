#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNDMWDegiDataList_arkRegister();
extern void *beNDMWDegiDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWDegiDataList_metaObject(){
 if(!beNDMWDegiDataList_meta) beNDMWDegiDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWDegiDataList_meta;
}
void *beNDMWDegiDataList_getMeta(){
 if(!beNDMWDegiDataList_meta || !(reinterpret_cast<unsigned int *>(beNDMWDegiDataList_meta)[0x24/4]&4)) beNDMWDegiDataList_arkRegister();
 return beNDMWDegiDataList_meta;
}
}
#pragma pop
