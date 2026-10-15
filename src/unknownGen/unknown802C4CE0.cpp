#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beMovieInfoData_fieldInit();
void *beMovieInfoData_getMeta();
void beMovieInfoData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beMovieInfoData_className[];
extern char beMovieInfoData_dependencies[];
extern char beMovieInfoData_meta[];
void beMovieInfoData_register();
void *beMovieInfoData_getMetaCall();
}
extern "C" {
void beMovieInfoData_arkRegister(){
 meta_registerNow((int)beMovieInfoData_register);
}
void beMovieInfoData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMovieInfoData_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beMovieInfoData_getMetaCall,(int)beMovieInfoData_className,28,(int)beMovieInfoData_vtableRead,(int)beMovieInfoData_fieldInit,0,(int)beMovieInfoData_dependencies);
}
void *beMovieInfoData_getMetaCall(){return beMovieInfoData_getMeta();}
}
#pragma pop
