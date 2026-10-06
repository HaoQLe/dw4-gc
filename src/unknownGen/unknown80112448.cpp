#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void fn_8010CFA4();
void *fn_8010E6DC();
void fn_80112A28();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804952F4[];
extern char lbl_80495308[];
extern char lbl_80495320[];
extern char lbl_8049532C[];
extern char lbl_80495AD8[];
extern char lbl_804965F8[];
extern char lbl_8049735C[];
extern char lbl_804973C0[];
extern char lbl_80497424[];
extern char lbl_8055F134[8];
extern char lbl_8055F13C[4];
extern char lbl_8055F140[4];
extern char lbl_8055F144[4];
extern char lbl_8055F148[4];
extern char lbl_8055F14C[8];
extern void *lbl_805621F4;
extern void *lbl_80563798;
extern void *lbl_805637A0;
extern void *lbl_805637A4;
void *fn_801124BC();
void *fn_801124F8();
void fn_80112580();
void fn_801125A8();
void *fn_8011261C();
void fn_8011263C();
void *fn_801126C4();
void *fn_80112700();
void *fn_8011273C();
void fn_801127AC();
void fn_801127D4();
void *fn_80112840();
void *fn_80112898();
void *fn_801128D4();
void fn_80112968();
void fn_80112990();
void *fn_80112A08();
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
struct UnknownGenObject8011273C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801128D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801128D4(){fn_8006665C(this);}
};
struct UnknownGenObject801128D4 : UnknownGenRoot801128D4 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801128D4(){unknown00=lbl_804965F8;}
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
void fn_8011263C(){
 void *value0=lbl_80563798;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F13C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801126C4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055F140,lbl_8055F144,lbl_8055F148,value1);
}
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
void *fn_801128D4(){
 UnknownGenObject801128D4 object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_804965F8;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80112968(){
 fn_80066188((int)fn_80112990);
}
void fn_80112990(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637A4,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80112A08,(int)lbl_8049532C,20,(int)fn_801128D4,(int)fn_80112A28,0,(int)lbl_80495320);
}
void *fn_80112A08(){return fn_80112898();}
}
#pragma pop
