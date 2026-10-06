#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void fn_8011263C();
extern char lbl_804952F4[];
extern char lbl_80497424[];
extern char lbl_8055F134[8];
extern void *lbl_805621F4;
extern void *lbl_80563798;
void *fn_801124BC();
void *fn_801124F8();
void fn_80112580();
void fn_801125A8();
void *fn_8011261C();
}
struct UnknownGenRoot801124F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801124F8(){fn_8006665C(this);}
};
struct UnknownGenObject801124F8 : UnknownGenRoot801124F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801124F8(){unknown00=lbl_80497424;}
};
extern "C" {
void *fn_80112448(void *object){
 fn_80112580();
 return fn_8006546C(lbl_80563798,object);
}
void *fn_80112480(){
 if(!lbl_80563798) lbl_80563798=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563798;
}
void *fn_801124BC(){
 if(!lbl_80563798 || !(reinterpret_cast<unsigned int *>(lbl_80563798)[0x24/4]&4)) fn_80112580();
 return lbl_80563798;
}
void *fn_801124F8(){
 UnknownGenObject801124F8 object;
 object.unknown00=lbl_80497424;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80112580(){
 fn_80066188((int)fn_801125A8);
}
void fn_801125A8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563798,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8011261C,(int)lbl_804952F4,12,(int)fn_801124F8,(int)fn_8011263C,0,(int)lbl_8055F134);
}
void *fn_8011261C(){return fn_801124BC();}
}
#pragma pop
