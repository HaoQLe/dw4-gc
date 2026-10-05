#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010DF8C();
void fn_8010E2EC();
void *fn_801100D0();
void fn_8011010C();
void fn_80110354();
extern char lbl_80494C54[];
extern char lbl_80494C68[];
extern void *lbl_80563698;
void fn_801102BC();
void *fn_80110334();
}
extern "C" {
void fn_80110294(){
 fn_80066188((int)fn_801102BC);
}
void fn_801102BC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563698,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_80110334,(int)lbl_80494C68,28,(int)fn_8011010C,(int)fn_80110354,0,(int)lbl_80494C54);
}
void *fn_80110334(){return fn_801100D0();}
}
#pragma pop
