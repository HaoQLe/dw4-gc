#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013E2B4();
void fn_8013E2F0();
void fn_8013E478();
void fn_80140664();
extern char lbl_8049DD08[];
extern char lbl_8055F880[8];
extern void *lbl_80563F64;
void fn_8013E3E4();
void *fn_8013E458();
}
extern "C" {
void fn_8013E3BC(){
 fn_80066188((int)fn_8013E3E4);
}
void fn_8013E3E4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F64,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013E458,(int)lbl_8049DD08,44,(int)fn_8013E2F0,(int)fn_8013E478,0,(int)lbl_8055F880);
}
void *fn_8013E458(){return fn_8013E2B4();}
}
#pragma pop
