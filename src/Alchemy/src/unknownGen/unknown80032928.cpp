#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024180();
void fn_8002907C();
void *fn_800326DC();
void fn_80032718();
void fn_800329EC();
void *fn_80032B94();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_8046701C[];
extern char lbl_8046703C[];
extern void *lbl_80561CAC;
void fn_80032950();
void *fn_800329CC();
}
extern "C" {
void fn_80032928(){
 fn_80066188((int)fn_80032950);
}
void fn_80032950(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561CAC,(int)fn_8002907C,(int)fn_80024180,(int)fn_800329CC,(int)lbl_8046703C,72,(int)fn_80032718,(int)fn_800329EC,(int)fn_80032B94,(int)lbl_8046701C);
}
void *fn_800329CC(){return fn_800326DC();}
}
#pragma pop
