#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWLoadIntf2DegiStateCtrl_registerNow();
extern void *beNDMWLoadIntf2DegiStateCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWLoadIntf2DegiStateCtrl_create(void *object){
 beNDMWLoadIntf2DegiStateCtrl_registerNow();
 return meta_createInstance(beNDMWLoadIntf2DegiStateCtrl_meta,object);
}
void *beNDMWLoadIntf2DegiStateCtrl_metaObject(){
 if(!beNDMWLoadIntf2DegiStateCtrl_meta) beNDMWLoadIntf2DegiStateCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadIntf2DegiStateCtrl_meta;
}
void *beNDMWLoadIntf2DegiStateCtrl_getMeta(){
 if(!beNDMWLoadIntf2DegiStateCtrl_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2DegiStateCtrl_meta)[0x24/4]&4)) beNDMWLoadIntf2DegiStateCtrl_registerNow();
 return beNDMWLoadIntf2DegiStateCtrl_meta;
}
}
#pragma pop
