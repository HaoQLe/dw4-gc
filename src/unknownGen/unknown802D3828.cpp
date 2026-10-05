#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D3740();
void fn_802D378C();
extern char lbl_8041FBA8[];
extern char lbl_8053515C[];
void fn_802D3850();
void *fn_802D38BC();
}
extern "C" {
void fn_802D3828(){
 fn_80066188((int)fn_802D3850);
}
void fn_802D3850(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053515C,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802D38BC,(int)lbl_8041FBA8,12,(int)fn_802D378C,0,0,0);
}
void *fn_802D38BC(){return fn_802D3740();}
}
#pragma pop
