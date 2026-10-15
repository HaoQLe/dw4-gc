#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNDMWLoadSavePlWorkList_registerNow();
extern void *beNDMWLoadSavePlWorkList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWLoadSavePlWorkList_metaObject(){
 if(!beNDMWLoadSavePlWorkList_meta) beNDMWLoadSavePlWorkList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadSavePlWorkList_meta;
}
void *beNDMWLoadSavePlWorkList_getMeta(){
 if(!beNDMWLoadSavePlWorkList_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadSavePlWorkList_meta)[0x24/4]&4)) beNDMWLoadSavePlWorkList_registerNow();
 return beNDMWLoadSavePlWorkList_meta;
}
}
#pragma pop
