#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNDMWMcSlotList_arkRegister();
extern void *beNDMWMcSlotList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWMcSlotList_metaObject(){
 if(!beNDMWMcSlotList_meta) beNDMWMcSlotList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMcSlotList_meta;
}
void *beNDMWMcSlotList_getMeta(){
 if(!beNDMWMcSlotList_meta || !(reinterpret_cast<unsigned int *>(beNDMWMcSlotList_meta)[0x24/4]&4)) beNDMWMcSlotList_arkRegister();
 return beNDMWMcSlotList_meta;
}
}
#pragma pop
