#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igAttrSet_register();
void igPlanarShadowShader_fieldInit();
void *igPlanarShadowShader_getMeta();
void igPlanarShadowShader_vtableRead();
extern char lbl_804ADA5C[];
extern char lbl_804ADA7C[];
extern void *lbl_80564B3C;
extern void *lbl_80565378;
void igPlanarShadowShader_register();
void *igPlanarShadowShader_getMetaCall();
void *fn_801B623C();
}
extern "C" {
void fn_801B617C(){
 fn_80066188((int)igPlanarShadowShader_register);
}
void igPlanarShadowShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564B3C,(int)igAttrSet_register,(int)fn_801B623C,(int)igPlanarShadowShader_getMetaCall,(int)lbl_804ADA7C,112,(int)igPlanarShadowShader_vtableRead,(int)igPlanarShadowShader_fieldInit,0,(int)lbl_804ADA5C);
}
void *igPlanarShadowShader_getMetaCall(){return igPlanarShadowShader_getMeta();}
void *fn_801B623C(){return lbl_80565378;}
}
#pragma pop
