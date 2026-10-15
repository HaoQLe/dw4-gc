#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igVertexShaderAttr_fieldInit();
void *igVertexShaderAttr_getMeta();
void igVertexShaderAttr_vtableRead();
void igVisualAttribute_register();
extern char igVertexShaderAttr_dependencies[];
extern char igVertexShaderAttr_className[];
extern void *igVertexShaderAttr_meta;
void igVertexShaderAttr_register();
void *igVertexShaderAttr_getMetaCall();
}
extern "C" {
void igVertexShaderAttr_arkRegister(){
 meta_registerNow((int)igVertexShaderAttr_register);
}
void igVertexShaderAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVertexShaderAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igVertexShaderAttr_getMetaCall,(int)igVertexShaderAttr_className,60,(int)igVertexShaderAttr_vtableRead,(int)igVertexShaderAttr_fieldInit,0,(int)igVertexShaderAttr_dependencies);
}
void *igVertexShaderAttr_getMetaCall(){return igVertexShaderAttr_getMeta();}
}
#pragma pop
