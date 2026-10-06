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
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_800ABC8C();
void fn_800B4238();
void *fn_800C192C();
void fn_801221F8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8047909C[];
extern char lbl_804790B0[];
extern char lbl_804790C0[];
extern char lbl_804790CC[];
extern char lbl_8047DDA8[];
extern char lbl_8047DE0C[];
extern char lbl_8047DE70[];
extern char lbl_8047DED4[];
extern char lbl_8047DF38[];
extern char lbl_8047DF98[];
extern char lbl_8047DFF8[];
extern char lbl_8055E340[8];
extern char lbl_8055E348[8];
extern void *lbl_805621F4;
extern void *lbl_8056275C;
extern void *lbl_80562760;
extern void *lbl_80562764;
extern void *lbl_80562768;
extern void *lbl_8056276C;
extern void *lbl_80563A14;
void *fn_800B3B88();
void *fn_800B3BC4();
void fn_800B3C28();
void fn_800B3C50();
void *fn_800B3CC0();
void *fn_800B3CE0();
void *fn_800B3CE8();
void *fn_800B3D44();
void *fn_800B3D80();
void fn_800B3DF0();
void fn_800B3E18();
void *fn_800B3E84();
void *fn_800B3EA4();
void fn_800B3EE0();
void fn_800B3F08();
void *fn_800B3F6C();
void *fn_800B3FC8();
void *fn_800B4004();
void fn_800B4074();
void fn_800B409C();
void *fn_800B4108();
}
struct UnknownGenObject800B3BC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B3D80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4004_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B3B4C(){
 if(!lbl_8056275C) lbl_8056275C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056275C;
}
void *fn_800B3B88(){
 if(!lbl_8056275C || !(reinterpret_cast<unsigned int *>(lbl_8056275C)[0x24/4]&4)) fn_800B3C28();
 return lbl_8056275C;
}
void *fn_800B3BC4(){
 UnknownGenObject800B3BC4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8047DFF8;
 object.unknown00=lbl_8047DF98;
 object.unknown00=lbl_8047DF38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B3C28(){
 fn_80066188((int)fn_800B3C50);
}
void fn_800B3C50(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056275C,(int)fn_801221F8,(int)fn_800B3CE0,(int)fn_800B3CC0,(int)lbl_8047909C,20,(int)fn_800B3BC4,0,(int)fn_800B3CE8,0);
}
void *fn_800B3CC0(){return fn_800B3B88();}
void *fn_800B3CE0(){return lbl_80563A14;}
void *fn_800B3CE8(){return fn_800C192C();}
void *fn_800B3D08(){
 if(!lbl_80562760) lbl_80562760=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562760;
}
void *fn_800B3D44(){
 if(!lbl_80562760 || !(reinterpret_cast<unsigned int *>(lbl_80562760)[0x24/4]&4)) fn_800B3DF0();
 return lbl_80562760;
}
void *fn_800B3D80(){
 UnknownGenObject800B3D80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DED4;
 object.unknown00=lbl_8047DE70;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B3DF0(){
 fn_80066188((int)fn_800B3E18);
}
void fn_800B3E18(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562760,(int)fn_8002907C,(int)fn_80024180,(int)fn_800B3E84,(int)lbl_804790B0,20,(int)fn_800B3D80,0,0,(int)lbl_8055E340);
}
void *fn_800B3E84(){return fn_800B3D44();}
void *fn_800B3EA4(){
 if(!lbl_80562764 || !(reinterpret_cast<unsigned int *>(lbl_80562764)[0x24/4]&4)) fn_800B3EE0();
 return lbl_80562764;
}
void fn_800B3EE0(){
 fn_80066188((int)fn_800B3F08);
}
void fn_800B3F08(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_80562764,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800B3F6C,(int)lbl_804790C0,8,0,0,0,0);
}
void *fn_800B3F6C(){return fn_800B3EA4();}
void *fn_800B3F8C(){
 if(!lbl_80562768) lbl_80562768=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562768;
}
void *fn_800B3FC8(){
 if(!lbl_80562768 || !(reinterpret_cast<unsigned int *>(lbl_80562768)[0x24/4]&4)) fn_800B4074();
 return lbl_80562768;
}
void *fn_800B4004(){
 UnknownGenObject800B4004_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DE0C;
 object.unknown00=lbl_8047DDA8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B4074(){
 fn_80066188((int)fn_800B409C);
}
void fn_800B409C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562768,(int)fn_8002907C,(int)fn_80024180,(int)fn_800B4108,(int)lbl_804790CC,20,(int)fn_800B4004,0,0,(int)lbl_8055E348);
}
void *fn_800B4108(){return fn_800B3FC8();}
void *fn_800B4128(void *object){
 fn_800B4238();
 return fn_8006546C(lbl_8056276C,object);
}
void *fn_800B4160(){
 if(!lbl_8056276C) lbl_8056276C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056276C;
}
void *fn_800B419C(){
 if(!lbl_8056276C || !(reinterpret_cast<unsigned int *>(lbl_8056276C)[0x24/4]&4)) fn_800B4238();
 return lbl_8056276C;
}
}
#pragma pop
