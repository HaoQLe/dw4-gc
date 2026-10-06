#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D0D14();
void fn_802D0D60();
void fn_802D0FC0();
extern char lbl_8041F9AC[];
extern char lbl_804D172C[];
extern char lbl_805350C0[];
extern void *lbl_805350C4;
void fn_802D0DFC();
void *fn_802D0E70();
}
extern "C" {
void fn_802D0DD4(){
 fn_80066188((int)fn_802D0DFC);
}
void fn_802D0DFC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350C0,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D0E70,(int)lbl_8041F9AC,20,(int)fn_802D0D60,0,0,(int)lbl_804D172C);
}
void *fn_802D0E70(){return fn_802D0D14();}
void *fn_802D0E90(){
 if(!lbl_805350C4 || !(reinterpret_cast<unsigned int *>(lbl_805350C4)[0x24/4]&4)) fn_802D0FC0();
 return lbl_805350C4;
}
}
#pragma pop
