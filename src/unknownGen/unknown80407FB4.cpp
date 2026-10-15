#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igViewModel_registerNow();
extern void *igViewModel_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igViewModel_metaObject(){
 if(!igViewModel_meta) igViewModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewModel_meta;
}
void *igViewModel_getMeta(){
 if(!igViewModel_meta || !(reinterpret_cast<unsigned int *>(igViewModel_meta)[0x24/4]&4)) igViewModel_registerNow();
 return igViewModel_meta;
}
}
#pragma pop
