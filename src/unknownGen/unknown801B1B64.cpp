#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igShader_fieldInit();
void *igShader_getMeta();
void igShader_vtableRead();
extern char lbl_804ACC04[];
extern char lbl_804ACC18[];
extern void *lbl_8056491C;
void igShader_register();
void *igShader_getMetaCall();
}
extern "C" {
void fn_801B1B64(){
 fn_80066188((int)igShader_register);
}
void igShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056491C,(int)igGroup_register,(int)fn_8011148C,(int)igShader_getMetaCall,(int)lbl_804ACC18,60,(int)igShader_vtableRead,(int)igShader_fieldInit,0,(int)lbl_804ACC04);
}
void *igShader_getMetaCall(){return igShader_getMeta();}
}
#pragma pop
