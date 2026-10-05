#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_80140CC0();
void fn_80140CFC();
void fn_80140EA4();
extern char lbl_8049E008[];
extern void *lbl_8056400C;
void fn_80140E14();
void *fn_80140E84();
}
extern "C" {
void fn_80140DEC(){
 fn_80066188((int)fn_80140E14);
}
void fn_80140E14(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056400C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80140E84,(int)lbl_8049E008,56,(int)fn_80140CFC,(int)fn_80140EA4,0,0);
}
void *fn_80140E84(){return fn_80140CC0();}
}
#pragma pop
