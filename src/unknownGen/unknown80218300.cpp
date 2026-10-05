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
void fn_80218434();
extern char lbl_804BA618[];
extern char lbl_804BBFDC[];
extern void *lbl_80565A70;
void *fn_80218300();
void *fn_8021833C();
void fn_8021837C();
void fn_802183A4();
void *fn_80218414();
}
struct UnknownGenObject8021833C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80218300(){
 if(!lbl_80565A70 || !(reinterpret_cast<unsigned int *>(lbl_80565A70)[0x24/4]&4)) fn_8021837C();
 return lbl_80565A70;
}
void *fn_8021833C(){
 UnknownGenObject8021833C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BBFDC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8021837C(){
 fn_80066188((int)fn_802183A4);
}
void fn_802183A4(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A70,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80218414,(int)lbl_804BA618,12,(int)fn_8021833C,(int)fn_80218434,0,0);
}
void *fn_80218414(){return fn_80218300();}
}
#pragma pop
