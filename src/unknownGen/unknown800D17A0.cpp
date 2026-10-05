#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80037510();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D031C();
void fn_800D1890();
extern char lbl_804897F8[];
extern void *lbl_80562F34;
void *fn_800D17A0();
void fn_800D17DC();
void fn_800D1804();
void *fn_800D1870();
}
extern "C" {
void *fn_800D17A0(){
 if(!lbl_80562F34 || !(reinterpret_cast<unsigned int *>(lbl_80562F34)[0x24/4]&4)) fn_800D17DC();
 return lbl_80562F34;
}
void fn_800D17DC(){
 fn_80066188((int)fn_800D1804);
}
void fn_800D1804(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F34,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D1870,(int)lbl_804897F8,20,0,(int)fn_800D1890,0,0);
}
void *fn_800D1870(){return fn_800D17A0();}
}
#pragma pop
