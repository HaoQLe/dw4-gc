#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNDMWPanelObjectWaza_registerNow();
extern void *beNDMWPanelObjectWaza_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWPanelObjectWaza_metaObject(){
 if(!beNDMWPanelObjectWaza_meta) beNDMWPanelObjectWaza_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWPanelObjectWaza_meta;
}
void *beNDMWPanelObjectWaza_getMeta(){
 if(!beNDMWPanelObjectWaza_meta || !(reinterpret_cast<unsigned int *>(beNDMWPanelObjectWaza_meta)[0x24/4]&4)) beNDMWPanelObjectWaza_registerNow();
 return beNDMWPanelObjectWaza_meta;
}
}
#pragma pop
