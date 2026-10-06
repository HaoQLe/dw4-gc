#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800B2F10();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80478E1C[];
extern char lbl_8047E0CC[];
extern char lbl_8047E130[];
extern char lbl_8055E2DC[8];
extern void *lbl_805626F4;
extern void *lbl_805626F8;
void *fn_800B2CD4();
void *fn_800B2D10();
void fn_800B2D80();
void fn_800B2DA8();
void *fn_800B2E14();
}
struct UnknownGenObject800B2D10_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B2CD4(){
 if(!lbl_805626F4 || !(reinterpret_cast<unsigned int *>(lbl_805626F4)[0x24/4]&4)) fn_800B2D80();
 return lbl_805626F4;
}
void *fn_800B2D10(){
 UnknownGenObject800B2D10_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047E130;
 object.unknown00=lbl_8047E0CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B2D80(){
 fn_80066188((int)fn_800B2DA8);
}
void fn_800B2DA8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626F4,(int)fn_8002907C,(int)fn_80024180,(int)fn_800B2E14,(int)lbl_80478E1C,20,(int)fn_800B2D10,0,0,(int)lbl_8055E2DC);
}
void *fn_800B2E14(){return fn_800B2CD4();}
void *fn_800B2E34(){
 if(!lbl_805626F8 || !(reinterpret_cast<unsigned int *>(lbl_805626F8)[0x24/4]&4)) fn_800B2F10();
 return lbl_805626F8;
}
}
#pragma pop
