#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beTextureCtrlWork_arkRegister();
extern void *beTextureCtrlWork_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beTextureCtrlWork_create(void *object){
 beTextureCtrlWork_arkRegister();
 return meta_createInstance(beTextureCtrlWork_meta,object);
}
void *beTextureCtrlWork_metaObject(){
 if(!beTextureCtrlWork_meta) beTextureCtrlWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beTextureCtrlWork_meta;
}
void *beTextureCtrlWork_getMeta(){
 if(!beTextureCtrlWork_meta || !(reinterpret_cast<unsigned int *>(beTextureCtrlWork_meta)[0x24/4]&4)) beTextureCtrlWork_arkRegister();
 return beTextureCtrlWork_meta;
}
}
#pragma pop
