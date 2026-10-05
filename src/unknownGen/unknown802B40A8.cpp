#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B3FE8();
void fn_802B4034();
extern char lbl_8041CAF8[];
extern char lbl_804CEE54[];
extern char lbl_80534578[];
void fn_802B40D0();
void *fn_802B4144();
}
extern "C" {
void fn_802B40A8(){
 fn_80066188((int)fn_802B40D0);
}
void fn_802B40D0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534578,(int)fn_8002907C,(int)fn_80024180,(int)fn_802B4144,(int)lbl_8041CAF8,20,(int)fn_802B4034,0,0,(int)lbl_804CEE54);
}
void *fn_802B4144(){return fn_802B3FE8();}
}
#pragma pop
