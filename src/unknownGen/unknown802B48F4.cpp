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
void fn_802B4A88();
extern char lbl_8041CCB0[];
extern char lbl_804CF07C[];
extern char lbl_80534604[];
extern void *lbl_80534608;
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
void *fn_802B49B0(){
 if(!lbl_80534608 || !(reinterpret_cast<unsigned int *>(lbl_80534608)[0x24/4]&4)) fn_802B4A88();
 return lbl_80534608;
}
}
#pragma pop
