#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igTexGenMatrixAttr_fieldInit();
void *igTexGenMatrixAttr_getMeta();
void igTexGenMatrixAttr_vtableRead();
void igVisualAttribute_register();
extern char lbl_804786C8[];
extern void *lbl_805625A4;
void igTexGenMatrixAttr_register();
void *igTexGenMatrixAttr_getMetaCall();
}
extern "C" {
void fn_800AFDEC(){
 fn_80066188((int)igTexGenMatrixAttr_register);
}
void igTexGenMatrixAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625A4,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTexGenMatrixAttr_getMetaCall,(int)lbl_804786C8,80,(int)igTexGenMatrixAttr_vtableRead,(int)igTexGenMatrixAttr_fieldInit,0,0);
}
void *igTexGenMatrixAttr_getMetaCall(){return igTexGenMatrixAttr_getMeta();}
}
#pragma pop
