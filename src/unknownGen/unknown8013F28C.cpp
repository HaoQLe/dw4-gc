#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013F184();
void fn_8013F1C0();
void fn_8013F348();
void fn_80140664();
extern char lbl_8049DDDC[];
extern char lbl_8055F8B0[8];
extern void *lbl_80563F94;
void fn_8013F2B4();
void *fn_8013F328();
}
extern "C" {
void fn_8013F28C(){
 fn_80066188((int)fn_8013F2B4);
}
void fn_8013F2B4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F94,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013F328,(int)lbl_8049DDDC,44,(int)fn_8013F1C0,(int)fn_8013F348,0,(int)lbl_8055F8B0);
}
void *fn_8013F328(){return fn_8013F184();}
}
#pragma pop
