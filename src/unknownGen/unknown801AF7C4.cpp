#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AF670();
void fn_801AF6AC();
void fn_801AF880();
extern char lbl_804AC81C[];
extern char lbl_8056021C[7];
extern void *lbl_80564884;
void fn_801AF7EC();
void *fn_801AF860();
}
extern "C" {
void fn_801AF7C4(){
 fn_80066188((int)fn_801AF7EC);
}
void fn_801AF7EC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564884,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801AF860,(int)lbl_8056021C,20,(int)fn_801AF6AC,(int)fn_801AF880,0,(int)lbl_804AC81C);
}
void *fn_801AF860(){return fn_801AF670();}
}
#pragma pop
