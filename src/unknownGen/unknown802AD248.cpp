#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void igMovieManager_arkRegister();
extern void *igMovieManager_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igMovieManager_create(void *object){
 igMovieManager_arkRegister();
 return meta_createInstance(igMovieManager_meta,object);
}
void *igMovieManager_metaObject(){
 if(!igMovieManager_meta) igMovieManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMovieManager_meta;
}
void *igMovieManager_getMeta(){
 if(!igMovieManager_meta || !(reinterpret_cast<unsigned int *>(igMovieManager_meta)[0x24/4]&4)) igMovieManager_arkRegister();
 return igMovieManager_meta;
}
}
#pragma pop
