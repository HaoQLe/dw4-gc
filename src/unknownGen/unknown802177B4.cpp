#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void fn_80216B40();
void *fn_80216BE0();
void fn_802178DC();
extern char lbl_804BA4E4[];
extern char lbl_804BB42C[];
extern char lbl_804BC590[];
extern void *lbl_805659E4;
extern void *lbl_80565A30;
void *fn_802177F0();
void fn_8021783C();
void fn_80217864();
void *fn_802178D4();
}
struct UnknownGenObject802177F0 {
 void *unknown00;
 char unknown04[2516];
};
extern "C" {
void *fn_802177B4(){
 if(!lbl_80565A30 || !(reinterpret_cast<unsigned int *>(lbl_80565A30)[0x24/4]&4)) fn_8021783C();
 return lbl_80565A30;
}
void *fn_802177F0(){
 UnknownGenObject802177F0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BC590;
 object.unknown00=lbl_804BB42C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8021783C(){
 fn_80066188((int)fn_80217864);
}
void fn_80217864(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A30,(int)fn_80216B40,(int)fn_802178D4,(int)fn_80216BE0,(int)lbl_804BA4E4,2508,(int)fn_802177F0,(int)fn_802178DC,0,0);
}
void *fn_802178D4(){return lbl_805659E4;}
}
#pragma pop
