#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AE2B0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804781B0[];
extern char lbl_8047E2B8[];
extern char lbl_8047E31C[];
extern char lbl_8055DFD0[8];
extern void *lbl_805621F4;
extern void *lbl_805624E4;
extern void *lbl_805624E8;
void *fn_800AE040();
void *fn_800AE07C();
void fn_800AE0EC();
void fn_800AE114();
void *fn_800AE180();
}
struct UnknownGenObject800AE07C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AE040(){
 if(!lbl_805624E4 || !(reinterpret_cast<unsigned int *>(lbl_805624E4)[0x24/4]&4)) fn_800AE0EC();
 return lbl_805624E4;
}
void *fn_800AE07C(){
 UnknownGenObject800AE07C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047E31C;
 object.unknown00=lbl_8047E2B8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AE0EC(){
 fn_80066188((int)fn_800AE114);
}
void fn_800AE114(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624E4,(int)fn_8002907C,(int)fn_80024180,(int)fn_800AE180,(int)lbl_804781B0,20,(int)fn_800AE07C,0,0,(int)lbl_8055DFD0);
}
void *fn_800AE180(){return fn_800AE040();}
void *fn_800AE1A0(void *object){
 fn_800AE2B0();
 return fn_8006546C(lbl_805624E8,object);
}
void *fn_800AE1D8(){
 if(!lbl_805624E8) lbl_805624E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805624E8;
}
void *fn_800AE214(){
 if(!lbl_805624E8 || !(reinterpret_cast<unsigned int *>(lbl_805624E8)[0x24/4]&4)) fn_800AE2B0();
 return lbl_805624E8;
}
}
#pragma pop
