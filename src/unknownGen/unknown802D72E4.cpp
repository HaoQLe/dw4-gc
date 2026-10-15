#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beGeneraterDataList_arkRegister();
extern void *beGeneraterDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beGeneraterDataList_metaObject(){
 if(!beGeneraterDataList_meta) beGeneraterDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beGeneraterDataList_meta;
}
void *beGeneraterDataList_getMeta(){
 if(!beGeneraterDataList_meta || !(reinterpret_cast<unsigned int *>(beGeneraterDataList_meta)[0x24/4]&4)) beGeneraterDataList_arkRegister();
 return beGeneraterDataList_meta;
}
}
#pragma pop
