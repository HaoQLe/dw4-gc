#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013F674();
void fn_8013F6B0();
void fn_8013F838();
void fn_80140664();
extern char lbl_8049DE1C[];
extern char lbl_8055F8C0[8];
extern void *lbl_80563FA4;
void fn_8013F7A4();
void *fn_8013F818();
}
extern "C" {
void fn_8013F77C(){
 fn_80066188((int)fn_8013F7A4);
}
void fn_8013F7A4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FA4,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013F818,(int)lbl_8049DE1C,44,(int)fn_8013F6B0,(int)fn_8013F838,0,(int)lbl_8055F8C0);
}
void *fn_8013F818(){return fn_8013F674();}
}
#pragma pop
