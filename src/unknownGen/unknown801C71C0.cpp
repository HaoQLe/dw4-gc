#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B623C();
void igAttrSet_register();
void igBlendMatrixSelect_fieldInit();
void *igBlendMatrixSelect_getMeta();
void igBlendMatrixSelect_vtableRead();
extern char lbl_804B13B4[];
extern char lbl_8056081C[8];
extern void *lbl_805652BC;
void igBlendMatrixSelect_register();
void *igBlendMatrixSelect_getMetaCall();
}
extern "C" {
void fn_801C71C0(){
 fn_80066188((int)igBlendMatrixSelect_register);
}
void igBlendMatrixSelect_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805652BC,(int)igAttrSet_register,(int)fn_801B623C,(int)igBlendMatrixSelect_getMetaCall,(int)lbl_804B13B4,172,(int)igBlendMatrixSelect_vtableRead,(int)igBlendMatrixSelect_fieldInit,0,(int)lbl_8056081C);
}
void *igBlendMatrixSelect_getMetaCall(){return igBlendMatrixSelect_getMeta();}
}
#pragma pop
