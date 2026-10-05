#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void fn_80029D58();
void *fn_80032C84();
void fn_80032CC0();
void fn_80032E10();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80467314[];
extern void *lbl_80561D00;
void fn_80032D80();
void *fn_80032DF0();
}
extern "C" {
void fn_80032D58(){
 fn_80066188((int)fn_80032D80);
}
void fn_80032D80(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561D00,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80032DF0,(int)lbl_80467314,28,(int)fn_80032CC0,(int)fn_80032E10,0,0);
}
void *fn_80032DF0(){return fn_80032C84();}
}
#pragma pop
