#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void *igVertexBlendStateAttr_registerNow();
void igVertexBlendMatrixListAttr_registerNow();
void *igVertexBlendMatrixAttr_registerNow();
void *igTextureMatrixAttr_registerNow();
void *igTextureBindAttr_registerNow();
void *igModelViewMatrixAttr_registerNow();
void *igAttr_registerNow();
void *igTraversalFunctionList_create(void *);
extern void *lbl_805621F0;
extern void *lbl_805656E4;
}
extern "C" {
void fn_801DB5DC(){
 void *value0=fn_800607F4(lbl_805621F0);
 void *value1=igTraversalFunctionList_create(value0);
 lbl_805656E4=value1;
 void *value2=igAttr_registerNow();
 void *value3=igTextureBindAttr_registerNow();
 void *value4=igModelViewMatrixAttr_registerNow();
 void *value5=igVertexBlendMatrixAttr_registerNow();
 void *value6=igTextureMatrixAttr_registerNow();
 void *value7=igVertexBlendStateAttr_registerNow();
 igVertexBlendMatrixListAttr_registerNow();
}
}
#pragma pop
