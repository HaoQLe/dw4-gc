#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWLoadIntf2ComMdlCtrl_arkRegister();
extern void *beNDMWLoadIntf2ComMdlCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWLoadIntf2ComMdlCtrl_create(void *object){
 beNDMWLoadIntf2ComMdlCtrl_arkRegister();
 return meta_createInstance(beNDMWLoadIntf2ComMdlCtrl_meta,object);
}
void *beNDMWLoadIntf2ComMdlCtrl_metaObject(){
 if(!beNDMWLoadIntf2ComMdlCtrl_meta) beNDMWLoadIntf2ComMdlCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadIntf2ComMdlCtrl_meta;
}
void *beNDMWLoadIntf2ComMdlCtrl_getMeta(){
 if(!beNDMWLoadIntf2ComMdlCtrl_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2ComMdlCtrl_meta)[0x24/4]&4)) beNDMWLoadIntf2ComMdlCtrl_arkRegister();
 return beNDMWLoadIntf2ComMdlCtrl_meta;
}
}
#pragma pop
