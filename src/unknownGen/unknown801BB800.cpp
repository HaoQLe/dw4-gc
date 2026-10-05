#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801BB60C();
void fn_801BB648();
void fn_801BB8BC();
void fn_801BF938();
extern char lbl_804AED50[];
extern char lbl_805604B4[8];
extern void *lbl_80564DAC;
void fn_801BB828();
void *fn_801BB89C();
}
extern "C" {
void fn_801BB800(){
 fn_80066188((int)fn_801BB828);
}
void fn_801BB828(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DAC,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801BB89C,(int)lbl_804AED50,36,(int)fn_801BB648,(int)fn_801BB8BC,0,(int)lbl_805604B4);
}
void *fn_801BB89C(){return fn_801BB60C();}
}
#pragma pop
