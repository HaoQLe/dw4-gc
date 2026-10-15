#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_802AA788();
void igMovieRenderer_fieldInit();
void *igMovieRenderer_getMeta();
void igMovieRenderer_vtableRead();
void igRenderer_register();
extern char igMovieRenderer_className[];
extern char igMovieRenderer_dependencies[];
extern char igMovieRenderer_meta[];
void igMovieRenderer_register();
void *igMovieRenderer_getMetaCall();
}
extern "C" {
void igMovieRenderer_arkRegister(){
 meta_registerNow((int)igMovieRenderer_register);
}
void igMovieRenderer_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igMovieRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igMovieRenderer_getMetaCall,(int)igMovieRenderer_className,16,(int)igMovieRenderer_vtableRead,(int)igMovieRenderer_fieldInit,0,(int)igMovieRenderer_dependencies);
}
void *igMovieRenderer_getMetaCall(){return igMovieRenderer_getMeta();}
}
#pragma pop
