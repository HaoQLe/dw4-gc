#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igViewManager_arkRegister();
extern void *igViewManager_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igViewManager_metaObject(){
 if(!igViewManager_meta) igViewManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewManager_meta;
}
void *igViewManager_getMeta(){
 if(!igViewManager_meta || !(reinterpret_cast<unsigned int *>(igViewManager_meta)[0x24/4]&4)) igViewManager_arkRegister();
 return igViewManager_meta;
}
}
#pragma pop
