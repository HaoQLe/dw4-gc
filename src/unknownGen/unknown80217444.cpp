#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80216620();
void *fn_802172F0();
void fn_8021732C();
void fn_80217504();
extern char lbl_804BA470[];
extern char lbl_804BA47C[];
extern void *lbl_80565A18;
void fn_8021746C();
void *fn_802174E4();
}
extern "C" {
void fn_80217444(){
 fn_80066188((int)fn_8021746C);
}
void fn_8021746C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A18,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802174E4,(int)lbl_804BA47C,20,(int)fn_8021732C,(int)fn_80217504,0,(int)lbl_804BA470);
}
void *fn_802174E4(){return fn_802172F0();}
}
#pragma pop
