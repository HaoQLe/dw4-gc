#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igCriMovieCodec_fieldInit();
void *igCriMovieCodec_getMeta();
void *igCriMovieCodec_parentMeta();
void igCriMovieCodec_vtableRead();
void igMovieCodec_register();
extern char lbl_8041BD14[];
extern char lbl_804CDB08[];
extern char lbl_805343DC[];
void igCriMovieCodec_register();
void *igCriMovieCodec_getMetaCall();
}
extern "C" {
void fn_802ABE74(){
 fn_80066188((int)igCriMovieCodec_register);
}
void igCriMovieCodec_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_805343DC,(int)igMovieCodec_register,(int)igCriMovieCodec_parentMeta,(int)igCriMovieCodec_getMetaCall,(int)lbl_8041BD14,24,(int)igCriMovieCodec_vtableRead,(int)igCriMovieCodec_fieldInit,0,(int)lbl_804CDB08);
}
void *igCriMovieCodec_getMetaCall(){return igCriMovieCodec_getMeta();}
}
#pragma pop
