#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BD764();
void *fn_802BE0F8();
void fn_802BE144();
void fn_802BE38C();
void fn_802BF3C4();
extern char lbl_8041DFB8[];
extern char lbl_804CFBF4[];
extern char lbl_80534930[];
void fn_802BE2F0();
void *fn_802BE36C();
}
extern "C" {
void fn_802BE2C8(){
 fn_80066188((int)fn_802BE2F0);
}
void fn_802BE2F0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534930,(int)fn_802BF3C4,(int)fn_802BD764,(int)fn_802BE36C,(int)lbl_8041DFB8,224,(int)fn_802BE144,(int)fn_802BE38C,0,(int)lbl_804CFBF4);
}
void *fn_802BE36C(){return fn_802BE0F8();}
}
#pragma pop
