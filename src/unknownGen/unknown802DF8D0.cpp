#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beCriSndf_registerNow();
extern void *beCriSndf_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beCriSndf_create(void *object){
 beCriSndf_registerNow();
 return meta_createInstance(beCriSndf_meta,object);
}
void *beCriSndf_metaObject(){
 if(!beCriSndf_meta) beCriSndf_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beCriSndf_meta;
}
void *beCriSndf_getMeta(){
 if(!beCriSndf_meta || !(reinterpret_cast<unsigned int *>(beCriSndf_meta)[0x24/4]&4)) beCriSndf_registerNow();
 return beCriSndf_meta;
}
}
#pragma pop
