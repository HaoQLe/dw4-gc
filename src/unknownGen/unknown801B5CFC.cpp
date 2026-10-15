#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igPlanarShadowShader_registerNow();
extern void *lbl_805621F4;
extern void *igPlanarShadowShader_meta;
}
extern "C" {
void *fn_801B5CFC(){
 if(!igPlanarShadowShader_meta) igPlanarShadowShader_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPlanarShadowShader_meta;
}
void *igPlanarShadowShader_getMeta(){
 if(!igPlanarShadowShader_meta || !(reinterpret_cast<unsigned int *>(igPlanarShadowShader_meta)[0x24/4]&4)) igPlanarShadowShader_registerNow();
 return igPlanarShadowShader_meta;
}
}
#pragma pop
