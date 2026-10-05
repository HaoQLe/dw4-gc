#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013F3FC();
void fn_8013F438();
void fn_8013F5C0();
void fn_80140664();
extern char lbl_8049DE00[];
extern char lbl_8055F8B8[8];
extern void *lbl_80563F9C;
void fn_8013F52C();
void *fn_8013F5A0();
}
extern "C" {
void fn_8013F504(){
 fn_80066188((int)fn_8013F52C);
}
void fn_8013F52C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F9C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013F5A0,(int)lbl_8049DE00,44,(int)fn_8013F438,(int)fn_8013F5C0,0,(int)lbl_8055F8B8);
}
void *fn_8013F5A0(){return fn_8013F3FC();}
}
#pragma pop
