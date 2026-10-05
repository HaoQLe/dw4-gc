#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80286E98();
void fn_80286FA4();
extern char lbl_80416C98[];
extern char lbl_804CB2C4[];
extern char lbl_80515D38[];
void fn_80286F0C();
void *fn_80286F84();
}
extern "C" {
void fn_80286EE4(){
 fn_80066188((int)fn_80286F0C);
}
void fn_80286F0C(){
 fn_80284294();
 fn_80066204(1,(int)lbl_80515D38,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80286F84,(int)lbl_80416C98,16,0,(int)fn_80286FA4,0,(int)lbl_804CB2C4);
}
void *fn_80286F84(){return fn_80286E98();}
}
#pragma pop
