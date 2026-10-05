#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801BF938();
void fn_802B1AC8();
void *fn_802C4504();
void fn_802C4550();
void fn_802C47A4();
void *fn_802C48A4();
extern char lbl_8041E880[];
extern char lbl_80534BA0[];
void fn_802C4708();
void *fn_802C4784();
}
extern "C" {
void fn_802C46E0(){
 fn_80066188((int)fn_802C4708);
}
void fn_802C4708(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BA0,(int)fn_801BF938,(int)fn_8011148C,(int)fn_802C4784,(int)lbl_8041E880,112,(int)fn_802C4550,(int)fn_802C47A4,(int)fn_802C48A4,0);
}
void *fn_802C4784(){return fn_802C4504();}
}
#pragma pop
