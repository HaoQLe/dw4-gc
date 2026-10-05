#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80343DE4();
void fn_80343E30();
extern char lbl_80455280[];
extern char lbl_804E3E00[];
extern char lbl_80536794[];
void fn_80343ECC();
void *fn_80343F40();
}
extern "C" {
void fn_80343EA4(){
 fn_80066188((int)fn_80343ECC);
}
void fn_80343ECC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536794,(int)fn_8002907C,(int)fn_80024180,(int)fn_80343F40,(int)lbl_80455280,20,(int)fn_80343E30,0,0,(int)lbl_804E3E00);
}
void *fn_80343F40(){return fn_80343DE4();}
}
#pragma pop
