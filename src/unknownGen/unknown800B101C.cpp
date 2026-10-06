#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B1168();
extern char lbl_80478924[];
extern char lbl_8047B548[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562624;
void *fn_800B101C();
void *fn_800B1058();
void fn_800B10B0();
void fn_800B10D8();
void *fn_800B1148();
}
struct UnknownGenObject800B1058_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B101C(){
 if(!lbl_80562624 || !(reinterpret_cast<unsigned int *>(lbl_80562624)[0x24/4]&4)) fn_800B10B0();
 return lbl_80562624;
}
void *fn_800B1058(){
 UnknownGenObject800B1058_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B548;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B10B0(){
 fn_80066188((int)fn_800B10D8);
}
void fn_800B10D8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562624,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B1148,(int)lbl_80478924,32,(int)fn_800B1058,(int)fn_800B1168,0,0);
}
void *fn_800B1148(){return fn_800B101C();}
}
#pragma pop
