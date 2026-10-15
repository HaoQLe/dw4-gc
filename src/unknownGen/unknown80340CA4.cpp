#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWLoadIntf2MesWin_arkRegister();
extern void *beNDMWLoadIntf2MesWin_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWLoadIntf2MesWin_create(void *object){
 beNDMWLoadIntf2MesWin_arkRegister();
 return meta_createInstance(beNDMWLoadIntf2MesWin_meta,object);
}
void *beNDMWLoadIntf2MesWin_metaObject(){
 if(!beNDMWLoadIntf2MesWin_meta) beNDMWLoadIntf2MesWin_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadIntf2MesWin_meta;
}
void *beNDMWLoadIntf2MesWin_getMeta(){
 if(!beNDMWLoadIntf2MesWin_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2MesWin_meta)[0x24/4]&4)) beNDMWLoadIntf2MesWin_arkRegister();
 return beNDMWLoadIntf2MesWin_meta;
}
}
#pragma pop
