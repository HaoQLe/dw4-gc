#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010D728();
void fn_8010D764();
void fn_8010D9E4();
void fn_8011486C();
extern char lbl_8049475C[];
extern char lbl_80494768[];
extern void *lbl_805635AC;
extern void *lbl_80563830;
void fn_8010D944();
void *fn_8010D9BC();
void *fn_8010D9DC();
}
extern "C" {
void fn_8010D91C(){
 fn_80066188((int)fn_8010D944);
}
void fn_8010D944(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635AC,(int)fn_8011486C,(int)fn_8010D9DC,(int)fn_8010D9BC,(int)lbl_80494768,60,(int)fn_8010D764,(int)fn_8010D9E4,0,(int)lbl_8049475C);
}
void *fn_8010D9BC(){return fn_8010D728();}
void *fn_8010D9DC(){return lbl_80563830;}
}
#pragma pop
