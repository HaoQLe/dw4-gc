#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWPanelWazaInfoWork_registerNow();
extern void *beNDMWPanelWazaInfoWork_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWPanelWazaInfoWork_create(void *object){
 beNDMWPanelWazaInfoWork_registerNow();
 return meta_createInstance(beNDMWPanelWazaInfoWork_meta,object);
}
void *beNDMWPanelWazaInfoWork_metaObject(){
 if(!beNDMWPanelWazaInfoWork_meta) beNDMWPanelWazaInfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWPanelWazaInfoWork_meta;
}
void *beNDMWPanelWazaInfoWork_getMeta(){
 if(!beNDMWPanelWazaInfoWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWPanelWazaInfoWork_meta)[0x24/4]&4)) beNDMWPanelWazaInfoWork_registerNow();
 return beNDMWPanelWazaInfoWork_meta;
}
}
#pragma pop
