#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWMcUtilCtrl_arkRegister();
extern void *beNDMWMcUtilCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWMcUtilCtrl_create(void *object){
 beNDMWMcUtilCtrl_arkRegister();
 return meta_createInstance(beNDMWMcUtilCtrl_meta,object);
}
void *beNDMWMcUtilCtrl_metaObject(){
 if(!beNDMWMcUtilCtrl_meta) beNDMWMcUtilCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMcUtilCtrl_meta;
}
void *beNDMWMcUtilCtrl_getMeta(){
 if(!beNDMWMcUtilCtrl_meta || !(reinterpret_cast<unsigned int *>(beNDMWMcUtilCtrl_meta)[0x24/4]&4)) beNDMWMcUtilCtrl_arkRegister();
 return beNDMWMcUtilCtrl_meta;
}
}
#pragma pop
