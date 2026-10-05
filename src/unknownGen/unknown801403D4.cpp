#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_801402CC();
void fn_80140308();
void fn_80140490();
void fn_80140664();
extern char lbl_8049DEA4[];
extern char lbl_8055F8E8[8];
extern void *lbl_80563FCC;
void fn_801403FC();
void *fn_80140470();
}
extern "C" {
void fn_801403D4(){
 fn_80066188((int)fn_801403FC);
}
void fn_801403FC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FCC,(int)fn_80140664,(int)fn_8013BF68,(int)fn_80140470,(int)lbl_8049DEA4,44,(int)fn_80140308,(int)fn_80140490,0,(int)lbl_8055F8E8);
}
void *fn_80140470(){return fn_801402CC();}
}
#pragma pop
