#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_802AA788();
void igMovieRenderer_fieldInit();
void *igMovieRenderer_getMeta();
void igMovieRenderer_vtableRead();
void igRenderer_register();
extern char lbl_8041BF84[];
extern char lbl_804CDD5C[];
extern char lbl_8053446C[];
void igMovieRenderer_register();
void *igMovieRenderer_getMetaCall();
}
extern "C" {
void fn_802AD0DC(){
 fn_80066188((int)igMovieRenderer_register);
}
void igMovieRenderer_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_8053446C,(int)igRenderer_register,(int)fn_8010DF8C,(int)igMovieRenderer_getMetaCall,(int)lbl_8041BF84,16,(int)igMovieRenderer_vtableRead,(int)igMovieRenderer_fieldInit,0,(int)lbl_804CDD5C);
}
void *igMovieRenderer_getMetaCall(){return igMovieRenderer_getMeta();}
}
#pragma pop
