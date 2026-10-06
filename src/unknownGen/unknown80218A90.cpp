#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_800284EC();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_8002EABC();
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
void fn_80216620();
void fn_80219564();
extern char lbl_80472460[];
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804BA8F4[];
extern char lbl_804BA918[];
extern char lbl_804BA928[];
extern char lbl_804BA93C[];
extern char lbl_804BA990[];
extern char lbl_804BA9A0[];
extern char lbl_804BB680[];
extern char lbl_804BBA38[];
extern char lbl_804BBA9C[];
extern char lbl_804BBB00[];
extern char lbl_804BBB64[];
extern char lbl_80560C58[8];
extern char lbl_80560C60[4];
extern char lbl_80560C64[4];
extern char lbl_80560C68[4];
extern char lbl_80560C6C[4];
extern char lbl_80560C70[8];
extern char lbl_80560C78[8];
extern char lbl_80560C80[4];
extern char lbl_80560C84[4];
extern char lbl_80560C88[4];
extern char lbl_80560C8C[4];
extern void *lbl_805621F4;
extern void *lbl_80565AE4;
extern void *lbl_80565AEC;
extern void *lbl_80565AF0;
extern void *lbl_80565AF4;
extern void *lbl_80565B08;
void *fn_80218B04();
void *fn_80218B40();
void fn_80218BC8();
void fn_80218BF0();
void *fn_80218C64();
void fn_80218C84();
void *fn_80218D14();
void *fn_80218D50();
void *fn_80218D8C();
void fn_80218DFC();
void fn_80218E24();
void *fn_80218E90();
void *fn_80218EEC();
void fn_80218F28();
void fn_80218F50();
void *fn_80218FB4();
void *fn_80219048();
void *fn_80219084();
void fn_8021917C();
void fn_802191A4();
void *fn_80219218();
void fn_80219238();
void *fn_802192F8();
void *fn_80219334();
void fn_802194A4();
void fn_802194CC();
void *fn_80219544();
}
struct UnknownGenRoot80218B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218B40(){fn_8006665C(this);}
};
struct UnknownGenObject80218B40 : UnknownGenRoot80218B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80218B40(){unknown00=lbl_804BBB64;}
};
struct UnknownGenObject80218D8C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80219084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219084(){fn_8006665C(this);}
};
struct UnknownGenObject80219084_0 : UnknownGenRoot80219084 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80219084_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80219084_1 : UnknownGenObject80219084_0 {
 inline ~UnknownGenObject80219084_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject80219084 : UnknownGenObject80219084_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80219084(){unknown00=lbl_804BBA38;}
};
struct UnknownGenRoot80219334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219334(){fn_8006665C(this);}
};
struct UnknownGenObject80219334 : UnknownGenRoot80219334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80219334(){unknown00=lbl_804BB680;}
};
extern "C" {
void *fn_80218A90(void *object){
 fn_80218BC8();
 return fn_8006546C(lbl_80565AE4,object);
}
void *fn_80218AC8(){
 if(!lbl_80565AE4) lbl_80565AE4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565AE4;
}
void *fn_80218B04(){
 if(!lbl_80565AE4 || !(reinterpret_cast<unsigned int *>(lbl_80565AE4)[0x24/4]&4)) fn_80218BC8();
 return lbl_80565AE4;
}
void *fn_80218B40(){
 UnknownGenObject80218B40 object;
 object.unknown00=lbl_804BBB64;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80218BC8(){
 fn_80066188((int)fn_80218BF0);
}
void fn_80218BF0(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565AE4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80218C64,(int)lbl_804BA8F4,12,(int)fn_80218B40,(int)fn_80218C84,0,(int)lbl_80560C58);
}
void *fn_80218C64(){return fn_80218B04();}
void fn_80218C84(){
 void *value0=lbl_80565AE4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560C60,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80218D14();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_80560C64,lbl_80560C68,lbl_80560C6C,value1);
}
void *fn_80218D14(){
 if(!lbl_80565AEC) lbl_80565AEC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565AEC;
}
void *fn_80218D50(){
 if(!lbl_80565AEC || !(reinterpret_cast<unsigned int *>(lbl_80565AEC)[0x24/4]&4)) fn_80218DFC();
 return lbl_80565AEC;
}
void *fn_80218D8C(){
 UnknownGenObject80218D8C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804BBB00;
 object.unknown00=lbl_804BBA9C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80218DFC(){
 fn_80066188((int)fn_80218E24);
}
void fn_80218E24(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565AEC,(int)fn_8002907C,(int)fn_80024180,(int)fn_80218E90,(int)lbl_804BA918,20,(int)fn_80218D8C,0,0,(int)lbl_80560C70);
}
void *fn_80218E90(){return fn_80218D50();}
void *fn_80218EB0(){
 if(!lbl_80565AF0) lbl_80565AF0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565AF0;
}
void *fn_80218EEC(){
 if(!lbl_80565AF0 || !(reinterpret_cast<unsigned int *>(lbl_80565AF0)[0x24/4]&4)) fn_80218F28();
 return lbl_80565AF0;
}
void fn_80218F28(){
 fn_80066188((int)fn_80218F50);
}
void fn_80218F50(){
 fn_80216620();
 fn_80066204(1,(int)&lbl_80565AF0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80218FB4,(int)lbl_804BA928,8,0,0,0,0);
}
void *fn_80218FB4(){return fn_80218EEC();}
void *fn_80218FD4(void *object){
 fn_8021917C();
 return fn_8006546C(lbl_80565AF4,object);
}
void *fn_8021900C(){
 if(!lbl_80565AF4) lbl_80565AF4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565AF4;
}
void *fn_80219048(){
 if(!lbl_80565AF4 || !(reinterpret_cast<unsigned int *>(lbl_80565AF4)[0x24/4]&4)) fn_8021917C();
 return lbl_80565AF4;
}
void *fn_80219084(){
 UnknownGenObject80219084 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804BBA38;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8021917C(){
 fn_80066188((int)fn_802191A4);
}
void fn_802191A4(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565AF4,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_80219218,(int)lbl_804BA93C,24,(int)fn_80219084,(int)fn_80219238,0,(int)lbl_80560C78);
}
void *fn_80219218(){return fn_80219048();}
void fn_80219238(){
 void *value0=lbl_80565AF4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560C80,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80218D14();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_80560C84,lbl_80560C88,lbl_80560C8C,value1);
}
void *fn_802192C0(void *object){
 fn_802194A4();
 return fn_8006546C(lbl_80565B08,object);
}
void *fn_802192F8(){
 if(!lbl_80565B08 || !(reinterpret_cast<unsigned int *>(lbl_80565B08)[0x24/4]&4)) fn_802194A4();
 return lbl_80565B08;
}
void *fn_80219334(){
 UnknownGenObject80219334 object;
 object.unknown00=lbl_804BB680;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802194A4(){
 fn_80066188((int)fn_802194CC);
}
void fn_802194CC(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565B08,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80219544,(int)lbl_804BA9A0,28,(int)fn_80219334,(int)fn_80219564,0,(int)lbl_804BA990);
}
void *fn_80219544(){return fn_802192F8();}
}
#pragma pop
