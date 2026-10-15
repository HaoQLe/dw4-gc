#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beMatCtrlInfoWork_registerNow();
extern void *beMatCtrlInfoWork_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beMatCtrlInfoWork_create(void *object){
 beMatCtrlInfoWork_registerNow();
 return meta_createInstance(beMatCtrlInfoWork_meta,object);
}
void *beMatCtrlInfoWork_metaObject(){
 if(!beMatCtrlInfoWork_meta) beMatCtrlInfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMatCtrlInfoWork_meta;
}
void *beMatCtrlInfoWork_getMeta(){
 if(!beMatCtrlInfoWork_meta || !(reinterpret_cast<unsigned int *>(beMatCtrlInfoWork_meta)[0x24/4]&4)) beMatCtrlInfoWork_registerNow();
 return beMatCtrlInfoWork_meta;
}
}
#pragma pop
