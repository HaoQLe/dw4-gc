#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D35C4();
void fn_802D3610();
void fn_802D3828();
extern char lbl_8041FB94[];
extern char lbl_804D191C[];
extern char lbl_80535158[];
extern void *lbl_8053515C;
void fn_802D36AC();
void *fn_802D3720();
}
extern "C" {
void fn_802D3684(){
 fn_80066188((int)fn_802D36AC);
}
void fn_802D36AC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535158,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D3720,(int)lbl_8041FB94,20,(int)fn_802D3610,0,0,(int)lbl_804D191C);
}
void *fn_802D3720(){return fn_802D35C4();}
void *fn_802D3740(){
 if(!lbl_8053515C || !(reinterpret_cast<unsigned int *>(lbl_8053515C)[0x24/4]&4)) fn_802D3828();
 return lbl_8053515C;
}
}
#pragma pop
