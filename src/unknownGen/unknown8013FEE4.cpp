#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013FDDC();
void fn_8013FE18();
void fn_8013FFA0();
void fn_80140664();
extern char lbl_8049DE6C[];
extern char lbl_8055F8D8[8];
extern void *lbl_80563FBC;
void fn_8013FF0C();
void *fn_8013FF80();
}
extern "C" {
void fn_8013FEE4(){
 fn_80066188((int)fn_8013FF0C);
}
void fn_8013FF0C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FBC,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013FF80,(int)lbl_8049DE6C,44,(int)fn_8013FE18,(int)fn_8013FFA0,0,(int)lbl_8055F8D8);
}
void *fn_8013FF80(){return fn_8013FDDC();}
}
#pragma pop
