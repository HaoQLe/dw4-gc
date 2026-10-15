#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beSaveIntfComMdlDataList_registerNow();
extern void *beSaveIntfComMdlDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beSaveIntfComMdlDataList_metaObject(){
 if(!beSaveIntfComMdlDataList_meta) beSaveIntfComMdlDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSaveIntfComMdlDataList_meta;
}
void *beSaveIntfComMdlDataList_getMeta(){
 if(!beSaveIntfComMdlDataList_meta || !(reinterpret_cast<unsigned int *>(beSaveIntfComMdlDataList_meta)[0x24/4]&4)) beSaveIntfComMdlDataList_registerNow();
 return beSaveIntfComMdlDataList_meta;
}
}
#pragma pop
