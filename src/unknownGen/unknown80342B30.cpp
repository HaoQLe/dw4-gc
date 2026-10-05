#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_803425BC();
void *fn_80342A90();
void fn_80342ADC();
void fn_80342BEC();
void fn_803438F4();
extern char lbl_80455150[];
extern char lbl_8053673C[];
void fn_80342B58();
void *fn_80342BCC();
}
extern "C" {
void fn_80342B30(){
 fn_80066188((int)fn_80342B58);
}
void fn_80342B58(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053673C,(int)fn_803438F4,(int)fn_803425BC,(int)fn_80342BCC,(int)lbl_80455150,24,(int)fn_80342ADC,(int)fn_80342BEC,0,0);
}
void *fn_80342BCC(){return fn_80342A90();}
}
#pragma pop
