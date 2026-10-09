#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800B43D8();
void igModelViewMatrixAttr_fieldInit();
void *igModelViewMatrixAttr_getMeta();
void igModelViewMatrixAttr_vtableRead();
void igVisualAttribute_register();
extern char lbl_804790E8[];
extern void *lbl_8056276C;
void igModelViewMatrixAttr_register();
void *igModelViewMatrixAttr_getMetaCall();
}
extern "C" {
void fn_800B4238(){
 fn_80066188((int)igModelViewMatrixAttr_register);
}
void igModelViewMatrixAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056276C,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igModelViewMatrixAttr_getMetaCall,(int)lbl_804790E8,76,(int)igModelViewMatrixAttr_vtableRead,(int)igModelViewMatrixAttr_fieldInit,(int)fn_800B43D8,0);
}
void *igModelViewMatrixAttr_getMetaCall(){return igModelViewMatrixAttr_getMeta();}
}
#pragma pop
