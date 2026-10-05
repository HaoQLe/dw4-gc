#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8010CBD4();
void fn_80112190();
extern char lbl_80495200[];
extern char lbl_8049520C[];
extern void *lbl_805621F4;
extern void *lbl_80563770;
void *fn_80112098();
void fn_801120D4();
void fn_801120FC();
void *fn_80112170();
}
extern "C" {
void *fn_8011205C(){
 if(!lbl_80563770) lbl_80563770=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563770;
}
void *fn_80112098(){
 if(!lbl_80563770 || !(reinterpret_cast<unsigned int *>(lbl_80563770)[0x24/4]&4)) fn_801120D4();
 return lbl_80563770;
}
void fn_801120D4(){
 fn_80066188((int)fn_801120FC);
}
void fn_801120FC(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_80563770,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80112170,(int)lbl_8049520C,44,0,(int)fn_80112190,0,(int)lbl_80495200);
}
void *fn_80112170(){return fn_80112098();}
}
#pragma pop
