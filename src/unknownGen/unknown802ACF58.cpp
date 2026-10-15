#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igMovieRenderer_arkRegister();
extern void *igMovieRenderer_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igMovieRenderer_metaObject(){
 if(!igMovieRenderer_meta) igMovieRenderer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMovieRenderer_meta;
}
void *igMovieRenderer_getMeta(){
 if(!igMovieRenderer_meta || !(reinterpret_cast<unsigned int *>(igMovieRenderer_meta)[0x24/4]&4)) igMovieRenderer_arkRegister();
 return igMovieRenderer_meta;
}
}
#pragma pop
