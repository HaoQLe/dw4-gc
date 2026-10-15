#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beModelCtrlInfoDataTrc_registerNow();
extern void *beModelCtrlInfoDataTrc_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beModelCtrlInfoDataTrc_metaObject(){
 if(!beModelCtrlInfoDataTrc_meta) beModelCtrlInfoDataTrc_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlInfoDataTrc_meta;
}
void *beModelCtrlInfoDataTrc_getMeta(){
 if(!beModelCtrlInfoDataTrc_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoDataTrc_meta)[0x24/4]&4)) beModelCtrlInfoDataTrc_registerNow();
 return beModelCtrlInfoDataTrc_meta;
}
}
#pragma pop
