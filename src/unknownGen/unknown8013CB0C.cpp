#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013CA04();
void fn_8013CA40();
void fn_8013CBC8();
void fn_80140664();
extern char lbl_8049DBA8[];
extern char lbl_8055F830[8];
extern void *lbl_80563F14;
void fn_8013CB34();
void *fn_8013CBA8();
}
extern "C" {
void fn_8013CB0C(){
 fn_80066188((int)fn_8013CB34);
}
void fn_8013CB34(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F14,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013CBA8,(int)lbl_8049DBA8,44,(int)fn_8013CA40,(int)fn_8013CBC8,0,(int)lbl_8055F830);
}
void *fn_8013CBA8(){return fn_8013CA04();}
}
#pragma pop
