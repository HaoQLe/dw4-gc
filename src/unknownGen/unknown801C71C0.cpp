#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B623C();
void igAttrSet_register();
void igBlendMatrixSelect_fieldInit();
void *igBlendMatrixSelect_getMeta();
void igBlendMatrixSelect_vtableRead();
extern char igBlendMatrixSelect_className[];
extern char igBlendMatrixSelect_dependencies[8];
extern void *igBlendMatrixSelect_meta;
void igBlendMatrixSelect_register();
void *igBlendMatrixSelect_getMetaCall();
}
extern "C" {
void igBlendMatrixSelect_arkRegister(){
 meta_registerNow((int)igBlendMatrixSelect_register);
}
void igBlendMatrixSelect_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igBlendMatrixSelect_meta,(int)igAttrSet_register,(int)fn_801B623C,(int)igBlendMatrixSelect_getMetaCall,(int)igBlendMatrixSelect_className,172,(int)igBlendMatrixSelect_vtableRead,(int)igBlendMatrixSelect_fieldInit,0,(int)igBlendMatrixSelect_dependencies);
}
void *igBlendMatrixSelect_getMetaCall(){return igBlendMatrixSelect_getMeta();}
}
#pragma pop
