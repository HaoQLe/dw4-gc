#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igBumpMapShader_fieldInit();
void *igBumpMapShader_getMeta();
void igBumpMapShader_vtableRead();
void igGroup_register();
extern char lbl_804B0F90[];
extern char lbl_804B0FBC[];
extern void *lbl_80565230;
void igBumpMapShader_register();
void *igBumpMapShader_getMetaCall();
}
extern "C" {
void fn_801C675C(){
 fn_80066188((int)igBumpMapShader_register);
}
void igBumpMapShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565230,(int)igGroup_register,(int)fn_8011148C,(int)igBumpMapShader_getMetaCall,(int)lbl_804B0FBC,200,(int)igBumpMapShader_vtableRead,(int)igBumpMapShader_fieldInit,0,(int)lbl_804B0F90);
}
void *igBumpMapShader_getMetaCall(){return igBumpMapShader_getMeta();}
}
#pragma pop
