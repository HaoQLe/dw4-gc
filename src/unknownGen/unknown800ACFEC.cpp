#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igVertexBlendMatrixListAttr_fieldInit();
void *igVertexBlendMatrixListAttr_getMeta();
void igVertexBlendMatrixListAttr_vtableRead();
void igVisualAttribute_register();
extern char lbl_80477FD8[];
extern char lbl_8055DEEC[8];
extern void *lbl_8056247C;
void igVertexBlendMatrixListAttr_register();
void *igVertexBlendMatrixListAttr_getMetaCall();
}
extern "C" {
void fn_800ACFEC(){
 fn_80066188((int)igVertexBlendMatrixListAttr_register);
}
void igVertexBlendMatrixListAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056247C,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igVertexBlendMatrixListAttr_getMetaCall,(int)lbl_80477FD8,156,(int)igVertexBlendMatrixListAttr_vtableRead,(int)igVertexBlendMatrixListAttr_fieldInit,0,(int)lbl_8055DEEC);
}
void *igVertexBlendMatrixListAttr_getMetaCall(){return igVertexBlendMatrixListAttr_getMeta();}
}
#pragma pop
