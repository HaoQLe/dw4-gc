#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BB384();
void fn_802BB3D0();
void fn_802BB570();
extern char lbl_8041DA28[];
extern char lbl_80534808[];
void fn_802BB4DC();
void *fn_802BB550();
}
extern "C" {
void fn_802BB4B4(){
 fn_80066188((int)fn_802BB4DC);
}
void fn_802BB4DC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534808,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802BB550,(int)lbl_8041DA28,20,(int)fn_802BB3D0,(int)fn_802BB570,0,0);
}
void *fn_802BB550(){return fn_802BB384();}
}
#pragma pop
