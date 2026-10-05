#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void fn_801123B8();
extern char lbl_8055F11C[8];
extern char lbl_8055F124[7];
extern void *lbl_805621F4;
extern void *lbl_80563784;
void *fn_801122C8();
void fn_80112304();
void fn_8011232C();
void *fn_80112398();
}
extern "C" {
void *fn_8011228C(){
 if(!lbl_80563784) lbl_80563784=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563784;
}
void *fn_801122C8(){
 if(!lbl_80563784 || !(reinterpret_cast<unsigned int *>(lbl_80563784)[0x24/4]&4)) fn_80112304();
 return lbl_80563784;
}
void fn_80112304(){
 fn_80066188((int)fn_8011232C);
}
void fn_8011232C(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_80563784,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80112398,(int)lbl_8055F124,28,0,(int)fn_801123B8,0,(int)lbl_8055F11C);
}
void *fn_80112398(){return fn_801122C8();}
}
#pragma pop
