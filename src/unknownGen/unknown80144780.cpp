#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80143C60();
void *fn_80143FCC();
void *fn_801446B0();
void fn_801446EC();
void fn_8014483C();
extern char lbl_8049E5EC[];
extern char lbl_8055F9F8[8];
extern void *lbl_80564118;
void fn_801447A8();
void *fn_8014481C();
}
extern "C" {
void fn_80144780(){
 fn_80066188((int)fn_801447A8);
}
void fn_801447A8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564118,(int)fn_80143C60,(int)fn_80143FCC,(int)fn_8014481C,(int)lbl_8049E5EC,16,(int)fn_801446EC,(int)fn_8014483C,0,(int)lbl_8055F9F8);
}
void *fn_8014481C(){return fn_801446B0();}
}
#pragma pop
