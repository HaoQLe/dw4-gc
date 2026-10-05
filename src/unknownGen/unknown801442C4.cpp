#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80143C60();
void *fn_80143FCC();
void *fn_801441B4();
void fn_801441F0();
void fn_80144384();
extern char lbl_8049E55C[];
extern char lbl_8049E568[];
extern void *lbl_805640FC;
void fn_801442EC();
void *fn_80144364();
}
extern "C" {
void fn_801442C4(){
 fn_80066188((int)fn_801442EC);
}
void fn_801442EC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640FC,(int)fn_80143C60,(int)fn_80143FCC,(int)fn_80144364,(int)lbl_8049E568,20,(int)fn_801441F0,(int)fn_80144384,0,(int)lbl_8049E55C);
}
void *fn_80144364(){return fn_801441B4();}
}
#pragma pop
