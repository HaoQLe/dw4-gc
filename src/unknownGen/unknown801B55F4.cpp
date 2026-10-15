#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801B4E68();
void igGroup_register();
void igProjectiveShadowShader_fieldInit();
void *igProjectiveShadowShader_getMeta();
extern char lbl_804AD58C[];
extern char igProjectiveShadowShader_className[];
extern void *igProjectiveShadowShader_meta;
void igProjectiveShadowShader_register();
void *igProjectiveShadowShader_getMetaCall();
}
extern "C" {
void igProjectiveShadowShader_registerNow(){
 meta_registerNow((int)igProjectiveShadowShader_register);
}
void igProjectiveShadowShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igProjectiveShadowShader_meta,(int)igGroup_register,(int)fn_8011148C,(int)igProjectiveShadowShader_getMetaCall,(int)igProjectiveShadowShader_className,240,(int)fn_801B4E68,(int)igProjectiveShadowShader_fieldInit,0,(int)lbl_804AD58C);
}
void *igProjectiveShadowShader_getMetaCall(){return igProjectiveShadowShader_getMeta();}
}
#pragma pop
