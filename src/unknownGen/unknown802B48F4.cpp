#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B4834();
void fn_802B4880();
extern char lbl_8041CCB0[];
extern char lbl_804CF07C[];
extern char lbl_80534604[];
void fn_802B491C();
void *fn_802B4990();
}
extern "C" {
void fn_802B48F4(){
 fn_80066188((int)fn_802B491C);
}
void fn_802B491C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534604,(int)fn_8002907C,(int)fn_80024180,(int)fn_802B4990,(int)lbl_8041CCB0,20,(int)fn_802B4880,0,0,(int)lbl_804CF07C);
}
void *fn_802B4990(){return fn_802B4834();}
}
#pragma pop
