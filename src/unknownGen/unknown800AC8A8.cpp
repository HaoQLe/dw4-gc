#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igVertexShaderAttr_fieldInit();
void *igVertexShaderAttr_getMeta();
void igVertexShaderAttr_vtableRead();
void igVisualAttribute_register();
extern char lbl_80477E04[];
extern char lbl_80477E20[];
extern void *lbl_80562438;
void igVertexShaderAttr_register();
void *igVertexShaderAttr_getMetaCall();
}
extern "C" {
void fn_800AC8A8(){
 fn_80066188((int)igVertexShaderAttr_register);
}
void igVertexShaderAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562438,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igVertexShaderAttr_getMetaCall,(int)lbl_80477E20,60,(int)igVertexShaderAttr_vtableRead,(int)igVertexShaderAttr_fieldInit,0,(int)lbl_80477E04);
}
void *igVertexShaderAttr_getMetaCall(){return igVertexShaderAttr_getMeta();}
}
#pragma pop
