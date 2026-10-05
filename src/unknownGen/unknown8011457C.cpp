#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010DB2C();
void fn_801119C4();
void *fn_80114460();
void fn_8011449C();
void fn_8011463C();
extern char lbl_804955F4[];
extern char lbl_80495600[];
extern void *lbl_8056381C;
void fn_801145A4();
void *fn_8011461C();
}
extern "C" {
void fn_8011457C(){
 fn_80066188((int)fn_801145A4);
}
void fn_801145A4(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056381C,(int)fn_801119C4,(int)fn_8010DB2C,(int)fn_8011461C,(int)lbl_80495600,52,(int)fn_8011449C,(int)fn_8011463C,0,(int)lbl_804955F4);
}
void *fn_8011461C(){return fn_80114460();}
}
#pragma pop
