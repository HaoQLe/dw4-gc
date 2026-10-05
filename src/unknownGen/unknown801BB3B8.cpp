#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801BB100();
void fn_801BB13C();
void fn_801BB474();
void fn_801BF938();
extern char lbl_804AEC88[];
extern char lbl_805604A4[6];
extern void *lbl_80564D8C;
void fn_801BB3E0();
void *fn_801BB454();
}
extern "C" {
void fn_801BB3B8(){
 fn_80066188((int)fn_801BB3E0);
}
void fn_801BB3E0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D8C,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801BB454,(int)lbl_805604A4,68,(int)fn_801BB13C,(int)fn_801BB474,0,(int)lbl_804AEC88);
}
void *fn_801BB454(){return fn_801BB100();}
}
#pragma pop
