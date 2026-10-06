#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801ADAC8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804ABE4C[];
extern char lbl_804B9898[];
extern void *lbl_805647A0;
void *fn_801AD970();
void *fn_801AD9AC();
void fn_801ADA10();
void fn_801ADA38();
void *fn_801ADAA8();
}
struct UnknownGenObject801AD9AC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801AD970(){
 if(!lbl_805647A0 || !(reinterpret_cast<unsigned int *>(lbl_805647A0)[0x24/4]&4)) fn_801ADA10();
 return lbl_805647A0;
}
void *fn_801AD9AC(){
 UnknownGenObject801AD9AC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9898;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801ADA10(){
 fn_80066188((int)fn_801ADA38);
}
void fn_801ADA38(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647A0,(int)fn_8002907C,(int)fn_80024180,(int)fn_801ADAA8,(int)lbl_804ABE4C,32,(int)fn_801AD9AC,(int)fn_801ADAC8,0,0);
}
void *fn_801ADAA8(){return fn_801AD970();}
}
#pragma pop
