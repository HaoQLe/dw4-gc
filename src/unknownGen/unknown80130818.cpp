#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801306EC();
void fn_80130728();
void fn_801308D8();
void fn_8013B97C();
extern char lbl_8049BD3C[];
extern void *lbl_80563ACC;
extern void *lbl_80563ED0;
void fn_80130840();
void *fn_801308B0();
void *fn_801308D0();
}
extern "C" {
void fn_80130818(){
 fn_80066188((int)fn_80130840);
}
void fn_80130840(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563ACC,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801308B0,(int)lbl_8049BD3C,48,(int)fn_80130728,(int)fn_801308D8,0,0);
}
void *fn_801308B0(){return fn_801306EC();}
void *fn_801308D0(){return lbl_80563ED0;}
}
#pragma pop
