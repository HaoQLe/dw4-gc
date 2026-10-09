#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igCartoonShader_fieldInit();
void *igCartoonShader_getMeta();
void igCartoonShader_vtableRead();
void igGroup_register();
extern char lbl_804B0CCC[];
extern char lbl_804B0CF0[];
extern void *lbl_805651C0;
void igCartoonShader_register();
void *igCartoonShader_getMetaCall();
}
extern "C" {
void fn_801C5874(){
 fn_80066188((int)igCartoonShader_register);
}
void igCartoonShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805651C0,(int)igGroup_register,(int)fn_8011148C,(int)igCartoonShader_getMetaCall,(int)lbl_804B0CF0,160,(int)igCartoonShader_vtableRead,(int)igCartoonShader_fieldInit,0,(int)lbl_804B0CCC);
}
void *igCartoonShader_getMetaCall(){return igCartoonShader_getMeta();}
}
#pragma pop
