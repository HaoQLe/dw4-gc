#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800BC7B0();
extern char lbl_8047A22C[];
extern char lbl_8047A51C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562AC4;
void *fn_800BC664();
void *fn_800BC6A0();
void fn_800BC6F8();
void fn_800BC720();
void *fn_800BC790();
}
struct UnknownGenObject800BC6A0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800BC62C(void *object){
 fn_800BC6F8();
 return fn_8006546C(lbl_80562AC4,object);
}
void *fn_800BC664(){
 if(!lbl_80562AC4 || !(reinterpret_cast<unsigned int *>(lbl_80562AC4)[0x24/4]&4)) fn_800BC6F8();
 return lbl_80562AC4;
}
void *fn_800BC6A0(){
 UnknownGenObject800BC6A0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A51C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC6F8(){
 fn_80066188((int)fn_800BC720);
}
void fn_800BC720(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AC4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BC790,(int)lbl_8047A22C,20,(int)fn_800BC6A0,(int)fn_800BC7B0,0,0);
}
void *fn_800BC790(){return fn_800BC664();}
}
#pragma pop
