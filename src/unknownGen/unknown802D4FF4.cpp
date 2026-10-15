#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beHitLandModelTraversal_arkRegister();
extern void *beHitLandModelTraversal_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beHitLandModelTraversal_create(void *object){
 beHitLandModelTraversal_arkRegister();
 return meta_createInstance(beHitLandModelTraversal_meta,object);
}
void *beHitLandModelTraversal_metaObject(){
 if(!beHitLandModelTraversal_meta) beHitLandModelTraversal_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beHitLandModelTraversal_meta;
}
void *beHitLandModelTraversal_getMeta(){
 if(!beHitLandModelTraversal_meta || !(reinterpret_cast<unsigned int *>(beHitLandModelTraversal_meta)[0x24/4]&4)) beHitLandModelTraversal_arkRegister();
 return beHitLandModelTraversal_meta;
}
}
#pragma pop
