#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igBoundingBoxRenderer_arkRegister();
extern void *igBoundingBoxRenderer_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igBoundingBoxRenderer_metaObject(){
 if(!igBoundingBoxRenderer_meta) igBoundingBoxRenderer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBoundingBoxRenderer_meta;
}
void *igBoundingBoxRenderer_getMeta(){
 if(!igBoundingBoxRenderer_meta || !(reinterpret_cast<unsigned int *>(igBoundingBoxRenderer_meta)[0x24/4]&4)) igBoundingBoxRenderer_arkRegister();
 return igBoundingBoxRenderer_meta;
}
}
#pragma pop
