#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8014F470();
void fn_8014F4AC();
void fn_8014F6E4();
extern char lbl_8049FD3C[];
extern void *lbl_805644A0;
void fn_8014F654();
void *fn_8014F6C4();
}
extern "C" {
void fn_8014F62C(){
 fn_80066188((int)fn_8014F654);
}
void fn_8014F654(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644A0,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014F6C4,(int)lbl_8049FD3C,52,(int)fn_8014F4AC,(int)fn_8014F6E4,0,0);
}
void *fn_8014F6C4(){return fn_8014F470();}
}
#pragma pop
