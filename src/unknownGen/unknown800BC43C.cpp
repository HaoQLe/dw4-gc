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
void fn_800BC588();
extern char lbl_8047A204[];
extern char lbl_8047A49C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562AB8;
void *fn_800BC43C();
void *fn_800BC478();
void fn_800BC4D0();
void fn_800BC4F8();
void *fn_800BC568();
}
struct UnknownGenObject800BC478_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800BC43C(){
 if(!lbl_80562AB8 || !(reinterpret_cast<unsigned int *>(lbl_80562AB8)[0x24/4]&4)) fn_800BC4D0();
 return lbl_80562AB8;
}
void *fn_800BC478(){
 UnknownGenObject800BC478_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A49C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC4D0(){
 fn_80066188((int)fn_800BC4F8);
}
void fn_800BC4F8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AB8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BC568,(int)lbl_8047A204,20,(int)fn_800BC478,(int)fn_800BC588,0,0);
}
void *fn_800BC568(){return fn_800BC43C();}
}
#pragma pop
