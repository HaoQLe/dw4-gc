#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void *fn_8032A240();
void fn_8032A28C();
void fn_8032A928();
extern char lbl_80453610[];
extern char lbl_80535D94[];
void fn_8032A3B0();
void *fn_8032A41C();
}
extern "C" {
void fn_8032A388(){
 fn_80066188((int)fn_8032A3B0);
}
void fn_8032A3B0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D94,(int)fn_8032A928,(int)fn_80328C10,(int)fn_8032A41C,(int)lbl_80453610,112,(int)fn_8032A28C,0,0,0);
}
void *fn_8032A41C(){return fn_8032A240();}
}
#pragma pop
