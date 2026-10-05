#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_801523C0();
void fn_801523FC();
void fn_801525F4();
extern char lbl_804A0144[];
extern void *lbl_80564548;
void fn_80152564();
void *fn_801525D4();
}
extern "C" {
void fn_8015253C(){
 fn_80066188((int)fn_80152564);
}
void fn_80152564(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564548,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_801525D4,(int)lbl_804A0144,56,(int)fn_801523FC,(int)fn_801525F4,0,0);
}
void *fn_801525D4(){return fn_801523C0();}
}
#pragma pop
