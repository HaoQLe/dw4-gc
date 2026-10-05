#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8014636C();
void fn_801463A8();
void fn_80146690();
extern char lbl_8049E7B8[];
extern char lbl_8049E7CC[];
extern char lbl_8049E7E8[];
extern void *lbl_80564178;
extern void *lbl_8056417C;
void fn_80146510();
void *fn_80146578();
void *fn_80146598();
void fn_801465D4();
void fn_801465FC();
void *fn_80146670();
}
extern "C" {
void fn_801464E8(){
 fn_80066188((int)fn_80146510);
}
void fn_80146510(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564178,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80146578,(int)lbl_8049E7B8,44,(int)fn_801463A8,0,0,0);
}
void *fn_80146578(){return fn_8014636C();}
void *fn_80146598(){
 if(!lbl_8056417C || !(reinterpret_cast<unsigned int *>(lbl_8056417C)[0x24/4]&4)) fn_801465D4();
 return lbl_8056417C;
}
void fn_801465D4(){
 fn_80066188((int)fn_801465FC);
}
void fn_801465FC(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_8056417C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80146670,(int)lbl_8049E7E8,32,0,(int)fn_80146690,0,(int)lbl_8049E7CC);
}
void *fn_80146670(){return fn_80146598();}
}
#pragma pop
