#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beModelCtrlInfoAI_registerNow();
extern void *beModelCtrlInfoAI_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beModelCtrlInfoAI_create(void *object){
 beModelCtrlInfoAI_registerNow();
 return meta_createInstance(beModelCtrlInfoAI_meta,object);
}
void *beModelCtrlInfoAI_metaObject(){
 if(!beModelCtrlInfoAI_meta) beModelCtrlInfoAI_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlInfoAI_meta;
}
void *beModelCtrlInfoAI_getMeta(){
 if(!beModelCtrlInfoAI_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoAI_meta)[0x24/4]&4)) beModelCtrlInfoAI_registerNow();
 return beModelCtrlInfoAI_meta;
}
}
#pragma pop
