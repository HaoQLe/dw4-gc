#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803259C8();
void fn_80325A14();
extern char lbl_804531BC[];
extern char lbl_804E16A8[];
extern char lbl_80535C78[];
void fn_80325AB0();
void *fn_80325B24();
}
extern "C" {
void fn_80325A88(){
 fn_80066188((int)fn_80325AB0);
}
void fn_80325AB0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535C78,(int)fn_8002907C,(int)fn_80024180,(int)fn_80325B24,(int)lbl_804531BC,20,(int)fn_80325A14,0,0,(int)lbl_804E16A8);
}
void *fn_80325B24(){return fn_803259C8();}
}
#pragma pop
