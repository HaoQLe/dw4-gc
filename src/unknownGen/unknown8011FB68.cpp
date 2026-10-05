#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void fn_8011D9B4();
void *fn_8011F6A4();
void fn_8011FCE4();
void *fn_8011FD6C();
extern char lbl_8049B800[];
extern char lbl_8049B9DC[];
extern char lbl_8055F3B8[8];
extern void *lbl_8056397C;
void *fn_8011FBA0();
void *fn_8011FBDC();
void fn_8011FC28();
void fn_8011FC50();
void *fn_8011FCC4();
}
struct UnknownGenObject8011FBDC {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_8011FB68(void *object){
 fn_8011FC28();
 return fn_8006546C(lbl_8056397C,object);
}
void *fn_8011FBA0(){
 if(!lbl_8056397C || !(reinterpret_cast<unsigned int *>(lbl_8056397C)[0x24/4]&4)) fn_8011FC28();
 return lbl_8056397C;
}
void *fn_8011FBDC(){
 UnknownGenObject8011FBDC object;
 fn_8006665C(&object);
 object.unknown00=lbl_8049B9DC;
 object.unknown00=lbl_8049B800;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011FC28(){
 fn_80066188((int)fn_8011FC50);
}
void fn_8011FC50(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056397C,(int)fn_8011D9B4,(int)fn_8011F6A4,(int)fn_8011FCC4,(int)lbl_8055F3B8,28,(int)fn_8011FBDC,(int)fn_8011FCE4,(int)fn_8011FD6C,0);
}
void *fn_8011FCC4(){return fn_8011FBA0();}
}
#pragma pop
