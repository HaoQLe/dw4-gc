#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029F84();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80075AC4(void *,int);
void fn_8012FC48();
void fn_80130490();
void fn_8013A878();
void fn_80140AB8();
void fn_80142EA8();
extern char lbl_8049BC80[];
extern char lbl_8049BCAC[];
extern char lbl_8049BCB8[];
extern char lbl_8049BCDC[];
extern char lbl_804A2BC0[];
extern char lbl_804A2CCC[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AADE0[];
extern char lbl_804AAE58[];
extern char lbl_804AAED0[];
extern char lbl_804AAF48[];
extern char lbl_8055F454[4];
extern char lbl_8055F458[4];
extern char lbl_8055F45C[4];
extern char lbl_8055F460[4];
extern char lbl_8055F464[8];
extern char lbl_8055F46C[4];
extern char lbl_8055F470[4];
extern char lbl_8055F474[4];
extern char lbl_8055F478[4];
extern void *lbl_80563A9C;
extern void *lbl_80563AA4;
extern void *lbl_80563AA8;
extern void *lbl_80563AB0;
extern void *lbl_80563E54;
extern void *lbl_80564000;
extern void *lbl_805640A4;
void *fn_8012FC7C();
void *fn_8012FCB8();
void fn_8012FDF8();
void fn_8012FE20();
void *fn_8012FE90();
void *fn_8012FEB0();
void fn_8012FEB8();
void *fn_8012FF34();
void fn_8012FF70();
void fn_8012FF98();
void *fn_8012FFFC();
void *fn_8013001C();
void *fn_80130024();
void *fn_80130060();
void fn_80130118();
void fn_80130140();
void *fn_801301B4();
void *fn_801301D4();
void fn_801301DC();
void *fn_8013025C();
void *fn_80130298();
void fn_801303D8();
void fn_80130400();
void *fn_80130470();
}
struct UnknownGenRoot8012FCB8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8012FCB8(){fn_8006665C(this);}
};
struct UnknownGenObject8012FCB8_0 : UnknownGenRoot8012FCB8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8012FCB8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8012FCB8_1 : UnknownGenObject8012FCB8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8012FCB8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8012FCB8 : UnknownGenObject8012FCB8_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8012FCB8(){unknown00=lbl_804A2BC0;}
};
struct UnknownGenRoot80130060 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130060(){fn_8006665C(this);}
};
struct UnknownGenObject80130060 : UnknownGenRoot80130060 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject80130060(){unknown00=lbl_804AADE0;}
};
struct UnknownGenRoot80130298 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130298(){fn_8006665C(this);}
};
struct UnknownGenObject80130298_0 : UnknownGenRoot80130298 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80130298_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80130298_1 : UnknownGenObject80130298_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80130298_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80130298 : UnknownGenObject80130298_1 {
 char unknown2C[12];
 inline ~UnknownGenObject80130298(){unknown00=lbl_804A2CCC;}
};
extern "C" {
void *fn_8012FC7C(){
 if(!lbl_80563A9C || !(reinterpret_cast<unsigned int *>(lbl_80563A9C)[0x24/4]&4)) fn_8012FDF8();
 return lbl_80563A9C;
}
void *fn_8012FCB8(){
 UnknownGenObject8012FCB8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A2BC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8012FDF8(){
 fn_80066188((int)fn_8012FE20);
}
void fn_8012FE20(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563A9C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8012FE90,(int)lbl_8049BC80,48,(int)fn_8012FCB8,(int)fn_8012FEB8,0,0);
}
void *fn_8012FE90(){return fn_8012FC7C();}
void *fn_8012FEB0(){return lbl_80563E54;}
void fn_8012FEB8(){
 void *value0=lbl_80563A9C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F454,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80075AC4(value2,16);
 fn_800659C0(value0,lbl_8055F458,lbl_8055F45C,lbl_8055F460,value1);
}
void *fn_8012FF34(){
 if(!lbl_80563AA4 || !(reinterpret_cast<unsigned int *>(lbl_80563AA4)[0x24/4]&4)) fn_8012FF70();
 return lbl_80563AA4;
}
void fn_8012FF70(){
 fn_80066188((int)fn_8012FF98);
}
void fn_8012FF98(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563AA4,(int)fn_80142EA8,(int)fn_8013001C,(int)fn_8012FFFC,(int)lbl_8049BCAC,32,0,0,0,0);
}
void *fn_8012FFFC(){return fn_8012FF34();}
void *fn_8013001C(){return lbl_805640A4;}
void *fn_80130024(){
 if(!lbl_80563AA8 || !(reinterpret_cast<unsigned int *>(lbl_80563AA8)[0x24/4]&4)) fn_80130118();
 return lbl_80563AA8;
}
void *fn_80130060(){
 UnknownGenObject80130060 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AAED0;
 object.unknown00=lbl_804AAE58;
 object.unknown00=lbl_804AADE0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80130118(){
 fn_80066188((int)fn_80130140);
}
void fn_80130140(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563AA8,(int)fn_80140AB8,(int)fn_801301D4,(int)fn_801301B4,(int)lbl_8049BCB8,36,(int)fn_80130060,(int)fn_801301DC,0,(int)lbl_8055F464);
}
void *fn_801301B4(){return fn_80130024();}
void *fn_801301D4(){return lbl_80564000;}
void fn_801301DC(){
 void *value0=lbl_80563AA8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F46C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055F470,lbl_8055F474,lbl_8055F478,value1);
}
void *fn_8013025C(){
 if(!lbl_80563AB0 || !(reinterpret_cast<unsigned int *>(lbl_80563AB0)[0x24/4]&4)) fn_801303D8();
 return lbl_80563AB0;
}
void *fn_80130298(){
 UnknownGenObject80130298 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A2CCC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801303D8(){
 fn_80066188((int)fn_80130400);
}
void fn_80130400(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563AB0,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80130470,(int)lbl_8049BCDC,52,(int)fn_80130298,(int)fn_80130490,0,0);
}
void *fn_80130470(){return fn_8013025C();}
}
#pragma pop
