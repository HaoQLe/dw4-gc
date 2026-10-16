#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void igBlendMatrixSelect_arkRegister();
extern void *lbl_805621F4;
extern void *igBlendMatrixSelect_meta;
}
extern "C" {
void *fn_801C6F3C(){
 if(!igBlendMatrixSelect_meta) igBlendMatrixSelect_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendMatrixSelect_meta;
}
}
#pragma pop
