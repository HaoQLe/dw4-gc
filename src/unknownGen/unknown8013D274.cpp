#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013D16C();
void fn_8013D1A8();
void fn_8013D330();
void fn_80140664();
extern char lbl_8049DC20[];
extern char lbl_8055F848[8];
extern void *lbl_80563F2C;
void fn_8013D29C();
void *fn_8013D310();
}
extern "C" {
void fn_8013D274(){
 fn_80066188((int)fn_8013D29C);
}
void fn_8013D29C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F2C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013D310,(int)lbl_8049DC20,44,(int)fn_8013D1A8,(int)fn_8013D330,0,(int)lbl_8055F848);
}
void *fn_8013D310(){return fn_8013D16C();}
}
#pragma pop
