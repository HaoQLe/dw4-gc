#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010EE6C();
void fn_8010F21C();
void *fn_80111558();
void fn_80111594();
void fn_801116E8();
extern char lbl_80495014[];
extern char lbl_8055F0CC[8];
extern void *lbl_80563718;
void fn_80111654();
void *fn_801116C8();
}
extern "C" {
void fn_8011162C(){
 fn_80066188((int)fn_80111654);
}
void fn_80111654(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563718,(int)fn_8010F21C,(int)fn_8010EE6C,(int)fn_801116C8,(int)lbl_80495014,36,(int)fn_80111594,(int)fn_801116E8,0,(int)lbl_8055F0CC);
}
void *fn_801116C8(){return fn_80111558();}
}
#pragma pop
