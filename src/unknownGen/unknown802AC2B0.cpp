#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void igMovieInfoList_arkRegister();
extern void *igMovieInfoList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igMovieInfoList_create(void *object){
 igMovieInfoList_arkRegister();
 return meta_createInstance(igMovieInfoList_meta,object);
}
void *igMovieInfoList_metaObject(){
 if(!igMovieInfoList_meta) igMovieInfoList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMovieInfoList_meta;
}
void *igMovieInfoList_getMeta(){
 if(!igMovieInfoList_meta || !(reinterpret_cast<unsigned int *>(igMovieInfoList_meta)[0x24/4]&4)) igMovieInfoList_arkRegister();
 return igMovieInfoList_meta;
}
}
#pragma pop
