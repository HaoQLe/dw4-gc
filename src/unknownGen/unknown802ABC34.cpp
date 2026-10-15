#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igCriMovieCodec_registerNow();
void *igMovieCodec_getMeta();
void igMovieCodec_vtableRead();
void igNamedObject_register();
extern char igMovieCodec_className[];
extern char igMovieCodec_meta[];
extern void *igCriMovieCodec_meta;
void igMovieCodec_register();
void *igMovieCodec_getMetaCall();
}
extern "C" {
void igMovieCodec_registerNow(){
 meta_registerNow((int)igMovieCodec_register);
}
void igMovieCodec_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igMovieCodec_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igMovieCodec_getMetaCall,(int)igMovieCodec_className,12,(int)igMovieCodec_vtableRead,0,0,0);
}
void *igMovieCodec_getMetaCall(){return igMovieCodec_getMeta();}
void *igCriMovieCodec_getMeta(){
 if(!igCriMovieCodec_meta || !(reinterpret_cast<unsigned int *>(igCriMovieCodec_meta)[0x24/4]&4)) igCriMovieCodec_registerNow();
 return igCriMovieCodec_meta;
}
}
#pragma pop
