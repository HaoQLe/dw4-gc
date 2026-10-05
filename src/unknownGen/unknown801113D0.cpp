#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_801110DC();
void fn_80111118();
void fn_80111494();
void fn_801BF938();
extern char lbl_80494FF4[];
extern char lbl_8055F0B4[8];
extern void *lbl_80563710;
extern void *lbl_80564ED0;
void fn_801113F8();
void *fn_8011146C();
void *fn_8011148C();
}
extern "C" {
void fn_801113D0(){
 fn_80066188((int)fn_801113F8);
}
void fn_801113F8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563710,(int)fn_801BF938,(int)fn_8011148C,(int)fn_8011146C,(int)lbl_80494FF4,36,(int)fn_80111118,(int)fn_80111494,0,(int)lbl_8055F0B4);
}
void *fn_8011146C(){return fn_801110DC();}
void *fn_8011148C(){return lbl_80564ED0;}
}
#pragma pop
