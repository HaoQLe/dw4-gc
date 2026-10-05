#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801B4E2C();
void fn_801B4E68();
void fn_801B56B4();
void fn_801BF938();
extern char lbl_804AD58C[];
extern char lbl_804AD5D4[];
extern void *lbl_80564A78;
void fn_801B561C();
void *fn_801B5694();
}
extern "C" {
void fn_801B55F4(){
 fn_80066188((int)fn_801B561C);
}
void fn_801B561C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A78,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801B5694,(int)lbl_804AD5D4,240,(int)fn_801B4E68,(int)fn_801B56B4,0,(int)lbl_804AD58C);
}
void *fn_801B5694(){return fn_801B4E2C();}
}
#pragma pop
