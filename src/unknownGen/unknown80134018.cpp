#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_80133E9C();
void fn_80133ED8();
void fn_8013A878();
extern char lbl_8049C588[];
extern void *lbl_80563C04;
void fn_80134040();
void *fn_801340A8();
}
extern "C" {
void fn_80134018(){
 fn_80066188((int)fn_80134040);
}
void fn_80134040(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C04,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_801340A8,(int)lbl_8049C588,44,(int)fn_80133ED8,0,0,0);
}
void *fn_801340A8(){return fn_80133E9C();}
}
#pragma pop
