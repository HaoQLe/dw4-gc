#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igPlanarShadowShader_arkRegister();
extern void *lbl_805621F4;
extern void *igPlanarShadowShader_meta;
}
extern "C" {
void *fn_801B5CFC(){
 if(!igPlanarShadowShader_meta) igPlanarShadowShader_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPlanarShadowShader_meta;
}
}
#pragma pop
