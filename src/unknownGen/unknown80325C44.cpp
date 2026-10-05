#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_80325BF8();
void fn_80325D04();
extern char lbl_80453228[];
extern char lbl_804E1708[];
extern char lbl_80535C80[];
void fn_80325C6C();
void *fn_80325CE4();
}
extern "C" {
void fn_80325C44(){
 fn_80066188((int)fn_80325C6C);
}
void fn_80325C6C(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_80535C80,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80325CE4,(int)lbl_80453228,80,0,(int)fn_80325D04,0,(int)lbl_804E1708);
}
void *fn_80325CE4(){return fn_80325BF8();}
}
#pragma pop
