#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beGeneraterItemDataList_arkRegister();
extern void *beGeneraterItemDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beGeneraterItemDataList_metaObject(){
 if(!beGeneraterItemDataList_meta) beGeneraterItemDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beGeneraterItemDataList_meta;
}
void *beGeneraterItemDataList_getMeta(){
 if(!beGeneraterItemDataList_meta || !(reinterpret_cast<unsigned int *>(beGeneraterItemDataList_meta)[0x24/4]&4)) beGeneraterItemDataList_arkRegister();
 return beGeneraterItemDataList_meta;
}
}
#pragma pop
