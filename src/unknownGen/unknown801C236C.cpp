#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BF938();
void *fn_801C2178();
void fn_801C21B4();
void fn_801C2428();
extern char lbl_804AFC30[];
extern char lbl_805606BC[8];
extern void *lbl_80564FC0;
void fn_801C2394();
void *fn_801C2408();
}
extern "C" {
void fn_801C236C(){
 fn_80066188((int)fn_801C2394);
}
void fn_801C2394(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564FC0,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801C2408,(int)lbl_804AFC30,80,(int)fn_801C21B4,(int)fn_801C2428,0,(int)lbl_805606BC);
}
void *fn_801C2408(){return fn_801C2178();}
}
#pragma pop
