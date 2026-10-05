#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013872C();
void fn_80138768();
void fn_801389D8();
void fn_8013A878();
extern char lbl_8049D1AC[];
extern void *lbl_80563DAC;
void fn_80138948();
void *fn_801389B8();
}
extern "C" {
void fn_80138920(){
 fn_80066188((int)fn_80138948);
}
void fn_80138948(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DAC,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_801389B8,(int)lbl_8049D1AC,52,(int)fn_80138768,(int)fn_801389D8,0,0);
}
void *fn_801389B8(){return fn_8013872C();}
}
#pragma pop
