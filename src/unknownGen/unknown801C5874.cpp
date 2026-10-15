#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igCartoonShader_fieldInit();
void *igCartoonShader_getMeta();
void igCartoonShader_vtableRead();
void igGroup_register();
extern char igCartoonShader_dependencies[];
extern char igCartoonShader_className[];
extern void *igCartoonShader_meta;
void igCartoonShader_register();
void *igCartoonShader_getMetaCall();
}
extern "C" {
void igCartoonShader_arkRegister(){
 meta_registerNow((int)igCartoonShader_register);
}
void igCartoonShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igCartoonShader_meta,(int)igGroup_register,(int)fn_8011148C,(int)igCartoonShader_getMetaCall,(int)igCartoonShader_className,160,(int)igCartoonShader_vtableRead,(int)igCartoonShader_fieldInit,0,(int)igCartoonShader_dependencies);
}
void *igCartoonShader_getMetaCall(){return igCartoonShader_getMeta();}
}
#pragma pop
