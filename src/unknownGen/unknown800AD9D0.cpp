#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800ADB5C();
extern char lbl_80478160[];
extern char lbl_8047AB40[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DF68[8];
extern void *lbl_805621F4;
extern void *lbl_805624C0;
void *fn_800ADA0C();
void *fn_800ADA48();
void fn_800ADAA0();
void fn_800ADAC8();
void *fn_800ADB3C();
}
struct UnknownGenObject800ADA48 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD9D0(){
 if(!lbl_805624C0) lbl_805624C0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805624C0;
}
void *fn_800ADA0C(){
 if(!lbl_805624C0 || !(reinterpret_cast<unsigned int *>(lbl_805624C0)[0x24/4]&4)) fn_800ADAA0();
 return lbl_805624C0;
}
void *fn_800ADA48(){
 UnknownGenObject800ADA48 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AB40;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800ADAA0(){
 fn_80066188((int)fn_800ADAC8);
}
void fn_800ADAC8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624C0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800ADB3C,(int)lbl_80478160,20,(int)fn_800ADA48,(int)fn_800ADB5C,0,(int)lbl_8055DF68);
}
void *fn_800ADB3C(){return fn_800ADA0C();}
}
#pragma pop
