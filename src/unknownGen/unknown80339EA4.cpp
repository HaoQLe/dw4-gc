#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void fn_803386E8();
void *fn_80339D34();
void fn_80339D80();
extern char lbl_80454670[];
extern char lbl_805361EC[];
void fn_80339ECC();
void *fn_80339F38();
}
extern "C" {
void fn_80339EA4(){
 fn_80066188((int)fn_80339ECC);
}
void fn_80339ECC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361EC,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_80339F38,(int)lbl_80454670,44,(int)fn_80339D80,0,0,0);
}
void *fn_80339F38(){return fn_80339D34();}
}
#pragma pop
