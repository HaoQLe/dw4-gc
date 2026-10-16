#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igTransformRecorder_arkRegister();
extern void *lbl_805621F4;
extern void *igTransformRecorder_meta;
}
extern "C" {
void *fn_801ABCB8(){
 if(!igTransformRecorder_meta) igTransformRecorder_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTransformRecorder_meta;
}
}
#pragma pop
