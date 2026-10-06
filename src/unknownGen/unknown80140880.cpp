#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void *fn_8013496C();
void fn_8013B97C();
void fn_80140EA4();
void fn_80141C74();
void fn_801438C4();
void fn_80145C0C();
extern char lbl_8049DFC4[];
extern char lbl_8049DFD8[];
extern char lbl_8049DFF0[];
extern char lbl_8049E008[];
extern char lbl_804A4A04[];
extern char lbl_804A5D10[];
extern char lbl_804A6460[];
extern char lbl_804AAE58[];
extern char lbl_804AAED0[];
extern char lbl_804AAF48[];
extern char lbl_8055F8F8[8];
extern char lbl_8055F900[4];
extern char lbl_8055F904[4];
extern char lbl_8055F908[4];
extern char lbl_8055F90C[4];
extern char lbl_8055F910[8];
extern char lbl_8055F918[4];
extern char lbl_8055F91C[4];
extern char lbl_8055F920[4];
extern char lbl_8055F924[4];
extern void *lbl_805622A4;
extern void *lbl_80563FF8;
extern void *lbl_80564000;
extern void *lbl_80564004;
extern void *lbl_8056400C;
extern void *lbl_80564050;
extern void *lbl_805640CC;
void *fn_80140880();
void fn_801408BC();
void fn_801408E4();
void *fn_80140954();
void fn_80140974();
void *fn_801409F0();
void *fn_80140A2C();
void fn_80140A90();
void fn_80140AB8();
void *fn_80140B20();
void *fn_80140B40();
void *fn_80140B48();
void fn_80140B84();
void fn_80140BAC();
void *fn_80140C1C();
void *fn_80140C3C();
void fn_80140C44();
void *fn_80140CC0();
void *fn_80140CFC();
void fn_80140DEC();
void fn_80140E14();
void *fn_80140E84();
}
struct UnknownGenObject80140A2C_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80140CFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140CFC(){fn_8006665C(this);}
};
struct UnknownGenObject80140CFC_0 : UnknownGenRoot80140CFC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80140CFC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80140CFC : UnknownGenObject80140CFC_0 {
 char unknown28[24];
 inline ~UnknownGenObject80140CFC(){unknown00=lbl_804A5D10;}
};
extern "C" {
void *fn_80140880(){
 if(!lbl_80563FF8 || !(reinterpret_cast<unsigned int *>(lbl_80563FF8)[0x24/4]&4)) fn_801408BC();
 return lbl_80563FF8;
}
void fn_801408BC(){
 fn_80066188((int)fn_801408E4);
}
void fn_801408E4(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563FF8,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_80140954,(int)lbl_8049DFC4,36,0,(int)fn_80140974,0,(int)lbl_8055F8F8);
}
void *fn_80140954(){return fn_80140880();}
void fn_80140974(){
 void *value0=lbl_80563FF8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F900,1);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=lbl_805622A4;
 fn_800659C0(value0,lbl_8055F904,lbl_8055F908,lbl_8055F90C,value1);
}
void *fn_801409F0(){
 if(!lbl_80564000 || !(reinterpret_cast<unsigned int *>(lbl_80564000)[0x24/4]&4)) fn_80140A90();
 return lbl_80564000;
}
void *fn_80140A2C(){
 UnknownGenObject80140A2C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AAED0;
 object.unknown00=lbl_804AAE58;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80140A90(){
 fn_80066188((int)fn_80140AB8);
}
void fn_80140AB8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564000,(int)fn_801438C4,(int)fn_80140B40,(int)fn_80140B20,(int)lbl_8049DFD8,32,(int)fn_80140A2C,0,0,0);
}
void *fn_80140B20(){return fn_801409F0();}
void *fn_80140B40(){return lbl_805640CC;}
void *fn_80140B48(){
 if(!lbl_80564004 || !(reinterpret_cast<unsigned int *>(lbl_80564004)[0x24/4]&4)) fn_80140B84();
 return lbl_80564004;
}
void fn_80140B84(){
 fn_80066188((int)fn_80140BAC);
}
void fn_80140BAC(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564004,(int)fn_80141C74,(int)fn_80140C3C,(int)fn_80140C1C,(int)lbl_8049DFF0,36,0,(int)fn_80140C44,0,(int)lbl_8055F910);
}
void *fn_80140C1C(){return fn_80140B48();}
void *fn_80140C3C(){return lbl_80564050;}
void fn_80140C44(){
 void *value0=lbl_80564004;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F918,1);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=lbl_805622A4;
 fn_800659C0(value0,lbl_8055F91C,lbl_8055F920,lbl_8055F924,value1);
}
void *fn_80140CC0(){
 if(!lbl_8056400C || !(reinterpret_cast<unsigned int *>(lbl_8056400C)[0x24/4]&4)) fn_80140DEC();
 return lbl_8056400C;
}
void *fn_80140CFC(){
 UnknownGenObject80140CFC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A5D10;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80140DEC(){
 fn_80066188((int)fn_80140E14);
}
void fn_80140E14(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056400C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80140E84,(int)lbl_8049E008,56,(int)fn_80140CFC,(int)fn_80140EA4,0,0);
}
void *fn_80140E84(){return fn_80140CC0();}
}
#pragma pop
