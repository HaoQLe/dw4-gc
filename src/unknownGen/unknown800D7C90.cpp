#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D03C4();
void *fn_800D0464();
void fn_800D7B98();
void fn_800D7D34();
extern char lbl_8048E4A4[];
extern char lbl_8055EDF8[8];
extern void *lbl_80562E14;
extern void *lbl_805633E4;
void fn_800D7CB8();
void *fn_800D7D2C();
}
extern "C" {
void fn_800D7C90(){
 fn_80066188((int)fn_800D7CB8);
}
void fn_800D7CB8(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805633E4,(int)fn_800D03C4,(int)fn_800D7D2C,(int)fn_800D0464,(int)lbl_8048E4A4,44,(int)fn_800D7B98,(int)fn_800D7D34,0,(int)lbl_8055EDF8);
}
void *fn_800D7D2C(){return lbl_80562E14;}
}
#pragma pop
