#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beShadow01_registerNow();
extern void *beShadow01_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beShadow01_create(void *object){
 beShadow01_registerNow();
 return meta_createInstance(beShadow01_meta,object);
}
void *beShadow01_metaObject(){
 if(!beShadow01_meta) beShadow01_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beShadow01_meta;
}
void *beShadow01_getMeta(){
 if(!beShadow01_meta || !(reinterpret_cast<unsigned int *>(beShadow01_meta)[0x24/4]&4)) beShadow01_registerNow();
 return beShadow01_meta;
}
}
#pragma pop
