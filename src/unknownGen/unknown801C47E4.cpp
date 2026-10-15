#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void igCommonTraversal_arkRegister();
extern void *lbl_805621F4;
extern void *igCommonTraversal_meta;
}
extern "C" {
void *igCommonTraversal_create(void *object){
 igCommonTraversal_arkRegister();
 return meta_createInstance(igCommonTraversal_meta,object);
}
void *fn_801C481C(){
 if(!igCommonTraversal_meta) igCommonTraversal_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCommonTraversal_meta;
}
void *igCommonTraversal_getMeta(){
 if(!igCommonTraversal_meta || !(reinterpret_cast<unsigned int *>(igCommonTraversal_meta)[0x24/4]&4)) igCommonTraversal_arkRegister();
 return igCommonTraversal_meta;
}
}
#pragma pop
