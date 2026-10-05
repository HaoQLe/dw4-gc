#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033DAA4();
void fn_8033DAF0();
extern char lbl_80454AE0[];
extern char lbl_804E32B8[];
extern char lbl_80536458[];
void fn_8033DB8C();
void *fn_8033DC00();
}
extern "C" {
void fn_8033DB64(){
 fn_80066188((int)fn_8033DB8C);
}
void fn_8033DB8C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536458,(int)fn_8002907C,(int)fn_80024180,(int)fn_8033DC00,(int)lbl_80454AE0,20,(int)fn_8033DAF0,0,0,(int)lbl_804E32B8);
}
void *fn_8033DC00(){return fn_8033DAA4();}
}
#pragma pop
