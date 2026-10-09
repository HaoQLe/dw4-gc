#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beMovieInfoData_fieldInit();
void *beMovieInfoData_getMeta();
void beMovieInfoData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041E8EC[];
extern char lbl_804D0530[];
extern char lbl_80534BD0[];
void beMovieInfoData_register();
void *beMovieInfoData_getMetaCall();
}
extern "C" {
void fn_802C4CE0(){
 fn_80066188((int)beMovieInfoData_register);
}
void beMovieInfoData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BD0,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beMovieInfoData_getMetaCall,(int)lbl_8041E8EC,28,(int)beMovieInfoData_vtableRead,(int)beMovieInfoData_fieldInit,0,(int)lbl_804D0530);
}
void *beMovieInfoData_getMetaCall(){return beMovieInfoData_getMeta();}
}
#pragma pop
