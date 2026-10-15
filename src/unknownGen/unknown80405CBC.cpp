#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igViewerParameters_arkRegister();
extern void *igViewerParameters_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igViewerParameters_metaObject(){
 if(!igViewerParameters_meta) igViewerParameters_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewerParameters_meta;
}
void *igViewerParameters_getMeta(){
 if(!igViewerParameters_meta || !(reinterpret_cast<unsigned int *>(igViewerParameters_meta)[0x24/4]&4)) igViewerParameters_arkRegister();
 return igViewerParameters_meta;
}
}
#pragma pop
