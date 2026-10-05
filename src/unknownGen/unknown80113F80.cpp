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
void fn_8010CFA4();
void *fn_8010E6DC();
void fn_80111EAC();
void *fn_80113DFC();
void fn_80113E38();
void fn_80114350();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80495570[];
extern char lbl_80495580[];
extern char lbl_80495598[];
extern char lbl_80495AD8[];
extern char lbl_80496894[];
extern char lbl_80496F94[];
extern char lbl_80496FF8[];
extern char lbl_8055F1F8[8];
extern char lbl_8055F200[8];
extern void *lbl_805621F4;
extern void *lbl_80563750;
extern void *lbl_80563808;
extern void *lbl_8056380C;
extern void *lbl_80563810;
void fn_80113FA8();
void *fn_80114010();
void *fn_80114030();
void *fn_80114074();
void *fn_801140B0();
void fn_80114120();
void fn_80114148();
void *fn_801141B4();
void *fn_8011420C();
void *fn_80114248();
void fn_80114294();
void fn_801142BC();
void *fn_80114330();
}
struct UnknownGenObject801140B0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80114248 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_80113F80(){
 fn_80066188((int)fn_80113FA8);
}
void fn_80113FA8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563808,(int)fn_80111EAC,(int)fn_80114030,(int)fn_80114010,(int)lbl_80495570,36,(int)fn_80113E38,0,0,0);
}
void *fn_80114010(){return fn_80113DFC();}
void *fn_80114030(){return lbl_80563750;}
void *fn_80114038(){
 if(!lbl_8056380C) lbl_8056380C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056380C;
}
void *fn_80114074(){
 if(!lbl_8056380C || !(reinterpret_cast<unsigned int *>(lbl_8056380C)[0x24/4]&4)) fn_80114120();
 return lbl_8056380C;
}
void *fn_801140B0(){
 UnknownGenObject801140B0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80496FF8;
 object.unknown00=lbl_80496F94;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114120(){
 fn_80066188((int)fn_80114148);
}
void fn_80114148(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056380C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801141B4,(int)lbl_80495580,20,(int)fn_801140B0,0,0,(int)lbl_8055F1F8);
}
void *fn_801141B4(){return fn_80114074();}
void *fn_801141D4(void *object){
 fn_80114294();
 return fn_8006546C(lbl_80563810,object);
}
void *fn_8011420C(){
 if(!lbl_80563810 || !(reinterpret_cast<unsigned int *>(lbl_80563810)[0x24/4]&4)) fn_80114294();
 return lbl_80563810;
}
void *fn_80114248(){
 UnknownGenObject80114248 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_80496894;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114294(){
 fn_80066188((int)fn_801142BC);
}
void fn_801142BC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563810,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80114330,(int)lbl_80495598,16,(int)fn_80114248,(int)fn_80114350,0,(int)lbl_8055F200);
}
void *fn_80114330(){return fn_8011420C();}
}
#pragma pop
