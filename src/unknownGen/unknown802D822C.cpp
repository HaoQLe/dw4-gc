#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beGeneraterItemDataOneList_arkRegister();
extern void *beGeneraterItemDataOneList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beGeneraterItemDataOneList_metaObject(){
 if(!beGeneraterItemDataOneList_meta) beGeneraterItemDataOneList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beGeneraterItemDataOneList_meta;
}
void *beGeneraterItemDataOneList_getMeta(){
 if(!beGeneraterItemDataOneList_meta || !(reinterpret_cast<unsigned int *>(beGeneraterItemDataOneList_meta)[0x24/4]&4)) beGeneraterItemDataOneList_arkRegister();
 return beGeneraterItemDataOneList_meta;
}
}
#pragma pop
