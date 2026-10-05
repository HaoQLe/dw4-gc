#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BD764();
void *fn_802BEFB0();
void fn_802BEFFC();
void fn_802BF244();
void fn_802BF3C4();
extern char lbl_8041E074[];
extern char lbl_804CFC80[];
extern char lbl_80534960[];
void fn_802BF1A8();
void *fn_802BF224();
}
extern "C" {
void fn_802BF180(){
 fn_80066188((int)fn_802BF1A8);
}
void fn_802BF1A8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534960,(int)fn_802BF3C4,(int)fn_802BD764,(int)fn_802BF224,(int)lbl_8041E074,224,(int)fn_802BEFFC,(int)fn_802BF244,0,(int)lbl_804CFC80);
}
void *fn_802BF224(){return fn_802BEFB0();}
}
#pragma pop
