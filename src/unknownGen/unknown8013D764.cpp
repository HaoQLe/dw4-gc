#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013D65C();
void fn_8013D698();
void fn_8013D820();
void fn_80140664();
extern char lbl_8049DC68[];
extern char lbl_8055F858[8];
extern void *lbl_80563F3C;
void fn_8013D78C();
void *fn_8013D800();
}
extern "C" {
void fn_8013D764(){
 fn_80066188((int)fn_8013D78C);
}
void fn_8013D78C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F3C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013D800,(int)lbl_8049DC68,44,(int)fn_8013D698,(int)fn_8013D820,0,(int)lbl_8055F858);
}
void *fn_8013D800(){return fn_8013D65C();}
}
#pragma pop
