#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800CE828();
void *fn_800CEC0C();
void fn_800D61F0();
void fn_800D67E8();
extern char lbl_8048C918[];
extern char lbl_8048C92C[];
extern void *lbl_80562D00;
extern void *lbl_80563100;
void fn_800D6768();
void *fn_800D67E0();
}
extern "C" {
void fn_800D6740(){
 fn_80066188((int)fn_800D6768);
}
void fn_800D6768(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563100,(int)fn_800CE828,(int)fn_800D67E0,(int)fn_800CEC0C,(int)lbl_8048C92C,1768,(int)fn_800D61F0,(int)fn_800D67E8,0,(int)lbl_8048C918);
}
void *fn_800D67E0(){return lbl_80562D00;}
}
#pragma pop
