#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013095C();
void fn_80130998();
void fn_80130C64();
void fn_8013AD64();
extern char lbl_8049BD98[];
extern char lbl_8055F4CC[8];
extern void *lbl_80563ADC;
extern void *lbl_80563E6C;
void fn_80130BC8();
void *fn_80130C3C();
void *fn_80130C5C();
}
extern "C" {
void fn_80130BA0(){
 fn_80066188((int)fn_80130BC8);
}
void fn_80130BC8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563ADC,(int)fn_8013AD64,(int)fn_80130C5C,(int)fn_80130C3C,(int)lbl_8049BD98,72,(int)fn_80130998,(int)fn_80130C64,0,(int)lbl_8055F4CC);
}
void *fn_80130C3C(){return fn_8013095C();}
void *fn_80130C5C(){return lbl_80563E6C;}
}
#pragma pop
