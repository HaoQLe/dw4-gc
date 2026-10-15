#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igCriMovieData_fieldInit();
void *igCriMovieData_getMeta();
void igCriMovieData_vtableRead();
void igObject_register();
extern char igCriMovieData_className[];
extern char igCriMovieData_meta[];
void igCriMovieData_register();
void *igCriMovieData_getMetaCall();
}
extern "C" {
void igCriMovieData_registerNow(){
 meta_registerNow((int)igCriMovieData_register);
}
void igCriMovieData_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igCriMovieData_meta,(int)igObject_register,(int)fn_800237D0,(int)igCriMovieData_getMetaCall,(int)igCriMovieData_className,28,(int)igCriMovieData_vtableRead,(int)igCriMovieData_fieldInit,0,0);
}
void *igCriMovieData_getMetaCall(){return igCriMovieData_getMeta();}
}
#pragma pop
