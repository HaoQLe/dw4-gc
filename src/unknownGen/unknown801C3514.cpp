#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BF938();
void *fn_801C3088();
void fn_801C30C4();
void fn_801C35D4();
extern char lbl_804B021C[];
extern char lbl_804B0240[];
extern void *lbl_8056506C;
void fn_801C353C();
void *fn_801C35B4();
}
extern "C" {
void fn_801C3514(){
 fn_80066188((int)fn_801C353C);
}
void fn_801C353C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056506C,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801C35B4,(int)lbl_804B0240,92,(int)fn_801C30C4,(int)fn_801C35D4,0,(int)lbl_804B021C);
}
void *fn_801C35B4(){return fn_801C3088();}
}
#pragma pop
