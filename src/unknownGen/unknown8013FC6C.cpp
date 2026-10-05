#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013FB64();
void fn_8013FBA0();
void fn_8013FD28();
void fn_80140664();
extern char lbl_8049DE54[];
extern char lbl_8055F8D0[8];
extern void *lbl_80563FB4;
void fn_8013FC94();
void *fn_8013FD08();
}
extern "C" {
void fn_8013FC6C(){
 fn_80066188((int)fn_8013FC94);
}
void fn_8013FC94(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FB4,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013FD08,(int)lbl_8049DE54,44,(int)fn_8013FBA0,(int)fn_8013FD28,0,(int)lbl_8055F8D0);
}
void *fn_8013FD08(){return fn_8013FB64();}
}
#pragma pop
