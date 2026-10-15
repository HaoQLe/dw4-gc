#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beFontGeomAttrPairList_arkRegister();
extern void *beFontGeomAttrPairList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beFontGeomAttrPairList_metaObject(){
 if(!beFontGeomAttrPairList_meta) beFontGeomAttrPairList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beFontGeomAttrPairList_meta;
}
void *beFontGeomAttrPairList_getMeta(){
 if(!beFontGeomAttrPairList_meta || !(reinterpret_cast<unsigned int *>(beFontGeomAttrPairList_meta)[0x24/4]&4)) beFontGeomAttrPairList_arkRegister();
 return beFontGeomAttrPairList_meta;
}
}
#pragma pop
