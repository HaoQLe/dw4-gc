#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_80131FDC();
void fn_80132018();
void fn_80132244();
void *fn_80132324();
void fn_8013B97C();
extern char lbl_8049C020[];
extern char lbl_8049C02C[];
extern void *lbl_80563B44;
void fn_801321A8();
void *fn_80132224();
}
extern "C" {
void fn_80132180(){
 fn_80066188((int)fn_801321A8);
}
void fn_801321A8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B44,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80132224,(int)lbl_8049C02C,52,(int)fn_80132018,(int)fn_80132244,(int)fn_80132324,(int)lbl_8049C020);
}
void *fn_80132224(){return fn_80131FDC();}
}
#pragma pop
