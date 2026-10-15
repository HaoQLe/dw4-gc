#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igMultiTextureShader_arkRegister();
extern void *lbl_805621F4;
extern void *igMultiTextureShader_meta;
}
extern "C" {
void *fn_801B7824(){
 if(!igMultiTextureShader_meta) igMultiTextureShader_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMultiTextureShader_meta;
}
void *igMultiTextureShader_getMeta(){
 if(!igMultiTextureShader_meta || !(reinterpret_cast<unsigned int *>(igMultiTextureShader_meta)[0x24/4]&4)) igMultiTextureShader_arkRegister();
 return igMultiTextureShader_meta;
}
}
#pragma pop
