#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2F88();
void fn_802B2FD4();
extern char lbl_8041CA1C[];
extern char lbl_804CEDD0[];
extern char lbl_8053454C[];
void fn_802B3070();
void *fn_802B30E4();
}
extern "C" {
void fn_802B3048(){
 fn_80066188((int)fn_802B3070);
}
void fn_802B3070(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053454C,(int)fn_8002907C,(int)fn_80024180,(int)fn_802B30E4,(int)lbl_8041CA1C,20,(int)fn_802B2FD4,0,0,(int)lbl_804CEDD0);
}
void *fn_802B30E4(){return fn_802B2F88();}
}
#pragma pop
