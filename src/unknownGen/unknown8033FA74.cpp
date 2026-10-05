#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033F9B4();
void fn_8033FA00();
extern char lbl_80454E04[];
extern char lbl_804E38CC[];
extern char lbl_805365E8[];
void fn_8033FA9C();
void *fn_8033FB10();
}
extern "C" {
void fn_8033FA74(){
 fn_80066188((int)fn_8033FA9C);
}
void fn_8033FA9C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805365E8,(int)fn_8002907C,(int)fn_80024180,(int)fn_8033FB10,(int)lbl_80454E04,20,(int)fn_8033FA00,0,0,(int)lbl_804E38CC);
}
void *fn_8033FB10(){return fn_8033F9B4();}
}
#pragma pop
