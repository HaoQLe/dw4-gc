#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igCriMovieData_fieldInit();
void *igCriMovieData_getMeta();
void igCriMovieData_vtableRead();
void igObject_register();
extern char lbl_8041BD54[];
extern char lbl_805343EC[];
void igCriMovieData_register();
void *igCriMovieData_getMetaCall();
}
extern "C" {
void fn_802AC0F8(){
 fn_80066188((int)igCriMovieData_register);
}
void igCriMovieData_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_805343EC,(int)igObject_register,(int)fn_800237D0,(int)igCriMovieData_getMetaCall,(int)lbl_8041BD54,28,(int)igCriMovieData_vtableRead,(int)igCriMovieData_fieldInit,0,0);
}
void *igCriMovieData_getMetaCall(){return igCriMovieData_getMeta();}
}
#pragma pop
