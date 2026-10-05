#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void *fn_802BEAF8();
void fn_802BEB44();
void fn_802BF3C4();
extern char lbl_8041E054[];
extern char lbl_80534958[];
void fn_802BEC88();
void *fn_802BECF4();
}
extern "C" {
void fn_802BEC60(){
 fn_80066188((int)fn_802BEC88);
}
void fn_802BEC88(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534958,(int)fn_802BF3C4,(int)fn_802BD764,(int)fn_802BECF4,(int)lbl_8041E054,212,(int)fn_802BEB44,0,0,0);
}
void *fn_802BECF4(){return fn_802BEAF8();}
}
#pragma pop
