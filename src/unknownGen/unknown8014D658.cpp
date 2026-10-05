#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_8014D4EC();
void fn_8014D528();
void fn_8014D710();
extern char lbl_8049F834[];
extern void *lbl_805643E4;
void fn_8014D680();
void *fn_8014D6F0();
}
extern "C" {
void fn_8014D658(){
 fn_80066188((int)fn_8014D680);
}
void fn_8014D680(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643E4,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8014D6F0,(int)lbl_8049F834,52,(int)fn_8014D528,(int)fn_8014D710,0,0);
}
void *fn_8014D6F0(){return fn_8014D4EC();}
}
#pragma pop
