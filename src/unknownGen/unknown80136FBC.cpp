#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_80136E90();
void fn_80136ECC();
void fn_80137074();
void fn_8013B97C();
extern char lbl_8049CC68[];
extern void *lbl_80563D10;
void fn_80136FE4();
void *fn_80137054();
}
extern "C" {
void fn_80136FBC(){
 fn_80066188((int)fn_80136FE4);
}
void fn_80136FE4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D10,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80137054,(int)lbl_8049CC68,44,(int)fn_80136ECC,(int)fn_80137074,0,0);
}
void *fn_80137054(){return fn_80136E90();}
}
#pragma pop
