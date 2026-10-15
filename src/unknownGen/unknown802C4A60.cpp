#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beMovieInfo_getMeta();
void beMovieInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beMovieInfoData_arkRegister();
extern char beMovieInfo_className[];
extern char beMovieInfo_meta[];
extern void *beMovieInfoData_meta;
void beMovieInfo_register();
void *beMovieInfo_getMetaCall();
}
extern "C" {
void beMovieInfo_arkRegister(){
 meta_registerNow((int)beMovieInfo_register);
}
void beMovieInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMovieInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beMovieInfo_getMetaCall,(int)beMovieInfo_className,28,(int)beMovieInfo_vtableRead,0,0,0);
}
void *beMovieInfo_getMetaCall(){return beMovieInfo_getMeta();}
void *beMovieInfoData_getMeta(){
 if(!beMovieInfoData_meta || !(reinterpret_cast<unsigned int *>(beMovieInfoData_meta)[0x24/4]&4)) beMovieInfoData_arkRegister();
 return beMovieInfoData_meta;
}
}
#pragma pop
