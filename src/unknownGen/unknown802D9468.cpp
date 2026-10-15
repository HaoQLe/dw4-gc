#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beFontImageList_registerNow();
extern void *beFontImageList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beFontImageList_metaObject(){
 if(!beFontImageList_meta) beFontImageList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beFontImageList_meta;
}
void *beFontImageList_getMeta(){
 if(!beFontImageList_meta || !(reinterpret_cast<unsigned int *>(beFontImageList_meta)[0x24/4]&4)) beFontImageList_registerNow();
 return beFontImageList_meta;
}
}
#pragma pop
