#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igShader_arkRegister();
extern void *lbl_805621F4;
extern void *igShader_meta;
}
extern "C" {
void *fn_801B183C(){
 if(!igShader_meta) igShader_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igShader_meta;
}
}
#pragma pop
