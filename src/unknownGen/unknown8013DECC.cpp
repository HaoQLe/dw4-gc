#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013DDC4();
void fn_8013DE00();
void fn_8013DF88();
void fn_80140664();
extern char lbl_8049DCCC[];
extern char lbl_8055F870[8];
extern void *lbl_80563F54;
void fn_8013DEF4();
void *fn_8013DF68();
}
extern "C" {
void fn_8013DECC(){
 fn_80066188((int)fn_8013DEF4);
}
void fn_8013DEF4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F54,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013DF68,(int)lbl_8049DCCC,44,(int)fn_8013DE00,(int)fn_8013DF88,0,(int)lbl_8055F870);
}
void *fn_8013DF68(){return fn_8013DDC4();}
}
#pragma pop
