#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void *fn_802AC344();
void fn_802AC390();
extern char lbl_8041BD9C[];
extern char lbl_804CDB94[];
extern char lbl_80534404[];
void fn_802AC42C();
void *fn_802AC4A0();
}
extern "C" {
void fn_802AC404(){
 fn_80066188((int)fn_802AC42C);
}
void fn_802AC42C(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534404,(int)fn_8002907C,(int)fn_80024180,(int)fn_802AC4A0,(int)lbl_8041BD9C,20,(int)fn_802AC390,0,0,(int)lbl_804CDB94);
}
void *fn_802AC4A0(){return fn_802AC344();}
}
#pragma pop
