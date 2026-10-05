#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013E52C();
void fn_8013E568();
void fn_8013E6F0();
void fn_80140664();
extern char lbl_8049DD30[];
extern char lbl_8055F888[8];
extern void *lbl_80563F6C;
void fn_8013E65C();
void *fn_8013E6D0();
}
extern "C" {
void fn_8013E634(){
 fn_80066188((int)fn_8013E65C);
}
void fn_8013E65C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F6C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013E6D0,(int)lbl_8049DD30,44,(int)fn_8013E568,(int)fn_8013E6F0,0,(int)lbl_8055F888);
}
void *fn_8013E6D0(){return fn_8013E52C();}
}
#pragma pop
