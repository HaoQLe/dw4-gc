#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igTextureMatrixAttr_fieldInit();
void *igTextureMatrixAttr_getMeta();
void igTextureMatrixAttr_vtableRead();
void igVisualAttribute_register();
extern char igTextureMatrixAttr_className[];
extern void *igTextureMatrixAttr_meta;
void igTextureMatrixAttr_register();
void *igTextureMatrixAttr_getMetaCall();
}
extern "C" {
void igTextureMatrixAttr_registerNow(){
 meta_registerNow((int)igTextureMatrixAttr_register);
}
void igTextureMatrixAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureMatrixAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureMatrixAttr_getMetaCall,(int)igTextureMatrixAttr_className,84,(int)igTextureMatrixAttr_vtableRead,(int)igTextureMatrixAttr_fieldInit,0,0);
}
void *igTextureMatrixAttr_getMetaCall(){return igTextureMatrixAttr_getMeta();}
}
#pragma pop
