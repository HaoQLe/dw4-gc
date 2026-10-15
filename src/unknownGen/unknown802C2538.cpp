#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void bePadDataList_arkRegister();
extern void *bePadDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *bePadDataList_metaObject(){
 if(!bePadDataList_meta) bePadDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return bePadDataList_meta;
}
void *bePadDataList_getMeta(){
 if(!bePadDataList_meta || !(reinterpret_cast<unsigned int *>(bePadDataList_meta)[0x24/4]&4)) bePadDataList_arkRegister();
 return bePadDataList_meta;
}
}
#pragma pop
