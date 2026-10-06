#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void fn_8011D9B4();
void fn_8011F6AC();
void *fn_8011F74C();
extern char lbl_804989D0[];
extern char lbl_8049B980[];
extern char lbl_8049B9DC[];
extern void *lbl_805621F4;
extern void *lbl_805638C8;
extern void *lbl_8056395C;
void *fn_8011F55C();
void *fn_8011F598();
void fn_8011F5E4();
void fn_8011F60C();
void *fn_8011F684();
void *fn_8011F6A4();
}
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8011F4E8(void *object){
 fn_8011F5E4();
 return fn_8006546C(lbl_8056395C,object);
}
void *fn_8011F520(){
 if(!lbl_8056395C) lbl_8056395C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056395C;
}
void *fn_8011F55C(){
 if(!lbl_8056395C || !(reinterpret_cast<unsigned int *>(lbl_8056395C)[0x24/4]&4)) fn_8011F5E4();
 return lbl_8056395C;
}
void *fn_8011F598(){
 UnknownGenObject8011F598_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8049B9DC;
 object.unknown00=lbl_8049B980;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011F5E4(){
 fn_80066188((int)fn_8011F60C);
}
void fn_8011F60C(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056395C,(int)fn_8011D9B4,(int)fn_8011F6A4,(int)fn_8011F684,(int)lbl_804989D0,24,(int)fn_8011F598,(int)fn_8011F6AC,(int)fn_8011F74C,0);
}
void *fn_8011F684(){return fn_8011F55C();}
void *fn_8011F6A4(){return lbl_805638C8;}
}
#pragma pop
