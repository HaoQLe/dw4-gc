#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AD708();
void *fn_800B47E4();
void fn_800B4820();
void fn_800B4944();
void fn_800B88AC();
extern char lbl_80479128[];
extern void *lbl_80562788;
void fn_800B48B4();
void *fn_800B4924();
}
extern "C" {
void fn_800B488C(){
 fn_80066188((int)fn_800B48B4);
}
void fn_800B48B4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562788,(int)fn_800B88AC,(int)fn_800AD708,(int)fn_800B4924,(int)lbl_80479128,80,(int)fn_800B4820,(int)fn_800B4944,0,0);
}
void *fn_800B4924(){return fn_800B47E4();}
}
#pragma pop
