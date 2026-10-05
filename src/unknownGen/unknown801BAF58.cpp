#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801BADA4();
void fn_801BADE0();
void fn_801BB010();
void fn_801BF938();
extern char lbl_804AEC5C[];
extern void *lbl_80564D84;
void fn_801BAF80();
void *fn_801BAFF0();
}
extern "C" {
void fn_801BAF58(){
 fn_80066188((int)fn_801BAF80);
}
void fn_801BAF80(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D84,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801BAFF0,(int)lbl_804AEC5C,36,(int)fn_801BADE0,(int)fn_801BB010,0,0);
}
void *fn_801BAFF0(){return fn_801BADA4();}
}
#pragma pop
