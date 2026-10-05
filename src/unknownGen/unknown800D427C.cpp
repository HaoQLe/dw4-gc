#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D4160();
void fn_800D419C();
void fn_800D4338();
extern char lbl_8048A0E4[];
extern char lbl_8055EC80[8];
extern void *lbl_80563040;
void fn_800D42A4();
void *fn_800D4318();
}
extern "C" {
void fn_800D427C(){
 fn_80066188((int)fn_800D42A4);
}
void fn_800D42A4(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563040,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800D4318,(int)lbl_8048A0E4,20,(int)fn_800D419C,(int)fn_800D4338,0,(int)lbl_8055EC80);
}
void *fn_800D4318(){return fn_800D4160();}
}
#pragma pop
