#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013EC94();
void fn_8013ECD0();
void fn_8013EE58();
void fn_80140664();
extern char lbl_8049DD94[];
extern char lbl_8055F8A0[8];
extern void *lbl_80563F84;
void fn_8013EDC4();
void *fn_8013EE38();
}
extern "C" {
void fn_8013ED9C(){
 fn_80066188((int)fn_8013EDC4);
}
void fn_8013EDC4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F84,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013EE38,(int)lbl_8049DD94,44,(int)fn_8013ECD0,(int)fn_8013EE58,0,(int)lbl_8055F8A0);
}
void *fn_8013EE38(){return fn_8013EC94();}
}
#pragma pop
