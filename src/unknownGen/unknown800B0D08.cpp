#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B0C2C();
void fn_800B0C68();
void fn_800B0DC4();
extern char lbl_804788E8[];
extern char lbl_8055E184[8];
extern void *lbl_80562614;
void fn_800B0D30();
void *fn_800B0DA4();
}
extern "C" {
void fn_800B0D08(){
 fn_80066188((int)fn_800B0D30);
}
void fn_800B0D30(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562614,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B0DA4,(int)lbl_804788E8,16,(int)fn_800B0C68,(int)fn_800B0DC4,0,(int)lbl_8055E184);
}
void *fn_800B0DA4(){return fn_800B0C2C();}
}
#pragma pop
