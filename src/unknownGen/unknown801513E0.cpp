#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_8015123C();
void fn_80151278();
void fn_8015149C();
extern char lbl_8049FFA0[];
extern char lbl_8055FCC0[8];
extern void *lbl_805644F4;
void fn_80151408();
void *fn_8015147C();
}
extern "C" {
void fn_801513E0(){
 fn_80066188((int)fn_80151408);
}
void fn_80151408(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644F4,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8015147C,(int)lbl_8049FFA0,48,(int)fn_80151278,(int)fn_8015149C,0,(int)lbl_8055FCC0);
}
void *fn_8015147C(){return fn_8015123C();}
}
#pragma pop
