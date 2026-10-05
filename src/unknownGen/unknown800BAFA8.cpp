#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_800ABC8C();
void *fn_800BAE6C();
void fn_800BAEA8();
void fn_800BB06C();
void *fn_800BB148();
extern char lbl_80479FFC[];
extern char lbl_8047A008[];
extern void *lbl_80562A48;
void fn_800BAFD0();
void *fn_800BB04C();
}
extern "C" {
void fn_800BAFA8(){
 fn_80066188((int)fn_800BAFD0);
}
void fn_800BAFD0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A48,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800BB04C,(int)lbl_8047A008,20,(int)fn_800BAEA8,(int)fn_800BB06C,(int)fn_800BB148,(int)lbl_80479FFC);
}
void *fn_800BB04C(){return fn_800BAE6C();}
}
#pragma pop
