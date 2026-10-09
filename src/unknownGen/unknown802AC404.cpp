#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void fn_802AC614();
void *igMovieInfoList_getMeta();
void igMovieInfoList_vtableRead();
void igObjectList_register();
extern char lbl_8041BD9C[];
extern char lbl_804CDB94[];
extern char lbl_80534404[];
extern void *lbl_80534408;
extern void *lbl_805621F4;
void igMovieInfoList_register();
void *igMovieInfoList_getMetaCall();
}
extern "C" {
void fn_802AC404(){
 fn_80066188((int)igMovieInfoList_register);
}
void igMovieInfoList_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534404,(int)igObjectList_register,(int)fn_80024180,(int)igMovieInfoList_getMetaCall,(int)lbl_8041BD9C,20,(int)igMovieInfoList_vtableRead,0,0,(int)lbl_804CDB94);
}
void *igMovieInfoList_getMetaCall(){return igMovieInfoList_getMeta();}
void *fn_802AC4C0(void *object){
 fn_802AC614();
 return fn_8006546C(lbl_80534408,object);
}
void *fn_802AC500(){
 if(!lbl_80534408) lbl_80534408=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534408;
}
void *igTextureBindAttrList_getMeta(){
 if(!lbl_80534408 || !(reinterpret_cast<unsigned int *>(lbl_80534408)[0x24/4]&4)) fn_802AC614();
 return lbl_80534408;
}
}
#pragma pop
