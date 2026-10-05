#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
void *fn_80330764();
void fn_803307B0();
void fn_80330B58();
void fn_80333D3C();
extern char lbl_80453AAC[];
extern char lbl_804E1DE8[];
extern char lbl_80535ED8[];
void fn_80330ABC();
void *fn_80330B38();
}
extern "C" {
void fn_80330A94(){
 fn_80066188((int)fn_80330ABC);
}
void fn_80330ABC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535ED8,(int)fn_80333D3C,(int)fn_8032BD54,(int)fn_80330B38,(int)lbl_80453AAC,108,(int)fn_803307B0,(int)fn_80330B58,0,(int)lbl_804E1DE8);
}
void *fn_80330B38(){return fn_80330764();}
}
#pragma pop
