#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013EF0C();
void fn_8013EF48();
void fn_8013F0D0();
void fn_80140664();
extern char lbl_8049DDC0[];
extern char lbl_8055F8A8[8];
extern void *lbl_80563F8C;
void fn_8013F03C();
void *fn_8013F0B0();
}
extern "C" {
void fn_8013F014(){
 fn_80066188((int)fn_8013F03C);
}
void fn_8013F03C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F8C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013F0B0,(int)lbl_8049DDC0,44,(int)fn_8013EF48,(int)fn_8013F0D0,0,(int)lbl_8055F8A8);
}
void *fn_8013F0B0(){return fn_8013EF0C();}
}
#pragma pop
