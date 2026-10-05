#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BF938();
void *fn_801C61BC();
void fn_801C61F8();
void fn_801C681C();
extern char lbl_804B0F90[];
extern char lbl_804B0FBC[];
extern void *lbl_80565230;
void fn_801C6784();
void *fn_801C67FC();
}
extern "C" {
void fn_801C675C(){
 fn_80066188((int)fn_801C6784);
}
void fn_801C6784(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565230,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801C67FC,(int)lbl_804B0FBC,200,(int)fn_801C61F8,(int)fn_801C681C,0,(int)lbl_804B0F90);
}
void *fn_801C67FC(){return fn_801C61BC();}
}
#pragma pop
