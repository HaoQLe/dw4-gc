#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013E03C();
void fn_8013E078();
void fn_8013E200();
void fn_80140664();
extern char lbl_8049DCE8[];
extern char lbl_8055F878[8];
extern void *lbl_80563F5C;
void fn_8013E16C();
void *fn_8013E1E0();
}
extern "C" {
void fn_8013E144(){
 fn_80066188((int)fn_8013E16C);
}
void fn_8013E16C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F5C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013E1E0,(int)lbl_8049DCE8,44,(int)fn_8013E078,(int)fn_8013E200,0,(int)lbl_8055F878);
}
void *fn_8013E1E0(){return fn_8013E03C();}
}
#pragma pop
