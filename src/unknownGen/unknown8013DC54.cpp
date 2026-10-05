#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013DB4C();
void fn_8013DB88();
void fn_8013DD10();
void fn_80140664();
extern char lbl_8049DCB0[];
extern char lbl_8055F868[8];
extern void *lbl_80563F4C;
void fn_8013DC7C();
void *fn_8013DCF0();
}
extern "C" {
void fn_8013DC54(){
 fn_80066188((int)fn_8013DC7C);
}
void fn_8013DC7C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F4C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013DCF0,(int)lbl_8049DCB0,44,(int)fn_8013DB88,(int)fn_8013DD10,0,(int)lbl_8055F868);
}
void *fn_8013DCF0(){return fn_8013DB4C();}
}
#pragma pop
