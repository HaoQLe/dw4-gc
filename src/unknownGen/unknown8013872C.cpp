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
void fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_80138CE4();
void fn_8013A878();
extern char lbl_8049D19C[];
extern char lbl_8049D1AC[];
extern char lbl_8049D1D0[];
extern char lbl_8049D2AC[];
extern char lbl_804A41D0[];
extern char lbl_804A426C[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F6FC[8];
extern char lbl_8055F704[8];
extern char lbl_8055F70C[8];
extern char lbl_8055F714[8];
extern void *lbl_80563DAC;
extern void *lbl_80563DB8;
void *fn_8013872C();
void *fn_80138768();
void fn_80138920();
void fn_80138948();
void *fn_801389B8();
void fn_801389D8();
void *fn_80138A70();
void *fn_80138AAC();
void fn_80138C2C();
void fn_80138C54();
void *fn_80138CC4();
}
struct UnknownGenRoot80138768 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80138768(){fn_8006665C(this);}
};
struct UnknownGenObject80138768_0 : UnknownGenRoot80138768 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80138768_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80138768_1 : UnknownGenObject80138768_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80138768_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80138768 : UnknownGenObject80138768_1 {
 UnknownGenString unknown2C;
 UnknownGenString unknown30;
 char unknown34[12];
 inline ~UnknownGenObject80138768(){unknown00=lbl_804A41D0;}
};
struct UnknownGenRoot80138AAC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80138AAC(){fn_8006665C(this);}
};
struct UnknownGenObject80138AAC_0 : UnknownGenRoot80138AAC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80138AAC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80138AAC_1 : UnknownGenObject80138AAC_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80138AAC_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80138AAC : UnknownGenObject80138AAC_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80138AAC(){unknown00=lbl_804A426C;}
};
extern "C" {
void *fn_8013872C(){
 if(!lbl_80563DAC || !(reinterpret_cast<unsigned int *>(lbl_80563DAC)[0x24/4]&4)) fn_80138920();
 return lbl_80563DAC;
}
void *fn_80138768(){
 UnknownGenObject80138768 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A41D0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80138920(){
 fn_80066188((int)fn_80138948);
}
void fn_80138948(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DAC,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_801389B8,(int)lbl_8049D1AC,52,(int)fn_80138768,(int)fn_801389D8,0,0);
}
void *fn_801389B8(){return fn_8013872C();}
void fn_801389D8(){
 void *value0=lbl_80563DAC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F6FC,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,lbl_8049D19C);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80071694(value3,lbl_8049D1D0);
 fn_800659C0(value0,lbl_8055F704,lbl_8055F70C,lbl_8055F714,value1);
}
void *fn_80138A70(){
 if(!lbl_80563DB8 || !(reinterpret_cast<unsigned int *>(lbl_80563DB8)[0x24/4]&4)) fn_80138C2C();
 return lbl_80563DB8;
}
void *fn_80138AAC(){
 UnknownGenObject80138AAC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A426C;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80138C2C(){
 fn_80066188((int)fn_80138C54);
}
void fn_80138C54(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DB8,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80138CC4,(int)lbl_8049D2AC,56,(int)fn_80138AAC,(int)fn_80138CE4,0,0);
}
void *fn_80138CC4(){return fn_80138A70();}
}
#pragma pop
