#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beSelectCtrlInfoWork_registerNow();
extern void *beSelectCtrlInfoWork_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beSelectCtrlInfoWork_create(void *object){
 beSelectCtrlInfoWork_registerNow();
 return meta_createInstance(beSelectCtrlInfoWork_meta,object);
}
void *beSelectCtrlInfoWork_metaObject(){
 if(!beSelectCtrlInfoWork_meta) beSelectCtrlInfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSelectCtrlInfoWork_meta;
}
void *beSelectCtrlInfoWork_getMeta(){
 if(!beSelectCtrlInfoWork_meta || !(reinterpret_cast<unsigned int *>(beSelectCtrlInfoWork_meta)[0x24/4]&4)) beSelectCtrlInfoWork_registerNow();
 return beSelectCtrlInfoWork_meta;
}
}
#pragma pop
