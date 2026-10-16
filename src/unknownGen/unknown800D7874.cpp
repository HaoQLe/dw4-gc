#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igGamecubeVertexArray1_1_arkRegister();
extern void *lbl_805621F4;
extern void *igGamecubeVertexArray1_1_meta;
}
extern "C" {
void *fn_800D7874(){
 if(!igGamecubeVertexArray1_1_meta) igGamecubeVertexArray1_1_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGamecubeVertexArray1_1_meta;
}
}
#pragma pop
