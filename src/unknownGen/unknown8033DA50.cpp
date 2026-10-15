#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNDMWLoadIntf2DegiStateList_registerNow();
extern void *beNDMWLoadIntf2DegiStateList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWLoadIntf2DegiStateList_metaObject(){
 if(!beNDMWLoadIntf2DegiStateList_meta) beNDMWLoadIntf2DegiStateList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadIntf2DegiStateList_meta;
}
void *beNDMWLoadIntf2DegiStateList_getMeta(){
 if(!beNDMWLoadIntf2DegiStateList_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2DegiStateList_meta)[0x24/4]&4)) beNDMWLoadIntf2DegiStateList_registerNow();
 return beNDMWLoadIntf2DegiStateList_meta;
}
}
#pragma pop
