#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8010CBD4();
void *fn_801124BC();
void fn_801124F8();
void fn_8011263C();
extern char lbl_804952F4[];
extern char lbl_8055F134[8];
extern void *lbl_80563798;
void fn_801125A8();
void *fn_8011261C();
}
extern "C" {
void fn_80112580(){
 fn_80066188((int)fn_801125A8);
}
void fn_801125A8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563798,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8011261C,(int)lbl_804952F4,12,(int)fn_801124F8,(int)fn_8011263C,0,(int)lbl_8055F134);
}
void *fn_8011261C(){return fn_801124BC();}
}
#pragma pop
