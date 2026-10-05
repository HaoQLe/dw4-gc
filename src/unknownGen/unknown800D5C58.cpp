#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D1D20();
void *fn_800D5B7C();
void fn_800D5BB8();
void fn_800D5D1C();
extern char lbl_8048A5D4[];
extern char lbl_8055ED34[8];
extern void *lbl_80562F58;
extern void *lbl_805630C4;
void fn_800D5C80();
void *fn_800D5CF4();
void *fn_800D5D14();
}
extern "C" {
void fn_800D5C58(){
 fn_80066188((int)fn_800D5C80);
}
void fn_800D5C80(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805630C4,(int)fn_800D1D20,(int)fn_800D5D14,(int)fn_800D5CF4,(int)lbl_8048A5D4,48,(int)fn_800D5BB8,(int)fn_800D5D1C,0,(int)lbl_8055ED34);
}
void *fn_800D5CF4(){return fn_800D5B7C();}
void *fn_800D5D14(){return lbl_80562F58;}
}
#pragma pop
