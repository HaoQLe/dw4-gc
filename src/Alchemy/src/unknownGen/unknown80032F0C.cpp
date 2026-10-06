#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_80033140();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_8046737C[];
extern char lbl_80467390[];
extern char lbl_80475764[];
extern void *lbl_80561D14;
void *fn_80032F0C();
void *fn_80032F48();
void fn_80033080();
void fn_800330A8();
void *fn_80033120();
}
struct UnknownGenRoot80032F48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032F48(){fn_8006665C(this);}
};
struct UnknownGenObject80032F48 : UnknownGenRoot80032F48 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject80032F48(){unknown00=lbl_80475764;}
};
extern "C" {
void *fn_80032F0C(){
 if(!lbl_80561D14 || !(reinterpret_cast<unsigned int *>(lbl_80561D14)[0x24/4]&4)) fn_80033080();
 return lbl_80561D14;
}
void *fn_80032F48(){
 UnknownGenObject80032F48 object;
 object.unknown00=lbl_80475764;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80033080(){
 fn_80066188((int)fn_800330A8);
}
void fn_800330A8(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561D14,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80033120,(int)lbl_80467390,28,(int)fn_80032F48,(int)fn_80033140,0,(int)lbl_8046737C);
}
void *fn_80033120(){return fn_80032F0C();}
}
#pragma pop
