#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803452CC();
void fn_80345318();
void fn_80345470();
extern char lbl_804556B0[];
extern char lbl_80536838[];
void fn_803453DC();
void *fn_80345450();
}
extern "C" {
void fn_803453B4(){
 fn_80066188((int)fn_803453DC);
}
void fn_803453DC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536838,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80345450,(int)lbl_804556B0,16,(int)fn_80345318,(int)fn_80345470,0,0);
}
void *fn_80345450(){return fn_803452CC();}
}
#pragma pop
