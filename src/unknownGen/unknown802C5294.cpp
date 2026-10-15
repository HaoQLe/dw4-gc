#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beModelCtrlSubCom_registerNow();
extern void *beModelCtrlSubCom_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beModelCtrlSubCom_metaObject(){
 if(!beModelCtrlSubCom_meta) beModelCtrlSubCom_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlSubCom_meta;
}
void *beModelCtrlSubCom_getMeta(){
 if(!beModelCtrlSubCom_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlSubCom_meta)[0x24/4]&4)) beModelCtrlSubCom_registerNow();
 return beModelCtrlSubCom_meta;
}
}
#pragma pop
