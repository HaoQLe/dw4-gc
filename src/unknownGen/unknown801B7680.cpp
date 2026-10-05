#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B752C();
void fn_801B7568();
void fn_801B773C();
extern char lbl_804ADE50[];
extern char lbl_805603BC[7];
extern void *lbl_80564BC0;
void fn_801B76A8();
void *fn_801B771C();
}
extern "C" {
void fn_801B7680(){
 fn_80066188((int)fn_801B76A8);
}
void fn_801B76A8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BC0,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801B771C,(int)lbl_805603BC,28,(int)fn_801B7568,(int)fn_801B773C,0,(int)lbl_804ADE50);
}
void *fn_801B771C(){return fn_801B752C();}
}
#pragma pop
