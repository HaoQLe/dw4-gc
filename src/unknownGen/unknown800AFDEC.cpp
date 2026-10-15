#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igTexGenMatrixAttr_fieldInit();
void *igTexGenMatrixAttr_getMeta();
void igTexGenMatrixAttr_vtableRead();
void igVisualAttribute_register();
extern char igTexGenMatrixAttr_className[];
extern void *igTexGenMatrixAttr_meta;
void igTexGenMatrixAttr_register();
void *igTexGenMatrixAttr_getMetaCall();
}
extern "C" {
void igTexGenMatrixAttr_arkRegister(){
 meta_registerNow((int)igTexGenMatrixAttr_register);
}
void igTexGenMatrixAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTexGenMatrixAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTexGenMatrixAttr_getMetaCall,(int)igTexGenMatrixAttr_className,80,(int)igTexGenMatrixAttr_vtableRead,(int)igTexGenMatrixAttr_fieldInit,0,0);
}
void *igTexGenMatrixAttr_getMetaCall(){return igTexGenMatrixAttr_getMeta();}
}
#pragma pop
