#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BF938();
void *fn_801C784C();
void fn_801C7888();
void fn_801C7AFC();
extern char lbl_804B1540[];
extern char lbl_80560850[8];
extern void *lbl_805652EC;
void fn_801C7A68();
void *fn_801C7ADC();
}
extern "C" {
void fn_801C7A40(){
 fn_80066188((int)fn_801C7A68);
}
void fn_801C7A68(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805652EC,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801C7ADC,(int)lbl_804B1540,64,(int)fn_801C7888,(int)fn_801C7AFC,0,(int)lbl_80560850);
}
void *fn_801C7ADC(){return fn_801C784C();}
}
#pragma pop
