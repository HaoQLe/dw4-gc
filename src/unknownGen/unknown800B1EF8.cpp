#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igProjectionMatrixAttr_fieldInit();
void *igProjectionMatrixAttr_getMeta();
void igProjectionMatrixAttr_vtableRead();
void igVisualAttribute_register();
extern char igProjectionMatrixAttr_className[];
extern void *igProjectionMatrixAttr_meta;
void igProjectionMatrixAttr_register();
void *igProjectionMatrixAttr_getMetaCall();
}
extern "C" {
void igProjectionMatrixAttr_registerNow(){
 meta_registerNow((int)igProjectionMatrixAttr_register);
}
void igProjectionMatrixAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igProjectionMatrixAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igProjectionMatrixAttr_getMetaCall,(int)igProjectionMatrixAttr_className,76,(int)igProjectionMatrixAttr_vtableRead,(int)igProjectionMatrixAttr_fieldInit,0,0);
}
void *igProjectionMatrixAttr_getMetaCall(){return igProjectionMatrixAttr_getMeta();}
}
#pragma pop
