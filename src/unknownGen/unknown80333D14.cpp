#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_80333CC8();
void fn_80333DCC();
void fn_80333F14();
extern char lbl_80453D3C[];
extern char lbl_80535F9C[];
void fn_80333D3C();
void *fn_80333DAC();
}
extern "C" {
void fn_80333D14(){
 fn_80066188((int)fn_80333D3C);
}
void fn_80333D3C(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_80535F9C,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80333DAC,(int)lbl_80453D3C,96,0,(int)fn_80333DCC,0,0);
}
void *fn_80333DAC(){return fn_80333CC8();}
}
#pragma pop
