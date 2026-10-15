#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igGamecubeVisualContext_registerNow();
extern void *lbl_805621F4;
extern void *igGamecubeVisualContext_meta;
}
extern "C" {
void *fn_800D6178(){
 if(!igGamecubeVisualContext_meta) igGamecubeVisualContext_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGamecubeVisualContext_meta;
}
void *igGamecubeVisualContext_getMeta(){
 if(!igGamecubeVisualContext_meta || !(reinterpret_cast<unsigned int *>(igGamecubeVisualContext_meta)[0x24/4]&4)) igGamecubeVisualContext_registerNow();
 return igGamecubeVisualContext_meta;
}
}
#pragma pop
