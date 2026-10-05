#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_80132540();
void fn_8013257C();
void fn_801327DC();
void fn_8013B97C();
extern char lbl_8049C0EC[];
extern char lbl_8055F560[8];
extern void *lbl_80563B58;
void fn_80132748();
void *fn_801327BC();
}
extern "C" {
void fn_80132720(){
 fn_80066188((int)fn_80132748);
}
void fn_80132748(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B58,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801327BC,(int)lbl_8049C0EC,68,(int)fn_8013257C,(int)fn_801327DC,0,(int)lbl_8055F560);
}
void *fn_801327BC(){return fn_80132540();}
}
#pragma pop
