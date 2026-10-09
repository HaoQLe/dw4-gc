#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801B4E68();
void igGroup_register();
void igProjectiveShadowShader_fieldInit();
void *igProjectiveShadowShader_getMeta();
extern char lbl_804AD58C[];
extern char lbl_804AD5D4[];
extern void *lbl_80564A78;
void igProjectiveShadowShader_register();
void *igProjectiveShadowShader_getMetaCall();
}
extern "C" {
void fn_801B55F4(){
 fn_80066188((int)igProjectiveShadowShader_register);
}
void igProjectiveShadowShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A78,(int)igGroup_register,(int)fn_8011148C,(int)igProjectiveShadowShader_getMetaCall,(int)lbl_804AD5D4,240,(int)fn_801B4E68,(int)igProjectiveShadowShader_fieldInit,0,(int)lbl_804AD58C);
}
void *igProjectiveShadowShader_getMetaCall(){return igProjectiveShadowShader_getMeta();}
}
#pragma pop
