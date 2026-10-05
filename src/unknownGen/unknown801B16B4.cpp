#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801B17A4();
void fn_801BF938();
extern char lbl_804ACB6C[];
extern void *lbl_8056490C;
void *fn_801B16B4();
void fn_801B16F0();
void fn_801B1718();
void *fn_801B1784();
}
extern "C" {
void *fn_801B16B4(){
 if(!lbl_8056490C || !(reinterpret_cast<unsigned int *>(lbl_8056490C)[0x24/4]&4)) fn_801B16F0();
 return lbl_8056490C;
}
void fn_801B16F0(){
 fn_80066188((int)fn_801B1718);
}
void fn_801B1718(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_8056490C,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801B1784,(int)lbl_804ACB6C,36,0,(int)fn_801B17A4,0,0);
}
void *fn_801B1784(){return fn_801B16B4();}
}
#pragma pop
