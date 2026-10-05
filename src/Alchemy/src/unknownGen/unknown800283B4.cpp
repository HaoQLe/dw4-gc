#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void *fn_80028298();
void fn_800282D4();
void fn_8002846C();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80464048[];
extern void *lbl_805616CC;
void fn_800283DC();
void *fn_8002844C();
}
extern "C" {
void fn_800283B4(){
 fn_80066188((int)fn_800283DC);
}
void fn_800283DC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616CC,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_8002844C,(int)lbl_80464048,20,(int)fn_800282D4,(int)fn_8002846C,0,0);
}
void *fn_8002844C(){return fn_80028298();}
}
#pragma pop
