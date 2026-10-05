#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010D6A0();
void fn_80111654();
void *fn_80114710();
void fn_8011474C();
void fn_80114900();
extern char lbl_804956A4[];
extern char lbl_8055F224[8];
extern void *lbl_80563830;
void fn_8011486C();
void *fn_801148E0();
}
extern "C" {
void fn_80114844(){
 fn_80066188((int)fn_8011486C);
}
void fn_8011486C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563830,(int)fn_80111654,(int)fn_8010D6A0,(int)fn_801148E0,(int)lbl_804956A4,40,(int)fn_8011474C,(int)fn_80114900,0,(int)lbl_8055F224);
}
void *fn_801148E0(){return fn_80114710();}
}
#pragma pop
