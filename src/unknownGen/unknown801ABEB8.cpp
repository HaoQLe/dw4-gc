#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801ABCF4();
void fn_801ABD30();
void fn_801ABF70();
void fn_801BF938();
extern char lbl_804AB888[];
extern void *lbl_805646F8;
void fn_801ABEE0();
void *fn_801ABF50();
}
extern "C" {
void fn_801ABEB8(){
 fn_80066188((int)fn_801ABEE0);
}
void fn_801ABEE0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805646F8,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801ABF50,(int)lbl_804AB888,160,(int)fn_801ABD30,(int)fn_801ABF70,0,0);
}
void *fn_801ABF50(){return fn_801ABCF4();}
}
#pragma pop
