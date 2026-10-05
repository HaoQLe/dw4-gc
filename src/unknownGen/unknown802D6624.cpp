#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D6564();
void fn_802D65B0();
extern char lbl_8041FF60[];
extern char lbl_804D1CE0[];
extern char lbl_80535250[];
void fn_802D664C();
void *fn_802D66C0();
}
extern "C" {
void fn_802D6624(){
 fn_80066188((int)fn_802D664C);
}
void fn_802D664C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535250,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D66C0,(int)lbl_8041FF60,20,(int)fn_802D65B0,0,0,(int)lbl_804D1CE0);
}
void *fn_802D66C0(){return fn_802D6564();}
}
#pragma pop
