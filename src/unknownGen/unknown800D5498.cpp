#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D37D0();
void *fn_800D5128();
void *fn_800D5390();
void fn_800D53CC();
void fn_800D5550();
extern char lbl_8048A464[];
extern void *lbl_80563090;
void fn_800D54C0();
void *fn_800D5530();
}
extern "C" {
void fn_800D5498(){
 fn_80066188((int)fn_800D54C0);
}
void fn_800D54C0(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563090,(int)fn_800D37D0,(int)fn_800D5128,(int)fn_800D5530,(int)lbl_8048A464,76,(int)fn_800D53CC,(int)fn_800D5550,0,0);
}
void *fn_800D5530(){return fn_800D5390();}
}
#pragma pop
