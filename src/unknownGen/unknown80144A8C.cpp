#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_801442EC();
void *fn_801448F4();
void fn_80144930();
void fn_80144B54();
extern char lbl_8049E600[];
extern char lbl_8049E60C[];
extern void *lbl_805640FC;
extern void *lbl_80564124;
void fn_80144AB4();
void *fn_80144B2C();
void *fn_80144B4C();
}
extern "C" {
void fn_80144A8C(){
 fn_80066188((int)fn_80144AB4);
}
void fn_80144AB4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564124,(int)fn_801442EC,(int)fn_80144B4C,(int)fn_80144B2C,(int)lbl_8049E60C,28,(int)fn_80144930,(int)fn_80144B54,0,(int)lbl_8049E600);
}
void *fn_80144B2C(){return fn_801448F4();}
void *fn_80144B4C(){return lbl_805640FC;}
}
#pragma pop
