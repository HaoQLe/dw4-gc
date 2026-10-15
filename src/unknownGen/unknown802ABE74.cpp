#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igCriMovieCodec_fieldInit();
void *igCriMovieCodec_getMeta();
void *igCriMovieCodec_parentMeta();
void igCriMovieCodec_vtableRead();
void igMovieCodec_register();
extern char igCriMovieCodec_className[];
extern char lbl_804CDB08[];
extern char igCriMovieCodec_meta[];
void igCriMovieCodec_register();
void *igCriMovieCodec_getMetaCall();
}
extern "C" {
void igCriMovieCodec_registerNow(){
 meta_registerNow((int)igCriMovieCodec_register);
}
void igCriMovieCodec_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igCriMovieCodec_meta,(int)igMovieCodec_register,(int)igCriMovieCodec_parentMeta,(int)igCriMovieCodec_getMetaCall,(int)igCriMovieCodec_className,24,(int)igCriMovieCodec_vtableRead,(int)igCriMovieCodec_fieldInit,0,(int)lbl_804CDB08);
}
void *igCriMovieCodec_getMetaCall(){return igCriMovieCodec_getMeta();}
}
#pragma pop
