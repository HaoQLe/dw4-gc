#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BF938();
void *fn_801CDED0();
void fn_801CDF0C();
void fn_801CE294();
extern char lbl_804B2A30[];
extern char lbl_80560A58[8];
extern void *lbl_805655A0;
void fn_801CE200();
void *fn_801CE274();
}
extern "C" {
void fn_801CE1D8(){
 fn_80066188((int)fn_801CE200);
}
void fn_801CE200(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805655A0,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801CE274,(int)lbl_80560A58,256,(int)fn_801CDF0C,(int)fn_801CE294,0,(int)lbl_804B2A30);
}
void *fn_801CE274(){return fn_801CDED0();}
}
#pragma pop
