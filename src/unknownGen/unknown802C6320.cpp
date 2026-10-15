#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beModelCtrlInfoWork_arkRegister();
void *fn_8030FEB0();
extern void *beModelCtrlInfoWork_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C6320(){return fn_8030FEB0();}
void *beModelCtrlInfoWork_create(void *object){
 beModelCtrlInfoWork_arkRegister();
 return meta_createInstance(beModelCtrlInfoWork_meta,object);
}
void *beModelCtrlInfoWork_metaObject(){
 if(!beModelCtrlInfoWork_meta) beModelCtrlInfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlInfoWork_meta;
}
void *beModelCtrlInfoWork_getMeta(){
 if(!beModelCtrlInfoWork_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoWork_meta)[0x24/4]&4)) beModelCtrlInfoWork_arkRegister();
 return beModelCtrlInfoWork_meta;
}
}
#pragma pop
