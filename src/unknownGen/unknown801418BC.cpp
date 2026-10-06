#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801308D0();
void fn_8013A878();
void fn_8013B97C();
void *fn_8013BA10();
void fn_801423AC();
void fn_801465FC();
void fn_801527B0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049E130[];
extern char lbl_8049E144[];
extern char lbl_8049E154[];
extern char lbl_8049E164[];
extern char lbl_8049E17C[];
extern char lbl_8049E188[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A5F30[];
extern char lbl_804A5FB8[];
extern char lbl_804A6460[];
extern char lbl_804A9F64[];
extern char lbl_804A9FC8[];
extern char lbl_804AA02C[];
extern char lbl_804AA090[];
extern char lbl_804AA22C[];
extern char lbl_804AA878[];
extern char lbl_804AAF48[];
extern char lbl_8055F940[8];
extern char lbl_8055F948[8];
extern char lbl_8055F950[4];
extern char lbl_8055F954[4];
extern char lbl_8055F958[4];
extern char lbl_8055F95C[4];
extern void *lbl_805621F4;
extern void *lbl_80564048;
extern void *lbl_8056404C;
extern void *lbl_80564050;
extern void *lbl_80564054;
extern void *lbl_8056405C;
extern void *lbl_80564060;
extern void *lbl_8056417C;
void *fn_801418BC();
void *fn_801418F8();
void fn_80141968();
void fn_80141990();
void *fn_801419FC();
void *fn_80141A58();
void *fn_80141A94();
void fn_80141B04();
void fn_80141B2C();
void *fn_80141B98();
void *fn_80141BB8();
void *fn_80141BF4();
void fn_80141C4C();
void fn_80141C74();
void *fn_80141CDC();
void *fn_80141CFC();
void *fn_80141D38();
void fn_80141E68();
void fn_80141E90();
void *fn_80141F00();
void fn_80141F20();
void *fn_80141F88();
void *fn_80141FC4();
void fn_80142010();
void fn_80142038();
void *fn_801420A0();
void *fn_801420C0();
void *fn_801420C8();
void *fn_80142104();
void fn_801422F4();
void fn_8014231C();
void *fn_8014238C();
}
struct UnknownGenObject801418F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80141A94_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80141BF4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80141D38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80141D38(){fn_8006665C(this);}
};
struct UnknownGenObject80141D38_0 : UnknownGenRoot80141D38 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80141D38_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80141D38 : UnknownGenObject80141D38_0 {
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80141D38(){unknown00=lbl_804A5F30;}
};
struct UnknownGenObject80141FC4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80142104 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80142104(){fn_8006665C(this);}
};
struct UnknownGenObject80142104_0 : UnknownGenRoot80142104 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80142104_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80142104_1 : UnknownGenObject80142104_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80142104_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80142104 : UnknownGenObject80142104_1 {
 UnknownGenString unknown2C;
 UnknownGenString unknown30;
 char unknown34[4];
 UnknownGenString unknown38;
 char unknown3C[20];
 inline ~UnknownGenObject80142104(){unknown00=lbl_804A5FB8;}
};
extern "C" {
void *fn_801418BC(){
 if(!lbl_80564048 || !(reinterpret_cast<unsigned int *>(lbl_80564048)[0x24/4]&4)) fn_80141968();
 return lbl_80564048;
}
void *fn_801418F8(){
 UnknownGenObject801418F8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AA090;
 object.unknown00=lbl_804AA02C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80141968(){
 fn_80066188((int)fn_80141990);
}
void fn_80141990(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564048,(int)fn_8002907C,(int)fn_80024180,(int)fn_801419FC,(int)lbl_8049E130,20,(int)fn_801418F8,0,0,(int)lbl_8055F940);
}
void *fn_801419FC(){return fn_801418BC();}
void *fn_80141A1C(){
 if(!lbl_8056404C) lbl_8056404C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056404C;
}
void *fn_80141A58(){
 if(!lbl_8056404C || !(reinterpret_cast<unsigned int *>(lbl_8056404C)[0x24/4]&4)) fn_80141B04();
 return lbl_8056404C;
}
void *fn_80141A94(){
 UnknownGenObject80141A94_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9FC8;
 object.unknown00=lbl_804A9F64;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80141B04(){
 fn_80066188((int)fn_80141B2C);
}
void fn_80141B2C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056404C,(int)fn_8002907C,(int)fn_80024180,(int)fn_80141B98,(int)lbl_8049E144,20,(int)fn_80141A94,0,0,(int)lbl_8055F948);
}
void *fn_80141B98(){return fn_80141A58();}
void *fn_80141BB8(){
 if(!lbl_80564050 || !(reinterpret_cast<unsigned int *>(lbl_80564050)[0x24/4]&4)) fn_80141C4C();
 return lbl_80564050;
}
void *fn_80141BF4(){
 UnknownGenObject80141BF4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AA878;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80141C4C(){
 fn_80066188((int)fn_80141C74);
}
void fn_80141C74(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564050,(int)fn_801527B0,(int)fn_8013BA10,(int)fn_80141CDC,(int)lbl_8049E154,32,(int)fn_80141BF4,0,0,0);
}
void *fn_80141CDC(){return fn_80141BB8();}
void *fn_80141CFC(){
 if(!lbl_80564054 || !(reinterpret_cast<unsigned int *>(lbl_80564054)[0x24/4]&4)) fn_80141E68();
 return lbl_80564054;
}
void *fn_80141D38(){
 UnknownGenObject80141D38 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A5F30;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80141E68(){
 fn_80066188((int)fn_80141E90);
}
void fn_80141E90(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564054,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80141F00,(int)lbl_8049E164,44,(int)fn_80141D38,(int)fn_80141F20,0,0);
}
void *fn_80141F00(){return fn_80141CFC();}
void fn_80141F20(){
 void *value0=lbl_80564054;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F950,1);
 fn_800659C0(value0,lbl_8055F954,lbl_8055F958,lbl_8055F95C,value1);
}
void *fn_80141F88(){
 if(!lbl_8056405C || !(reinterpret_cast<unsigned int *>(lbl_8056405C)[0x24/4]&4)) fn_80142010();
 return lbl_8056405C;
}
void *fn_80141FC4(){
 UnknownGenObject80141FC4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA22C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80142010(){
 fn_80066188((int)fn_80142038);
}
void fn_80142038(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056405C,(int)fn_801465FC,(int)fn_801420C0,(int)fn_801420A0,(int)lbl_8049E17C,32,(int)fn_80141FC4,0,0,0);
}
void *fn_801420A0(){return fn_80141F88();}
void *fn_801420C0(){return lbl_8056417C;}
void *fn_801420C8(){
 if(!lbl_80564060 || !(reinterpret_cast<unsigned int *>(lbl_80564060)[0x24/4]&4)) fn_801422F4();
 return lbl_80564060;
}
void *fn_80142104(){
 UnknownGenObject80142104 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A5FB8;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801422F4(){
 fn_80066188((int)fn_8014231C);
}
void fn_8014231C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564060,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014238C,(int)lbl_8049E188,68,(int)fn_80142104,(int)fn_801423AC,0,0);
}
void *fn_8014238C(){return fn_801420C8();}
}
#pragma pop
