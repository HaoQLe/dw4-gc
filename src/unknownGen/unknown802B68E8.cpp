#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beTextureCtrl_registerNow();
extern void *beTextureCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beTextureCtrl_create(void *object){
 beTextureCtrl_registerNow();
 return meta_createInstance(beTextureCtrl_meta,object);
}
void *beTextureCtrl_metaObject(){
 if(!beTextureCtrl_meta) beTextureCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beTextureCtrl_meta;
}
void *beTextureCtrl_getMeta(){
 if(!beTextureCtrl_meta || !(reinterpret_cast<unsigned int *>(beTextureCtrl_meta)[0x24/4]&4)) beTextureCtrl_registerNow();
 return beTextureCtrl_meta;
}
}
#pragma pop
