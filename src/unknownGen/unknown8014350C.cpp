#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80075AC4(void *,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8013BA10();
void fn_80143FD4();
void fn_801527B0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049E404[];
extern char lbl_8049E418[];
extern char lbl_8049E428[];
extern char lbl_8049E438[];
extern char lbl_8049E454[];
extern char lbl_8049E460[];
extern char lbl_8049E478[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6224[];
extern char lbl_804A6460[];
extern char lbl_804A9BE8[];
extern char lbl_804A9C44[];
extern char lbl_804A9CA0[];
extern char lbl_804A9D04[];
extern char lbl_804A9D68[];
extern char lbl_804A9DCC[];
extern char lbl_804AAED0[];
extern char lbl_804AAF48[];
extern char lbl_8055F9B0[8];
extern char lbl_8055F9B8[8];
extern char lbl_8055F9C0[4];
extern char lbl_8055F9C4[4];
extern char lbl_8055F9C8[4];
extern char lbl_8055F9CC[4];
extern void *lbl_805621F4;
extern void *lbl_805640C4;
extern void *lbl_805640C8;
extern void *lbl_805640CC;
extern void *lbl_805640D0;
extern void *lbl_805640D8;
extern void *lbl_805640DC;
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
void *fn_8014394C();
void *fn_80143988();
void fn_80143AC8();
void fn_80143AF0();
void *fn_80143B60();
void fn_80143B80();
void *fn_80143BFC();
void fn_80143C38();
void fn_80143C60();
void *fn_80143CC4();
void *fn_80143D1C();
void *fn_80143D58();
void fn_80143F0C();
void fn_80143F34();
void *fn_80143FAC();
void *fn_80143FCC();
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
struct UnknownGenRoot80143988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80143988(){fn_8006665C(this);}
};
struct UnknownGenObject80143988_0 : UnknownGenRoot80143988 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80143988_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80143988_1 : UnknownGenObject80143988_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80143988_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80143988 : UnknownGenObject80143988_1 {
 char unknown2C[12];
 inline ~UnknownGenObject80143988(){unknown00=lbl_804A6224;}
};
struct UnknownGenRoot80143D58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80143D58(){fn_8006665C(this);}
};
struct UnknownGenObject80143D58 : UnknownGenRoot80143D58 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenString unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject80143D58(){unknown00=lbl_804A9BE8;}
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
void *fn_80143988(){
 UnknownGenObject80143988 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A6224;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80143AC8(){
 fn_80066188((int)fn_80143AF0);
}
void fn_80143AF0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640D0,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80143B60,(int)lbl_8049E438,48,(int)fn_80143988,(int)fn_80143B80,0,0);
}
void *fn_80143B60(){return fn_8014394C();}
void fn_80143B80(){
 void *value0=lbl_805640D0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F9C0,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80075AC4(value2,16);
 fn_800659C0(value0,lbl_8055F9C4,lbl_8055F9C8,lbl_8055F9CC,value1);
}
void *fn_80143BFC(){
 if(!lbl_805640D8 || !(reinterpret_cast<unsigned int *>(lbl_805640D8)[0x24/4]&4)) fn_80143C38();
 return lbl_805640D8;
}
void fn_80143C38(){
 fn_80066188((int)fn_80143C60);
}
void fn_80143C60(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805640D8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80143CC4,(int)lbl_8049E454,8,0,0,0,0);
}
void *fn_80143CC4(){return fn_80143BFC();}
void *fn_80143CE4(void *object){
 fn_80143F0C();
 return fn_8006546C(lbl_805640DC,object);
}
void *fn_80143D1C(){
 if(!lbl_805640DC || !(reinterpret_cast<unsigned int *>(lbl_805640DC)[0x24/4]&4)) fn_80143F0C();
 return lbl_805640DC;
}
void *fn_80143D58(){
 UnknownGenObject80143D58 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9BE8;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80143F0C(){
 fn_80066188((int)fn_80143F34);
}
void fn_80143F34(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640DC,(int)fn_80143C60,(int)fn_80143FCC,(int)fn_80143FAC,(int)lbl_8049E478,36,(int)fn_80143D58,(int)fn_80143FD4,0,(int)lbl_8049E460);
}
void *fn_80143FAC(){return fn_80143D1C();}
void *fn_80143FCC(){return lbl_805640D8;}
}
#pragma pop
