#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D39F0();
void fn_800D3A2C();
void fn_800D3C00();
extern char lbl_80489F84[];
extern char lbl_8055EC70[8];
extern void *lbl_8056300C;
void fn_800D3B6C();
void *fn_800D3BE0();
}
extern "C" {
void fn_800D3B44(){
 fn_80066188((int)fn_800D3B6C);
}
void fn_800D3B6C(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056300C,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800D3BE0,(int)lbl_80489F84,48,(int)fn_800D3A2C,(int)fn_800D3C00,0,(int)lbl_8055EC70);
}
void *fn_800D3BE0(){return fn_800D39F0();}
}
#pragma pop
