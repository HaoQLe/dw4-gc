#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void *igVertexBlendStateAttr_arkRegister();
void igVertexBlendMatrixListAttr_arkRegister();
void *igVertexBlendMatrixAttr_arkRegister();
void *igTextureMatrixAttr_arkRegister();
void *igTextureBindAttr_arkRegister();
void *igModelViewMatrixAttr_arkRegister();
void *igAttr_arkRegister();
void *igTraversalFunctionList_create(void *);
extern void *lbl_805621F0;
extern void *lbl_805656E4;
}
extern "C" {
void fn_801DB5DC(){
 void *value0=fn_800607F4(lbl_805621F0);
 void *value1=igTraversalFunctionList_create(value0);
 lbl_805656E4=value1;
 void *value2=igAttr_arkRegister();
 void *value3=igTextureBindAttr_arkRegister();
 void *value4=igModelViewMatrixAttr_arkRegister();
 void *value5=igVertexBlendMatrixAttr_arkRegister();
 void *value6=igTextureMatrixAttr_arkRegister();
 void *value7=igVertexBlendStateAttr_arkRegister();
 igVertexBlendMatrixListAttr_arkRegister();
}
}
#pragma pop
