#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igViewerRenderer_registerNow();
extern void *igViewerRenderer_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igViewerRenderer_metaObject(){
 if(!igViewerRenderer_meta) igViewerRenderer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewerRenderer_meta;
}
void *igViewerRenderer_getMeta(){
 if(!igViewerRenderer_meta || !(reinterpret_cast<unsigned int *>(igViewerRenderer_meta)[0x24/4]&4)) igViewerRenderer_registerNow();
 return igViewerRenderer_meta;
}
}
#pragma pop
