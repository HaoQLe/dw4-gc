#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igMovieCodec_arkRegister();
void *igMovieCodecList_getMeta();
void igMovieCodecList_vtableRead();
void igObjectList_register();
extern char igMovieCodecList_className[];
extern char igMovieCodecList_dependencies[];
extern char igMovieCodecList_meta[];
extern void *igMovieCodec_meta;
extern void *lbl_805621F4;
void igMovieCodecList_register();
void *igMovieCodecList_getMetaCall();
}
extern "C" {
void igMovieCodecList_arkRegister(){
 meta_registerNow((int)igMovieCodecList_register);
}
void igMovieCodecList_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igMovieCodecList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMovieCodecList_getMetaCall,(int)igMovieCodecList_className,20,(int)igMovieCodecList_vtableRead,0,0,(int)igMovieCodecList_dependencies);
}
void *igMovieCodecList_getMetaCall(){return igMovieCodecList_getMeta();}
void *igMovieCodec_metaObject(){
 if(!igMovieCodec_meta) igMovieCodec_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMovieCodec_meta;
}
void *igMovieCodec_getMeta(){
 if(!igMovieCodec_meta || !(reinterpret_cast<unsigned int *>(igMovieCodec_meta)[0x24/4]&4)) igMovieCodec_arkRegister();
 return igMovieCodec_meta;
}
}
#pragma pop
