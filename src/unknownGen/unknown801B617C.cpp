#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igAttrSet_register();
void igPlanarShadowShader_fieldInit();
void *igPlanarShadowShader_getMeta();
void igPlanarShadowShader_vtableRead();
extern char lbl_804ADA5C[];
extern char igPlanarShadowShader_className[];
extern void *igPlanarShadowShader_meta;
extern void *igAttrSet_meta;
void igPlanarShadowShader_register();
void *igPlanarShadowShader_getMetaCall();
void *fn_801B623C();
}
extern "C" {
void igPlanarShadowShader_registerNow(){
 meta_registerNow((int)igPlanarShadowShader_register);
}
void igPlanarShadowShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igPlanarShadowShader_meta,(int)igAttrSet_register,(int)fn_801B623C,(int)igPlanarShadowShader_getMetaCall,(int)igPlanarShadowShader_className,112,(int)igPlanarShadowShader_vtableRead,(int)igPlanarShadowShader_fieldInit,0,(int)lbl_804ADA5C);
}
void *igPlanarShadowShader_getMetaCall(){return igPlanarShadowShader_getMeta();}
void *fn_801B623C(){return igAttrSet_meta;}
}
#pragma pop
