#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BA10();
void fn_80143AC8();
void fn_801527B0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049E404[];
extern char lbl_8049E418[];
extern char lbl_8049E428[];
extern char lbl_804A6460[];
extern char lbl_804A9CA0[];
extern char lbl_804A9D04[];
extern char lbl_804A9D68[];
extern char lbl_804A9DCC[];
extern char lbl_804AAED0[];
extern char lbl_804AAF48[];
extern char lbl_8055F9B0[8];
extern char lbl_8055F9B8[8];
extern void *lbl_805621F4;
extern void *lbl_805640C4;
extern void *lbl_805640C8;
extern void *lbl_805640CC;
extern void *lbl_805640D0;
void *fn_80143548();
void *fn_80143584();
void fn_801435F4();
void fn_8014361C();
void *fn_80143688();
void *fn_801436A8();
void *fn_801436E4();
void fn_80143754();
void fn_8014377C();
void *fn_801437E8();
void *fn_80143808();
void *fn_80143844();
void fn_8014389C();
void fn_801438C4();
void *fn_8014392C();
}
struct UnknownGenObject80143584_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801436E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80143844_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_8014350C(){
 if(!lbl_805640C4) lbl_805640C4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805640C4;
}
void *fn_80143548(){
 if(!lbl_805640C4 || !(reinterpret_cast<unsigned int *>(lbl_805640C4)[0x24/4]&4)) fn_801435F4();
 return lbl_805640C4;
}
void *fn_80143584(){
 UnknownGenObject80143584_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9DCC;
 object.unknown00=lbl_804A9D68;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801435F4(){
 fn_80066188((int)fn_8014361C);
}
void fn_8014361C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640C4,(int)fn_8002907C,(int)fn_80024180,(int)fn_80143688,(int)lbl_8049E404,20,(int)fn_80143584,0,0,(int)lbl_8055F9B0);
}
void *fn_80143688(){return fn_80143548();}
void *fn_801436A8(){
 if(!lbl_805640C8 || !(reinterpret_cast<unsigned int *>(lbl_805640C8)[0x24/4]&4)) fn_80143754();
 return lbl_805640C8;
}
void *fn_801436E4(){
 UnknownGenObject801436E4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9D04;
 object.unknown00=lbl_804A9CA0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80143754(){
 fn_80066188((int)fn_8014377C);
}
void fn_8014377C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640C8,(int)fn_8002907C,(int)fn_80024180,(int)fn_801437E8,(int)lbl_8049E418,20,(int)fn_801436E4,0,0,(int)lbl_8055F9B8);
}
void *fn_801437E8(){return fn_801436A8();}
void *fn_80143808(){
 if(!lbl_805640CC || !(reinterpret_cast<unsigned int *>(lbl_805640CC)[0x24/4]&4)) fn_8014389C();
 return lbl_805640CC;
}
void *fn_80143844(){
 UnknownGenObject80143844_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AAED0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014389C(){
 fn_80066188((int)fn_801438C4);
}
void fn_801438C4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640CC,(int)fn_801527B0,(int)fn_8013BA10,(int)fn_8014392C,(int)lbl_8049E428,32,(int)fn_80143844,0,0,0);
}
void *fn_8014392C(){return fn_80143808();}
void *fn_8014394C(){
 if(!lbl_805640D0 || !(reinterpret_cast<unsigned int *>(lbl_805640D0)[0x24/4]&4)) fn_80143AC8();
 return lbl_805640D0;
}
}
#pragma pop
