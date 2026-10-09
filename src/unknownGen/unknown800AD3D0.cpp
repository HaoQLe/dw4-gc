#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igVertexBlendMatrixAttr_fieldInit();
void *igVertexBlendMatrixAttr_getMeta();
void igVertexBlendMatrixAttr_vtableRead();
void igVisualAttribute_register();
extern char lbl_80478118[];
extern void *lbl_805624A0;
void igVertexBlendMatrixAttr_register();
void *igVertexBlendMatrixAttr_getMetaCall();
}
extern "C" {
void fn_800AD3D0(){
 fn_80066188((int)igVertexBlendMatrixAttr_register);
}
void igVertexBlendMatrixAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624A0,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igVertexBlendMatrixAttr_getMetaCall,(int)lbl_80478118,80,(int)igVertexBlendMatrixAttr_vtableRead,(int)igVertexBlendMatrixAttr_fieldInit,0,0);
}
void *igVertexBlendMatrixAttr_getMetaCall(){return igVertexBlendMatrixAttr_getMeta();}
}
#pragma pop
