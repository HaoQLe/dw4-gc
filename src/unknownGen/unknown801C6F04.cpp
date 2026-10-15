#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void igBlendMatrixSelect_registerNow();
extern void *lbl_805621F4;
extern void *igBlendMatrixSelect_meta;
}
extern "C" {
void *igBlendMatrixSelect_create(void *object){
 igBlendMatrixSelect_registerNow();
 return meta_createInstance(igBlendMatrixSelect_meta,object);
}
void *fn_801C6F3C(){
 if(!igBlendMatrixSelect_meta) igBlendMatrixSelect_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendMatrixSelect_meta;
}
void *igBlendMatrixSelect_getMeta(){
 if(!igBlendMatrixSelect_meta || !(reinterpret_cast<unsigned int *>(igBlendMatrixSelect_meta)[0x24/4]&4)) igBlendMatrixSelect_registerNow();
 return igBlendMatrixSelect_meta;
}
}
#pragma pop
