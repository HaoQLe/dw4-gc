#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CAEE0();
void fn_800CB958();
void *fn_800CBA80();
void fn_800CBB50();
void *fn_800CBC7C();
void fn_800CC288();
extern char lbl_8047FFA4[];
extern char lbl_80480130[];
extern char lbl_80480338[];
extern char lbl_804803A0[];
extern char lbl_80480590[];
extern char lbl_804805F8[];
extern char lbl_80480E60[];
extern char lbl_8055E9D4[8];
extern void *lbl_80562C08;
extern void *lbl_80562C14;
extern void *lbl_80562C50;
extern void *lbl_80562C54;
void *fn_800CBF94();
void fn_800CC038();
void fn_800CC060();
void *fn_800CC0C8();
void *fn_800CC144();
void fn_800CC1E4();
void fn_800CC20C();
void *fn_800CC280();
}
struct UnknownGenRoot800CBF94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CBF94(){fn_8006665C(this);}
};
struct UnknownGenObject800CBF94_0 : UnknownGenRoot800CBF94 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800CBF94_0(){unknown00=lbl_80480590;}
};
struct UnknownGenObject800CBF94 : UnknownGenObject800CBF94_0 {
 char unknown0C[4];
 inline ~UnknownGenObject800CBF94(){unknown00=lbl_80480338;}
};
struct UnknownGenRoot800CC144 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CC144(){fn_8006665C(this);}
};
struct UnknownGenObject800CC144 : UnknownGenRoot800CC144 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[20];
 inline ~UnknownGenObject800CC144(){unknown00=lbl_804803A0;}
};
extern "C" {
void *fn_800CBF58(){
 if(!lbl_80562C50 || !(reinterpret_cast<unsigned int *>(lbl_80562C50)[0x24/4]&4)) fn_800CC038();
 return lbl_80562C50;
}
void *fn_800CBF94(){
 UnknownGenObject800CBF94 object;
 object.unknown00=lbl_80480E60;
 object.unknown00=lbl_80480590;
 object.unknown08.value=0;
 object.unknown00=lbl_80480338;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CC038(){
 fn_80066188((int)fn_800CC060);
}
void fn_800CC060(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562C50,(int)fn_800CB958,(int)fn_800CC0C8,(int)fn_800CBA80,(int)lbl_8047FFA4,12,(int)fn_800CBF94,0,0,0);
}
void *fn_800CC0C8(){return lbl_80562C08;}
void *fn_800CC0D0(void *object){
 fn_800CC1E4();
 return fn_8006546C(lbl_80562C54,object);
}
void *fn_800CC108(){
 if(!lbl_80562C54 || !(reinterpret_cast<unsigned int *>(lbl_80562C54)[0x24/4]&4)) fn_800CC1E4();
 return lbl_80562C54;
}
void *fn_800CC144(){
 UnknownGenObject800CC144 object;
 object.unknown00=lbl_80480E60;
 object.unknown00=lbl_804805F8;
 object.unknown00=lbl_804803A0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CC1E4(){
 fn_80066188((int)fn_800CC20C);
}
void fn_800CC20C(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562C54,(int)fn_800CBB50,(int)fn_800CC280,(int)fn_800CBC7C,(int)lbl_80480130,52,(int)fn_800CC144,(int)fn_800CC288,0,(int)lbl_8055E9D4);
}
void *fn_800CC280(){return lbl_80562C14;}
}
#pragma pop
