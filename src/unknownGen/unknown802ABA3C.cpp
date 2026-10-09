#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void fn_802ABC34();
void *igMovieCodecList_getMeta();
void igMovieCodecList_vtableRead();
void igObjectList_register();
extern char lbl_8041BCF0[];
extern char lbl_804CDB00[];
extern char lbl_805343D4[];
extern void *lbl_805343D8;
extern void *lbl_805621F4;
void igMovieCodecList_register();
void *igMovieCodecList_getMetaCall();
}
extern "C" {
void fn_802ABA3C(){
 fn_80066188((int)igMovieCodecList_register);
}
void igMovieCodecList_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_805343D4,(int)igObjectList_register,(int)fn_80024180,(int)igMovieCodecList_getMetaCall,(int)lbl_8041BCF0,20,(int)igMovieCodecList_vtableRead,0,0,(int)lbl_804CDB00);
}
void *igMovieCodecList_getMetaCall(){return igMovieCodecList_getMeta();}
void *fn_802ABAF8(){
 if(!lbl_805343D8) lbl_805343D8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805343D8;
}
void *igMovieCodec_getMeta(){
 if(!lbl_805343D8 || !(reinterpret_cast<unsigned int *>(lbl_805343D8)[0x24/4]&4)) fn_802ABC34();
 return lbl_805343D8;
}
}
#pragma pop
