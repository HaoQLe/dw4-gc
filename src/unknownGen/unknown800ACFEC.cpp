#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igVertexBlendMatrixListAttr_fieldInit();
void *igVertexBlendMatrixListAttr_getMeta();
void igVertexBlendMatrixListAttr_vtableRead();
void igVisualAttribute_register();
extern char igVertexBlendMatrixListAttr_className[];
extern char igVertexBlendMatrixListAttr_dependencies[8];
extern void *igVertexBlendMatrixListAttr_meta;
void igVertexBlendMatrixListAttr_register();
void *igVertexBlendMatrixListAttr_getMetaCall();
}
extern "C" {
void igVertexBlendMatrixListAttr_arkRegister(){
 meta_registerNow((int)igVertexBlendMatrixListAttr_register);
}
void igVertexBlendMatrixListAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVertexBlendMatrixListAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igVertexBlendMatrixListAttr_getMetaCall,(int)igVertexBlendMatrixListAttr_className,156,(int)igVertexBlendMatrixListAttr_vtableRead,(int)igVertexBlendMatrixListAttr_fieldInit,0,(int)igVertexBlendMatrixListAttr_dependencies);
}
void *igVertexBlendMatrixListAttr_getMetaCall(){return igVertexBlendMatrixListAttr_getMeta();}
}
#pragma pop
