#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNDMWPanelObjectItem_registerNow();
extern void *beNDMWPanelObjectItem_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWPanelObjectItem_metaObject(){
 if(!beNDMWPanelObjectItem_meta) beNDMWPanelObjectItem_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWPanelObjectItem_meta;
}
void *beNDMWPanelObjectItem_getMeta(){
 if(!beNDMWPanelObjectItem_meta || !(reinterpret_cast<unsigned int *>(beNDMWPanelObjectItem_meta)[0x24/4]&4)) beNDMWPanelObjectItem_registerNow();
 return beNDMWPanelObjectItem_meta;
}
}
#pragma pop
