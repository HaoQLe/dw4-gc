#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beMovieInfo_getMeta();
void beMovieInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void fn_802C4CE0();
extern char lbl_8041E8E0[];
extern char lbl_80534BCC[];
extern void *lbl_80534BD0;
void beMovieInfo_register();
void *beMovieInfo_getMetaCall();
}
extern "C" {
void fn_802C4A60(){
 fn_80066188((int)beMovieInfo_register);
}
void beMovieInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BCC,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beMovieInfo_getMetaCall,(int)lbl_8041E8E0,28,(int)beMovieInfo_vtableRead,0,0,0);
}
void *beMovieInfo_getMetaCall(){return beMovieInfo_getMeta();}
void *beMovieInfoData_getMeta(){
 if(!lbl_80534BD0 || !(reinterpret_cast<unsigned int *>(lbl_80534BD0)[0x24/4]&4)) fn_802C4CE0();
 return lbl_80534BD0;
}
}
#pragma pop
