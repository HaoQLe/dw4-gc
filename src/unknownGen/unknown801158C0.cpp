#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void fn_8010D60C();
void *fn_8010DD30();
void *fn_8011573C();
void fn_80115778();
void fn_8011597C();
extern char lbl_804959F8[];
extern char lbl_8055F2BC[8];
extern void *lbl_80563888;
void fn_801158E8();
void *fn_8011595C();
}
extern "C" {
void fn_801158C0(){
 fn_80066188((int)fn_801158E8);
}
void fn_801158E8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563888,(int)fn_8010D60C,(int)fn_8010DD30,(int)fn_8011595C,(int)lbl_804959F8,60,(int)fn_80115778,(int)fn_8011597C,0,(int)lbl_8055F2BC);
}
void *fn_8011595C(){return fn_8011573C();}
}
#pragma pop
