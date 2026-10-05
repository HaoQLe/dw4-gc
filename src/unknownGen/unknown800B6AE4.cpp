#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800B68D0();
void fn_800B690C();
void fn_800B6BA8();
void fn_800B6D00();
extern char lbl_80479688[];
extern char lbl_8055E448[8];
extern void *lbl_80562880;
extern void *lbl_80562888;
void fn_800B6B0C();
void *fn_800B6B80();
void *fn_800B6BA0();
}
extern "C" {
void fn_800B6AE4(){
 fn_80066188((int)fn_800B6B0C);
}
void fn_800B6B0C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562880,(int)fn_800B6D00,(int)fn_800B6BA0,(int)fn_800B6B80,(int)lbl_80479688,52,(int)fn_800B690C,(int)fn_800B6BA8,0,(int)lbl_8055E448);
}
void *fn_800B6B80(){return fn_800B68D0();}
void *fn_800B6BA0(){return lbl_80562888;}
}
#pragma pop
