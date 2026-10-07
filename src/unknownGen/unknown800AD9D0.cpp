#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800AE2B0();
void *fn_800AF4A4();
void fn_800C4880(int);
void fn_800C49B4(int);
void fn_800C4B28(int);
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80478160[];
extern char lbl_80478180[];
extern char lbl_80478194[];
extern char lbl_804781B0[];
extern char lbl_8047AB40[];
extern char lbl_8047ABC4[];
extern char lbl_8047AC48[];
extern char lbl_8047D578[];
extern char lbl_8047E2B8[];
extern char lbl_8047E31C[];
extern char lbl_8047E50C[];
extern char lbl_8055DF68[8];
extern char lbl_8055DF70[8];
extern char lbl_8055DF78[8];
extern char lbl_8055DF80[8];
extern char lbl_8055DF88[8];
extern char lbl_8055DF90[8];
extern char lbl_8055DF98[8];
extern char lbl_8055DFA0[8];
extern char lbl_8055DFA8[8];
extern char lbl_8055DFB0[8];
extern char lbl_8055DFB8[8];
extern char lbl_8055DFC0[8];
extern char lbl_8055DFC8[8];
extern char lbl_8055DFD0[8];
extern void *lbl_805621F4;
extern void *lbl_805624C0;
extern void *lbl_805624CC;
extern void *lbl_805624D8;
extern void *lbl_805624E4;
extern void *lbl_805624E8;
void *fn_800ADA0C();
void *fn_800ADA48();
void fn_800ADAA0();
void fn_800ADAC8();
void *fn_800ADB3C();
void fn_800ADB5C();
void *fn_800ADC70();
void *fn_800ADCAC();
void fn_800ADD04();
void fn_800ADD2C();
void *fn_800ADD9C();
void fn_800ADDBC();
void *fn_800ADE74();
void *fn_800ADEB0();
void fn_800ADF08();
void fn_800ADF30();
void *fn_800ADFA0();
void fn_800ADFC0();
void *fn_800AE040();
void *fn_800AE07C();
void fn_800AE0EC();
void fn_800AE114();
void *fn_800AE180();
}
struct UnknownGenObject800ADA48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADCAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADEB0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AE07C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD9D0(){
 if(!lbl_805624C0) lbl_805624C0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805624C0;
}
void *fn_800ADA0C(){
 if(!lbl_805624C0 || !(reinterpret_cast<unsigned int *>(lbl_805624C0)[0x24/4]&4)) fn_800ADAA0();
 return lbl_805624C0;
}
void *fn_800ADA48(){
 UnknownGenObject800ADA48_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AB40;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800ADAA0(){
 fn_80066188((int)fn_800ADAC8);
}
void fn_800ADAC8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624C0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800ADB3C,(int)lbl_80478160,20,(int)fn_800ADA48,(int)fn_800ADB5C,0,(int)lbl_8055DF68);
}
void *fn_800ADB3C(){return fn_800ADA0C();}
void fn_800ADB5C(){
 void *value0=lbl_805624C0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DF70,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800AF4A4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+48)=(void *)fn_800C4B28;
 fn_800659C0(value0,lbl_8055DF78,lbl_8055DF80,lbl_8055DF88,value1);
}
void *fn_800ADBFC(void *object){
 fn_800ADD04();
 return fn_8006546C(lbl_805624CC,object);
}
void *fn_800ADC34(){
 if(!lbl_805624CC) lbl_805624CC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805624CC;
}
void *fn_800ADC70(){
 if(!lbl_805624CC || !(reinterpret_cast<unsigned int *>(lbl_805624CC)[0x24/4]&4)) fn_800ADD04();
 return lbl_805624CC;
}
void *fn_800ADCAC(){
 UnknownGenObject800ADCAC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047ABC4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800ADD04(){
 fn_80066188((int)fn_800ADD2C);
}
void fn_800ADD2C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624CC,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800ADD9C,(int)lbl_80478180,20,(int)fn_800ADCAC,(int)fn_800ADDBC,0,0);
}
void *fn_800ADD9C(){return fn_800ADC70();}
void fn_800ADDBC(){
 void *value0=lbl_805624CC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DF90,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C49B4;
 fn_800659C0(value0,lbl_8055DF98,lbl_8055DFA0,lbl_8055DFA8,value1);
}
void *fn_800ADE3C(void *object){
 fn_800ADF08();
 return fn_8006546C(lbl_805624D8,object);
}
void *fn_800ADE74(){
 if(!lbl_805624D8 || !(reinterpret_cast<unsigned int *>(lbl_805624D8)[0x24/4]&4)) fn_800ADF08();
 return lbl_805624D8;
}
void *fn_800ADEB0(){
 UnknownGenObject800ADEB0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AC48;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800ADF08(){
 fn_80066188((int)fn_800ADF30);
}
void fn_800ADF30(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624D8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800ADFA0,(int)lbl_80478194,20,(int)fn_800ADEB0,(int)fn_800ADFC0,0,0);
}
void *fn_800ADFA0(){return fn_800ADE74();}
void fn_800ADFC0(){
 void *value0=lbl_805624D8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DFB0,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C4880;
 fn_800659C0(value0,lbl_8055DFB8,lbl_8055DFC0,lbl_8055DFC8,value1);
}
void *fn_800AE040(){
 if(!lbl_805624E4 || !(reinterpret_cast<unsigned int *>(lbl_805624E4)[0x24/4]&4)) fn_800AE0EC();
 return lbl_805624E4;
}
void *fn_800AE07C(){
 UnknownGenObject800AE07C_0 object;
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
