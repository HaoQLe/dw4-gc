#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNumberCtrlInfoWork_registerNow();
extern void *beNumberCtrlInfoWork_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNumberCtrlInfoWork_create(void *object){
 beNumberCtrlInfoWork_registerNow();
 return meta_createInstance(beNumberCtrlInfoWork_meta,object);
}
void *beNumberCtrlInfoWork_metaObject(){
 if(!beNumberCtrlInfoWork_meta) beNumberCtrlInfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNumberCtrlInfoWork_meta;
}
void *beNumberCtrlInfoWork_getMeta(){
 if(!beNumberCtrlInfoWork_meta || !(reinterpret_cast<unsigned int *>(beNumberCtrlInfoWork_meta)[0x24/4]&4)) beNumberCtrlInfoWork_registerNow();
 return beNumberCtrlInfoWork_meta;
}
}
#pragma pop
