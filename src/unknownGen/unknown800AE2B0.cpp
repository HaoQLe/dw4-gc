#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igTextureMatrixAttr_fieldInit();
void *igTextureMatrixAttr_getMeta();
void igTextureMatrixAttr_vtableRead();
void igVisualAttribute_register();
extern char lbl_804781C8[];
extern void *lbl_805624E8;
void igTextureMatrixAttr_register();
void *igTextureMatrixAttr_getMetaCall();
}
extern "C" {
void fn_800AE2B0(){
 fn_80066188((int)igTextureMatrixAttr_register);
}
void igTextureMatrixAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624E8,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureMatrixAttr_getMetaCall,(int)lbl_804781C8,84,(int)igTextureMatrixAttr_vtableRead,(int)igTextureMatrixAttr_fieldInit,0,0);
}
void *igTextureMatrixAttr_getMetaCall(){return igTextureMatrixAttr_getMeta();}
}
#pragma pop
