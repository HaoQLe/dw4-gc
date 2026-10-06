#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void fn_8002907C();
void fn_80029694();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_800ABC8C();
void fn_800BB8E8();
void fn_800BB970();
void *fn_800BD398();
void fn_800BD3E4();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_8047A078[];
extern char lbl_8047A090[];
extern char lbl_8047A0A0[];
extern char lbl_8047A0B8[];
extern char lbl_8047D704[];
extern char lbl_8047D768[];
extern char lbl_8047D7CC[];
extern char lbl_8047D830[];
extern char lbl_8047D8F8[];
extern char lbl_8047D95C[];
extern char lbl_8055E6D8[8];
extern char lbl_8055E6E0[8];
extern char lbl_8055E6E8[8];
extern char lbl_8055E6F0[7];
extern void *lbl_805621F4;
extern void *lbl_80562A58;
extern void *lbl_80562A5C;
extern void *lbl_80562A60;
extern void *lbl_80562A64;
extern void *lbl_80562A68;
void *fn_800BB1C4();
void fn_800BB200();
void fn_800BB228();
void *fn_800BB28C();
void *fn_800BB2E8();
void *fn_800BB324();
void fn_800BB394();
void fn_800BB3BC();
void *fn_800BB428();
void *fn_800BB484();
void *fn_800BB4C0();
void fn_800BB530();
void fn_800BB558();
void *fn_800BB5C4();
void *fn_800BB658();
void *fn_800BB694();
void fn_800BB704();
void fn_800BB72C();
void *fn_800BB798();
void *fn_800BB7F4();
void fn_800BB830();
void fn_800BB858();
void *fn_800BB8C8();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_800BB148(){return fn_800BD3E4();}
void *fn_800BB168(){return fn_800BD398();}
void *fn_800BB188(){
 if(!lbl_80562A58) lbl_80562A58=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A58;
}
void *fn_800BB1C4(){
 if(!lbl_80562A58 || !(reinterpret_cast<unsigned int *>(lbl_80562A58)[0x24/4]&4)) fn_800BB200();
 return lbl_80562A58;
}
void fn_800BB200(){
 fn_80066188((int)fn_800BB228);
}
void fn_800BB228(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_80562A58,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800BB28C,(int)lbl_8047A078,8,0,0,0,0);
}
void *fn_800BB28C(){return fn_800BB1C4();}
void *fn_800BB2AC(){
 if(!lbl_80562A5C) lbl_80562A5C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A5C;
}
void *fn_800BB2E8(){
 if(!lbl_80562A5C || !(reinterpret_cast<unsigned int *>(lbl_80562A5C)[0x24/4]&4)) fn_800BB394();
 return lbl_80562A5C;
}
void *fn_800BB324(){
 UnknownGenObject800BB324_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047D95C;
 object.unknown00=lbl_8047D8F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BB394(){
 fn_80066188((int)fn_800BB3BC);
}
void fn_800BB3BC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A5C,(int)fn_8002907C,(int)fn_80024180,(int)fn_800BB428,(int)lbl_8047A090,20,(int)fn_800BB324,0,0,(int)lbl_8055E6D8);
}
void *fn_800BB428(){return fn_800BB2E8();}
void *fn_800BB448(){
 if(!lbl_80562A60) lbl_80562A60=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A60;
}
void *fn_800BB484(){
 if(!lbl_80562A60 || !(reinterpret_cast<unsigned int *>(lbl_80562A60)[0x24/4]&4)) fn_800BB530();
 return lbl_80562A60;
}
void *fn_800BB4C0(){
 UnknownGenObject800BB4C0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_8047D830;
 object.unknown00=lbl_8047D7CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BB530(){
 fn_80066188((int)fn_800BB558);
}
void fn_800BB558(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A60,(int)fn_80029694,(int)fn_80023FDC,(int)fn_800BB5C4,(int)lbl_8047A0A0,20,(int)fn_800BB4C0,0,0,(int)lbl_8055E6E0);
}
void *fn_800BB5C4(){return fn_800BB484();}
void *fn_800BB5E4(void *object){
 fn_800BB704();
 return fn_8006546C(lbl_80562A64,object);
}
void *fn_800BB61C(){
 if(!lbl_80562A64) lbl_80562A64=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A64;
}
void *fn_800BB658(){
 if(!lbl_80562A64 || !(reinterpret_cast<unsigned int *>(lbl_80562A64)[0x24/4]&4)) fn_800BB704();
 return lbl_80562A64;
}
void *fn_800BB694(){
 UnknownGenObject800BB694_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047D768;
 object.unknown00=lbl_8047D704;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BB704(){
 fn_80066188((int)fn_800BB72C);
}
void fn_800BB72C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A64,(int)fn_8002907C,(int)fn_80024180,(int)fn_800BB798,(int)lbl_8047A0B8,20,(int)fn_800BB694,0,0,(int)lbl_8055E6E8);
}
void *fn_800BB798(){return fn_800BB658();}
void *fn_800BB7B8(){
 if(!lbl_80562A68) lbl_80562A68=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A68;
}
void *fn_800BB7F4(){
 if(!lbl_80562A68 || !(reinterpret_cast<unsigned int *>(lbl_80562A68)[0x24/4]&4)) fn_800BB830();
 return lbl_80562A68;
}
void fn_800BB830(){
 fn_80066188((int)fn_800BB858);
}
void fn_800BB858(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_80562A68,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800BB8C8,(int)lbl_8055E6F0,12,0,(int)fn_800BB8E8,(int)fn_800BB970,0);
}
void *fn_800BB8C8(){return fn_800BB7F4();}
}
#pragma pop
