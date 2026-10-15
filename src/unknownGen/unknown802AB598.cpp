#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_802A9C04();
void fn_802A9C08();
void igAdxAudio_arkRegister();
extern void *igAdxAudio_meta;
extern void *lbl_805621F4;
}
extern "C" {
void fn_802AB598(){return fn_802A9C04();}
void fn_802AB5B8(){return fn_802A9C08();}
void *igAdxAudio_create(void *object){
 igAdxAudio_arkRegister();
 return meta_createInstance(igAdxAudio_meta,object);
}
void *igAdxAudio_metaObject(){
 if(!igAdxAudio_meta) igAdxAudio_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAdxAudio_meta;
}
void *igAdxAudio_getMeta(){
 if(!igAdxAudio_meta || !(reinterpret_cast<unsigned int *>(igAdxAudio_meta)[0x24/4]&4)) igAdxAudio_arkRegister();
 return igAdxAudio_meta;
}
}
#pragma pop
