#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801CD4B8();
void fn_801CD4F4();
void fn_801CD690();
extern char lbl_804B293C[];
extern char lbl_80560A40[8];
extern void *lbl_80565570;
void fn_801CD5FC();
void *fn_801CD670();
}
extern "C" {
void fn_801CD5D4(){
 fn_80066188((int)fn_801CD5FC);
}
void fn_801CD5FC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565570,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801CD670,(int)lbl_804B293C,44,(int)fn_801CD4F4,(int)fn_801CD690,0,(int)lbl_80560A40);
}
void *fn_801CD670(){return fn_801CD4B8();}
}
#pragma pop
