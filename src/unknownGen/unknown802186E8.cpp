#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80216620();
void fn_8021881C();
extern char lbl_804BA6C8[];
extern char lbl_804BBDF0[];
extern void *lbl_80565A90;
void *fn_802186E8();
void *fn_80218724();
void fn_80218764();
void fn_8021878C();
void *fn_802187FC();
}
struct UnknownGenObject80218724 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802186E8(){
 if(!lbl_80565A90 || !(reinterpret_cast<unsigned int *>(lbl_80565A90)[0x24/4]&4)) fn_80218764();
 return lbl_80565A90;
}
void *fn_80218724(){
 UnknownGenObject80218724 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BBDF0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80218764(){
 fn_80066188((int)fn_8021878C);
}
void fn_8021878C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A90,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802187FC,(int)lbl_804BA6C8,12,(int)fn_80218724,(int)fn_8021881C,0,0);
}
void *fn_802187FC(){return fn_802186E8();}
}
#pragma pop
