#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800CFC68();
void *fn_800CFE58();
void fn_800D78EC();
void *fn_800D7A34();
extern char lbl_8048E3CC[];
extern void *lbl_80562DDC;
extern void *lbl_805633C0;
void fn_800D79BC();
void *fn_800D7A2C();
}
extern "C" {
void fn_800D7994(){
 fn_80066188((int)fn_800D79BC);
}
void fn_800D79BC(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805633C0,(int)fn_800CFC68,(int)fn_800D7A2C,(int)fn_800CFE58,(int)lbl_8048E3CC,80,(int)fn_800D78EC,(int)fn_800D7A34,0,0);
}
void *fn_800D7A2C(){return lbl_80562DDC;}
}
#pragma pop
