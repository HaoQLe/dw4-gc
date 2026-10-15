#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNDMWPanelObjectStat_arkRegister();
extern void *beNDMWPanelObjectStat_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWPanelObjectStat_metaObject(){
 if(!beNDMWPanelObjectStat_meta) beNDMWPanelObjectStat_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWPanelObjectStat_meta;
}
void *beNDMWPanelObjectStat_getMeta(){
 if(!beNDMWPanelObjectStat_meta || !(reinterpret_cast<unsigned int *>(beNDMWPanelObjectStat_meta)[0x24/4]&4)) beNDMWPanelObjectStat_arkRegister();
 return beNDMWPanelObjectStat_meta;
}
}
#pragma pop
