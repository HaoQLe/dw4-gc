#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80341530();
void fn_8034157C();
extern char lbl_80455054[];
extern char lbl_804E3BF4[];
extern char lbl_805366D4[];
void fn_80341618();
void *fn_8034168C();
}
extern "C" {
void fn_803415F0(){
 fn_80066188((int)fn_80341618);
}
void fn_80341618(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805366D4,(int)fn_8002907C,(int)fn_80024180,(int)fn_8034168C,(int)lbl_80455054,20,(int)fn_8034157C,0,0,(int)lbl_804E3BF4);
}
void *fn_8034168C(){return fn_80341530();}
}
#pragma pop
