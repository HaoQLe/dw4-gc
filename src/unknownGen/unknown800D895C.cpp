#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D2268();
void *fn_800D26A4();
void fn_800D8874();
void fn_800D89FC();
extern char lbl_8048ED8C[];
extern void *lbl_80562F70;
extern void *lbl_8056346C;
void fn_800D8984();
void *fn_800D89F4();
}
extern "C" {
void fn_800D895C(){
 fn_80066188((int)fn_800D8984);
}
void fn_800D8984(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056346C,(int)fn_800D2268,(int)fn_800D89F4,(int)fn_800D26A4,(int)lbl_8048ED8C,216,(int)fn_800D8874,(int)fn_800D89FC,0,0);
}
void *fn_800D89F4(){return lbl_80562F70;}
}
#pragma pop
