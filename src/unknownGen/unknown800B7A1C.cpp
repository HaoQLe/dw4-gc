#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC0B8();
void *fn_800B794C();
void fn_800B7988();
void fn_800B7AD8();
void fn_800BB858();
extern char lbl_80479844[];
extern char lbl_8055E4D8[8];
extern void *lbl_805628F0;
void fn_800B7A44();
void *fn_800B7AB8();
}
extern "C" {
void fn_800B7A1C(){
 fn_80066188((int)fn_800B7A44);
}
void fn_800B7A44(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628F0,(int)fn_800BB858,(int)fn_800AC0B8,(int)fn_800B7AB8,(int)lbl_80479844,16,(int)fn_800B7988,(int)fn_800B7AD8,0,(int)lbl_8055E4D8);
}
void *fn_800B7AB8(){return fn_800B794C();}
}
#pragma pop
