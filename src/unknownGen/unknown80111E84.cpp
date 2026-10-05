#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8010CBD4();
void *fn_80111D10();
void fn_80111D4C();
void fn_80111F44();
extern char lbl_8049515C[];
extern char lbl_80495174[];
extern void *lbl_80563750;
void fn_80111EAC();
void *fn_80111F24();
}
extern "C" {
void fn_80111E84(){
 fn_80066188((int)fn_80111EAC);
}
void fn_80111EAC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563750,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80111F24,(int)lbl_80495174,36,(int)fn_80111D4C,(int)fn_80111F44,0,(int)lbl_8049515C);
}
void *fn_80111F24(){return fn_80111D10();}
}
#pragma pop
