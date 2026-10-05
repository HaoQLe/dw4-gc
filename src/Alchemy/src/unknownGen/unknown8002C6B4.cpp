#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void fn_80029D58();
void *fn_8002C5E0();
void fn_8002C61C();
void fn_8002C76C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80465070[];
extern void *lbl_80561908;
void fn_8002C6DC();
void *fn_8002C74C();
}
extern "C" {
void fn_8002C6B4(){
 fn_80066188((int)fn_8002C6DC);
}
void fn_8002C6DC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561908,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_8002C74C,(int)lbl_80465070,20,(int)fn_8002C61C,(int)fn_8002C76C,0,0);
}
void *fn_8002C74C(){return fn_8002C5E0();}
}
#pragma pop
