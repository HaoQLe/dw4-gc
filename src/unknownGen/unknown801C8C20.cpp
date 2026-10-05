#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BF938();
void *fn_801C8A2C();
void fn_801C8A68();
void fn_801C8CDC();
extern char lbl_804B1990[];
extern char lbl_80560870[8];
extern void *lbl_80565378;
void fn_801C8C48();
void *fn_801C8CBC();
}
extern "C" {
void fn_801C8C20(){
 fn_80066188((int)fn_801C8C48);
}
void fn_801C8C48(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565378,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801C8CBC,(int)lbl_804B1990,40,(int)fn_801C8A68,(int)fn_801C8CDC,0,(int)lbl_80560870);
}
void *fn_801C8CBC(){return fn_801C8A2C();}
}
#pragma pop
