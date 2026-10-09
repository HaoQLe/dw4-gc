#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void fn_802ABE74();
void *igMovieCodec_getMeta();
void igMovieCodec_vtableRead();
void igNamedObject_register();
extern char lbl_8041BD04[];
extern char lbl_805343D8[];
extern void *lbl_805343DC;
void igMovieCodec_register();
void *igMovieCodec_getMetaCall();
}
extern "C" {
void fn_802ABC34(){
 fn_80066188((int)igMovieCodec_register);
}
void igMovieCodec_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_805343D8,(int)igNamedObject_register,(int)fn_80023CF4,(int)igMovieCodec_getMetaCall,(int)lbl_8041BD04,12,(int)igMovieCodec_vtableRead,0,0,0);
}
void *igMovieCodec_getMetaCall(){return igMovieCodec_getMeta();}
void *igCriMovieCodec_getMeta(){
 if(!lbl_805343DC || !(reinterpret_cast<unsigned int *>(lbl_805343DC)[0x24/4]&4)) fn_802ABE74();
 return lbl_805343DC;
}
}
#pragma pop
