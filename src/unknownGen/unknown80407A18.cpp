#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igViewMode_registerNow();
extern void *igViewMode_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igViewMode_metaObject(){
 if(!igViewMode_meta) igViewMode_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewMode_meta;
}
void *igViewMode_getMeta(){
 if(!igViewMode_meta || !(reinterpret_cast<unsigned int *>(igViewMode_meta)[0x24/4]&4)) igViewMode_registerNow();
 return igViewMode_meta;
}
}
#pragma pop
