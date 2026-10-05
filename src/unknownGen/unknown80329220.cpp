#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80328C10();
void *fn_803290D8();
void fn_80329124();
void fn_8032A928();
extern char lbl_80453564[];
extern char lbl_80535D70[];
void fn_80329248();
void *fn_803292B4();
}
extern "C" {
void fn_80329220(){
 fn_80066188((int)fn_80329248);
}
void fn_80329248(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D70,(int)fn_8032A928,(int)fn_80328C10,(int)fn_803292B4,(int)lbl_80453564,112,(int)fn_80329124,0,0,0);
}
void *fn_803292B4(){return fn_803290D8();}
}
#pragma pop
