#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igShader_fieldInit();
void *igShader_getMeta();
void igShader_vtableRead();
extern char lbl_804ACC04[];
extern char igShader_className[];
extern void *igShader_meta;
void igShader_register();
void *igShader_getMetaCall();
}
extern "C" {
void igShader_registerNow(){
 meta_registerNow((int)igShader_register);
}
void igShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igShader_meta,(int)igGroup_register,(int)fn_8011148C,(int)igShader_getMetaCall,(int)igShader_className,60,(int)igShader_vtableRead,(int)igShader_fieldInit,0,(int)lbl_804ACC04);
}
void *igShader_getMetaCall(){return igShader_getMeta();}
}
#pragma pop
