#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNDMWWindowList_registerNow();
extern void *beNDMWWindowList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWWindowList_metaObject(){
 if(!beNDMWWindowList_meta) beNDMWWindowList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWWindowList_meta;
}
void *beNDMWWindowList_getMeta(){
 if(!beNDMWWindowList_meta || !(reinterpret_cast<unsigned int *>(beNDMWWindowList_meta)[0x24/4]&4)) beNDMWWindowList_registerNow();
 return beNDMWWindowList_meta;
}
}
#pragma pop
