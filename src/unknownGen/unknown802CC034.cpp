#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CBF4C();
void fn_802CBF98();
extern char lbl_8041F2E4[];
extern char lbl_80534F20[];
void fn_802CC05C();
void *fn_802CC0C8();
}
extern "C" {
void fn_802CC034(){
 fn_80066188((int)fn_802CC05C);
}
void fn_802CC05C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F20,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CC0C8,(int)lbl_8041F2E4,12,(int)fn_802CBF98,0,0,0);
}
void *fn_802CC0C8(){return fn_802CBF4C();}
}
#pragma pop
