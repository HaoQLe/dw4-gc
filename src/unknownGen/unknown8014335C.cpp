#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013B680();
void *fn_801431D0();
void fn_8014320C();
void fn_8014341C();
void fn_80146870();
extern char lbl_8049E370[];
extern char lbl_8049E380[];
extern void *lbl_805640B0;
void fn_80143384();
void *fn_801433FC();
}
extern "C" {
void fn_8014335C(){
 fn_80066188((int)fn_80143384);
}
void fn_80143384(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640B0,(int)fn_80146870,(int)fn_8013B680,(int)fn_801433FC,(int)lbl_8049E380,48,(int)fn_8014320C,(int)fn_8014341C,0,(int)lbl_8049E370);
}
void *fn_801433FC(){return fn_801431D0();}
}
#pragma pop
