#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B3104();
void fn_802B3150();
void fn_802B32F0();
extern char lbl_8041CA30[];
extern char lbl_80534550[];
void fn_802B325C();
void *fn_802B32D0();
}
extern "C" {
void fn_802B3234(){
 fn_80066188((int)fn_802B325C);
}
void fn_802B325C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534550,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802B32D0,(int)lbl_8041CA30,16,(int)fn_802B3150,(int)fn_802B32F0,0,0);
}
void *fn_802B32D0(){return fn_802B3104();}
}
#pragma pop
