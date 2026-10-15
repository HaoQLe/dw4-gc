#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igNormalsRenderer_registerNow();
extern void *igNormalsRenderer_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igNormalsRenderer_metaObject(){
 if(!igNormalsRenderer_meta) igNormalsRenderer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNormalsRenderer_meta;
}
void *igNormalsRenderer_getMeta(){
 if(!igNormalsRenderer_meta || !(reinterpret_cast<unsigned int *>(igNormalsRenderer_meta)[0x24/4]&4)) igNormalsRenderer_registerNow();
 return igNormalsRenderer_meta;
}
}
#pragma pop
