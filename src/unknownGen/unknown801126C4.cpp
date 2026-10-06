#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void fn_80112968();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80495308[];
extern char lbl_8049735C[];
extern char lbl_804973C0[];
extern char lbl_8055F14C[8];
extern void *lbl_805621F4;
extern void *lbl_805637A0;
extern void *lbl_805637A4;
void *fn_80112700();
void *fn_8011273C();
void fn_801127AC();
void fn_801127D4();
void *fn_80112840();
}
struct UnknownGenObject8011273C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801126C4(){
 if(!lbl_805637A0) lbl_805637A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637A0;
}
void *fn_80112700(){
 if(!lbl_805637A0 || !(reinterpret_cast<unsigned int *>(lbl_805637A0)[0x24/4]&4)) fn_801127AC();
 return lbl_805637A0;
}
void *fn_8011273C(){
 UnknownGenObject8011273C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804973C0;
 object.unknown00=lbl_8049735C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801127AC(){
 fn_80066188((int)fn_801127D4);
}
void fn_801127D4(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637A0,(int)fn_8002907C,(int)fn_80024180,(int)fn_80112840,(int)lbl_80495308,20,(int)fn_8011273C,0,0,(int)lbl_8055F14C);
}
void *fn_80112840(){return fn_80112700();}
void *fn_80112860(void *object){
 fn_80112968();
 return fn_8006546C(lbl_805637A4,object);
}
void *fn_80112898(){
 if(!lbl_805637A4 || !(reinterpret_cast<unsigned int *>(lbl_805637A4)[0x24/4]&4)) fn_80112968();
 return lbl_805637A4;
}
}
#pragma pop
