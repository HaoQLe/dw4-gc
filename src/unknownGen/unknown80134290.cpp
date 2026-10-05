#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_80134114();
void fn_80134150();
void fn_80134348();
void fn_8013A878();
extern char lbl_8049C61C[];
extern void *lbl_80563C0C;
void fn_801342B8();
void *fn_80134328();
}
extern "C" {
void fn_80134290(){
 fn_80066188((int)fn_801342B8);
}
void fn_801342B8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C0C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80134328,(int)lbl_8049C61C,76,(int)fn_80134150,(int)fn_80134348,0,0);
}
void *fn_80134328(){return fn_80134114();}
}
#pragma pop
