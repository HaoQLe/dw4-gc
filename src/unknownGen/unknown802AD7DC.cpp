#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void *fn_802AD8A0();
void igInsightPlugin_register();
void igMoviePlugin_fieldInit();
void *igMoviePlugin_getMeta();
void igMoviePlugin_vtableRead();
extern char lbl_8041C004[];
extern char lbl_804CDDEC[];
extern char lbl_80534490[];
void igMoviePlugin_register();
void *igMoviePlugin_getMetaCall();
}
extern "C" {
void fn_802AD7DC(){
 fn_80066188((int)igMoviePlugin_register);
}
void igMoviePlugin_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534490,(int)igInsightPlugin_register,(int)fn_802AD8A0,(int)igMoviePlugin_getMetaCall,(int)lbl_8041C004,12,(int)igMoviePlugin_vtableRead,(int)igMoviePlugin_fieldInit,0,(int)lbl_804CDDEC);
}
void *igMoviePlugin_getMetaCall(){return igMoviePlugin_getMeta();}
}
#pragma pop
