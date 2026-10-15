#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beModelCtrlInfoRideOn_arkRegister();
extern void *beModelCtrlInfoRideOn_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beModelCtrlInfoRideOn_create(void *object){
 beModelCtrlInfoRideOn_arkRegister();
 return meta_createInstance(beModelCtrlInfoRideOn_meta,object);
}
void *beModelCtrlInfoRideOn_metaObject(){
 if(!beModelCtrlInfoRideOn_meta) beModelCtrlInfoRideOn_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlInfoRideOn_meta;
}
void *beModelCtrlInfoRideOn_getMeta(){
 if(!beModelCtrlInfoRideOn_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoRideOn_meta)[0x24/4]&4)) beModelCtrlInfoRideOn_arkRegister();
 return beModelCtrlInfoRideOn_meta;
}
}
#pragma pop
