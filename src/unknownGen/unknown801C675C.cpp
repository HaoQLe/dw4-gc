#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igBumpMapShader_fieldInit();
void *igBumpMapShader_getMeta();
void igBumpMapShader_vtableRead();
void igGroup_register();
extern char lbl_804B0F90[];
extern char igBumpMapShader_className[];
extern void *igBumpMapShader_meta;
void igBumpMapShader_register();
void *igBumpMapShader_getMetaCall();
}
extern "C" {
void igBumpMapShader_registerNow(){
 meta_registerNow((int)igBumpMapShader_register);
}
void igBumpMapShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igBumpMapShader_meta,(int)igGroup_register,(int)fn_8011148C,(int)igBumpMapShader_getMetaCall,(int)igBumpMapShader_className,200,(int)igBumpMapShader_vtableRead,(int)igBumpMapShader_fieldInit,0,(int)lbl_804B0F90);
}
void *igBumpMapShader_getMetaCall(){return igBumpMapShader_getMeta();}
}
#pragma pop
