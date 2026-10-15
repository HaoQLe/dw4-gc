#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void igMovieCodecList_arkRegister();
extern void *igMovieCodecList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igMovieCodecList_create(void *object){
 igMovieCodecList_arkRegister();
 return meta_createInstance(igMovieCodecList_meta,object);
}
void *igMovieCodecList_metaObject(){
 if(!igMovieCodecList_meta) igMovieCodecList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMovieCodecList_meta;
}
void *igMovieCodecList_getMeta(){
 if(!igMovieCodecList_meta || !(reinterpret_cast<unsigned int *>(igMovieCodecList_meta)[0x24/4]&4)) igMovieCodecList_arkRegister();
 return igMovieCodecList_meta;
}
}
#pragma pop
