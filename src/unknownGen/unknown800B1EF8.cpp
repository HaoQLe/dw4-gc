#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igProjectionMatrixAttr_fieldInit();
void *igProjectionMatrixAttr_getMeta();
void igProjectionMatrixAttr_vtableRead();
void igVisualAttribute_register();
extern char lbl_80478CA4[];
extern void *lbl_805626A0;
void igProjectionMatrixAttr_register();
void *igProjectionMatrixAttr_getMetaCall();
}
extern "C" {
void fn_800B1EF8(){
 fn_80066188((int)igProjectionMatrixAttr_register);
}
void igProjectionMatrixAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626A0,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igProjectionMatrixAttr_getMetaCall,(int)lbl_80478CA4,76,(int)igProjectionMatrixAttr_vtableRead,(int)igProjectionMatrixAttr_fieldInit,0,0);
}
void *igProjectionMatrixAttr_getMetaCall(){return igProjectionMatrixAttr_getMeta();}
}
#pragma pop
