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
void fn_800B33C8();
extern char lbl_80478F1C[];
extern char lbl_8047BBEC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562720;
void *fn_800B327C();
void *fn_800B32B8();
void fn_800B3310();
void fn_800B3338();
void *fn_800B33A8();
}
struct UnknownGenObject800B32B8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B327C(){
 if(!lbl_80562720 || !(reinterpret_cast<unsigned int *>(lbl_80562720)[0x24/4]&4)) fn_800B3310();
 return lbl_80562720;
}
void *fn_800B32B8(){
 UnknownGenObject800B32B8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BBEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B3310(){
 fn_80066188((int)fn_800B3338);
}
void fn_800B3338(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562720,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B33A8,(int)lbl_80478F1C,16,(int)fn_800B32B8,(int)fn_800B33C8,0,0);
}
void *fn_800B33A8(){return fn_800B327C();}
}
#pragma pop
