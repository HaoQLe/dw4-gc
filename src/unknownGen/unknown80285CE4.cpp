#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80285C24();
void fn_80285C70();
extern char lbl_80416AEC[];
extern char lbl_804CB110[];
extern char lbl_80515CC4[];
void fn_80285D0C();
void *fn_80285D80();
}
extern "C" {
void fn_80285CE4(){
 fn_80066188((int)fn_80285D0C);
}
void fn_80285D0C(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515CC4,(int)fn_8002907C,(int)fn_80024180,(int)fn_80285D80,(int)lbl_80416AEC,20,(int)fn_80285C70,0,0,(int)lbl_804CB110);
}
void *fn_80285D80(){return fn_80285C24();}
}
#pragma pop
