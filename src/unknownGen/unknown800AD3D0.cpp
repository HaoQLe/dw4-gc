#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igVertexBlendMatrixAttr_fieldInit();
void *igVertexBlendMatrixAttr_getMeta();
void igVertexBlendMatrixAttr_vtableRead();
void igVisualAttribute_register();
extern char igVertexBlendMatrixAttr_className[];
extern void *igVertexBlendMatrixAttr_meta;
void igVertexBlendMatrixAttr_register();
void *igVertexBlendMatrixAttr_getMetaCall();
}
extern "C" {
void igVertexBlendMatrixAttr_arkRegister(){
 meta_registerNow((int)igVertexBlendMatrixAttr_register);
}
void igVertexBlendMatrixAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVertexBlendMatrixAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igVertexBlendMatrixAttr_getMetaCall,(int)igVertexBlendMatrixAttr_className,80,(int)igVertexBlendMatrixAttr_vtableRead,(int)igVertexBlendMatrixAttr_fieldInit,0,0);
}
void *igVertexBlendMatrixAttr_getMetaCall(){return igVertexBlendMatrixAttr_getMeta();}
}
#pragma pop
