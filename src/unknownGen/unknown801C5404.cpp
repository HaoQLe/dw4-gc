#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igCartoonShader_arkRegister();
extern void *lbl_805621F4;
extern void *igCartoonShader_meta;
}
extern "C" {
void *fn_801C5404(){
 if(!igCartoonShader_meta) igCartoonShader_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCartoonShader_meta;
}
void *igCartoonShader_getMeta(){
 if(!igCartoonShader_meta || !(reinterpret_cast<unsigned int *>(igCartoonShader_meta)[0x24/4]&4)) igCartoonShader_arkRegister();
 return igCartoonShader_meta;
}
}
#pragma pop
