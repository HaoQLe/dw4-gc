#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWLoadCtrl2CommonIntf_arkRegister();
extern void *beNDMWLoadCtrl2CommonIntf_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWLoadCtrl2CommonIntf_create(void *object){
 beNDMWLoadCtrl2CommonIntf_arkRegister();
 return meta_createInstance(beNDMWLoadCtrl2CommonIntf_meta,object);
}
void *beNDMWLoadCtrl2CommonIntf_metaObject(){
 if(!beNDMWLoadCtrl2CommonIntf_meta) beNDMWLoadCtrl2CommonIntf_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadCtrl2CommonIntf_meta;
}
void *beNDMWLoadCtrl2CommonIntf_getMeta(){
 if(!beNDMWLoadCtrl2CommonIntf_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadCtrl2CommonIntf_meta)[0x24/4]&4)) beNDMWLoadCtrl2CommonIntf_arkRegister();
 return beNDMWLoadCtrl2CommonIntf_meta;
}
}
#pragma pop
