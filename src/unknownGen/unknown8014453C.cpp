#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80143C60();
void *fn_80143FCC();
void *fn_8014446C();
void fn_801444A8();
void fn_801445F8();
extern char lbl_8049E5C4[];
extern char lbl_8055F9D0[8];
extern void *lbl_8056410C;
void fn_80144564();
void *fn_801445D8();
}
extern "C" {
void fn_8014453C(){
 fn_80066188((int)fn_80144564);
}
void fn_80144564(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056410C,(int)fn_80143C60,(int)fn_80143FCC,(int)fn_801445D8,(int)lbl_8049E5C4,16,(int)fn_801444A8,(int)fn_801445F8,0,(int)lbl_8055F9D0);
}
void *fn_801445D8(){return fn_8014446C();}
}
#pragma pop
