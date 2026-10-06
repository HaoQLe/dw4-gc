#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D7E14();
void fn_802D7E60();
void fn_802D80C0();
extern char lbl_8042017C[];
extern char lbl_804D1ED8[];
extern char lbl_805352E0[];
extern void *lbl_805352E4;
void fn_802D7EFC();
void *fn_802D7F70();
}
extern "C" {
void fn_802D7ED4(){
 fn_80066188((int)fn_802D7EFC);
}
void fn_802D7EFC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805352E0,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D7F70,(int)lbl_8042017C,20,(int)fn_802D7E60,0,0,(int)lbl_804D1ED8);
}
void *fn_802D7F70(){return fn_802D7E14();}
void *fn_802D7F90(){
 if(!lbl_805352E4 || !(reinterpret_cast<unsigned int *>(lbl_805352E4)[0x24/4]&4)) fn_802D80C0();
 return lbl_805352E4;
}
}
#pragma pop
