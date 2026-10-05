#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_80330C60();
void fn_80330CAC();
void fn_80331004();
void fn_80333F14();
extern char lbl_80453ADC[];
extern char lbl_804E1E24[];
extern char lbl_80535EE8[];
void fn_80330F68();
void *fn_80330FE4();
}
extern "C" {
void fn_80330F40(){
 fn_80066188((int)fn_80330F68);
}
void fn_80330F68(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EE8,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80330FE4,(int)lbl_80453ADC,100,(int)fn_80330CAC,(int)fn_80331004,0,(int)lbl_804E1E24);
}
void *fn_80330FE4(){return fn_80330C60();}
}
#pragma pop
