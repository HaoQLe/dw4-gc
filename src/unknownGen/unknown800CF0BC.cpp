#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800CEF30();
void fn_800CEF6C();
void fn_800CF17C();
extern char lbl_80488408[];
extern char lbl_80488418[];
extern void *lbl_80562D84;
void fn_800CF0E4();
void *fn_800CF15C();
}
extern "C" {
void fn_800CF0BC(){
 fn_80066188((int)fn_800CF0E4);
}
void fn_800CF0E4(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562D84,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800CF15C,(int)lbl_80488418,24,(int)fn_800CEF6C,(int)fn_800CF17C,0,(int)lbl_80488408);
}
void *fn_800CF15C(){return fn_800CEF30();}
}
#pragma pop
