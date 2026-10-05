#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801ACFE4();
void fn_801AD020();
void fn_801AD294();
void fn_801BF938();
extern char lbl_804ABBC4[];
extern char lbl_80560188[8];
extern void *lbl_80564744;
void fn_801AD200();
void *fn_801AD274();
}
extern "C" {
void fn_801AD1D8(){
 fn_80066188((int)fn_801AD200);
}
void fn_801AD200(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564744,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801AD274,(int)lbl_804ABBC4,56,(int)fn_801AD020,(int)fn_801AD294,0,(int)lbl_80560188);
}
void *fn_801AD274(){return fn_801ACFE4();}
}
#pragma pop
