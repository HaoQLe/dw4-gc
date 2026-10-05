#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D30DC();
void fn_800D3118();
void fn_800D32B4();
extern char lbl_80489EA4[];
extern char lbl_8055EC00[8];
extern void *lbl_80562FE8;
void fn_800D3220();
void *fn_800D3294();
}
extern "C" {
void fn_800D31F8(){
 fn_80066188((int)fn_800D3220);
}
void fn_800D3220(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FE8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800D3294,(int)lbl_80489EA4,20,(int)fn_800D3118,(int)fn_800D32B4,0,(int)lbl_8055EC00);
}
void *fn_800D3294(){return fn_800D30DC();}
}
#pragma pop
