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
void fn_800BC398();
extern char lbl_8047A1CC[];
extern char lbl_8047A41C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562AAC;
void *fn_800BC24C();
void *fn_800BC288();
void fn_800BC2E0();
void fn_800BC308();
void *fn_800BC378();
}
struct UnknownGenObject800BC288 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800BC24C(){
 if(!lbl_80562AAC || !(reinterpret_cast<unsigned int *>(lbl_80562AAC)[0x24/4]&4)) fn_800BC2E0();
 return lbl_80562AAC;
}
void *fn_800BC288(){
 UnknownGenObject800BC288 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A41C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC2E0(){
 fn_80066188((int)fn_800BC308);
}
void fn_800BC308(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AAC,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BC378,(int)lbl_8047A1CC,20,(int)fn_800BC288,(int)fn_800BC398,0,0);
}
void *fn_800BC378(){return fn_800BC24C();}
}
#pragma pop
