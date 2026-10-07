#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_80030A3C();
void fn_80037510();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *fn_800CE528();
void *fn_800D031C();
void fn_800D37D0();
void fn_800D5498();
void fn_800D5908();
void fn_80126CF0(void *,void *);
extern char lbl_804729A4[];
extern char lbl_80472EF4[];
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8048A18C[];
extern char lbl_8048A1DC[];
extern char lbl_8048A3F4[];
extern char lbl_8048A404[];
extern char lbl_8048A420[];
extern char lbl_8048A438[];
extern char lbl_8048A44C[];
extern char lbl_8049288C[];
extern char lbl_804929B4[];
extern char lbl_80492AD0[];
extern char lbl_80493168[];
extern char lbl_804931CC[];
extern char lbl_80493230[];
extern char lbl_80493290[];
extern char lbl_804932F0[];
extern char lbl_80493354[];
extern char lbl_8055ECB8[4];
extern char lbl_8055ECBC[4];
extern char lbl_8055ECC0[4];
extern char lbl_8055ECC4[4];
extern char lbl_8055ECC8[8];
extern char lbl_8055ECD0[4];
extern char lbl_8055ECD4[4];
extern char lbl_8055ECD8[4];
extern char lbl_8055ECDC[4];
extern char lbl_8055ECE0[8];
extern void *lbl_80561B8C;
extern void *lbl_805621F4;
extern void *lbl_80563004;
extern void *lbl_80563060;
extern void *lbl_8056306C;
extern void *lbl_80563074;
extern void *lbl_80563078;
extern void *lbl_80563080;
extern void *lbl_80563084;
extern void *lbl_8056308C;
extern void *lbl_80563090;
extern char lbl_805668CC[4];
void *fn_800D479C();
void *fn_800D47D8();
void fn_800D4824();
void fn_800D484C();
void *fn_800D48B4();
void *fn_800D48D4();
void *fn_800D4910();
void fn_800D4A88();
void fn_800D4AB0();
void *fn_800D4B18();
void *fn_800D4B38();
void *fn_800D4B7C();
void fn_800D4BB8();
void fn_800D4BE0();
void *fn_800D4C44();
void *fn_800D4C64();
void fn_800D4CA0();
void fn_800D4CC8();
void *fn_800D4D34();
void fn_800D4D54();
void *fn_800D4DF4();
void *fn_800D4E30();
void fn_800D4EA0();
void fn_800D4EC8();
void *fn_800D4F34();
void *fn_800D4F8C();
void *fn_800D4FC8();
void fn_800D5070();
void fn_800D5098();
void *fn_800D5108();
void *fn_800D5128();
void fn_800D5130();
void *fn_800D51F8();
void *fn_800D5234();
void fn_800D52A4();
void fn_800D52CC();
void *fn_800D5338();
}
struct UnknownGenObject800D47D8_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot800D4910 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D4910(){fn_8006665C(this);}
};
struct UnknownGenObject800D4910_0 : UnknownGenRoot800D4910 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D4910_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D4910_1 : UnknownGenObject800D4910_0 {
 inline ~UnknownGenObject800D4910_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject800D4910_2 : UnknownGenObject800D4910_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 char unknown24[4];
 UnknownGenString unknown28;
 inline ~UnknownGenObject800D4910_2(){unknown00=lbl_804729A4;}
};
struct UnknownGenObject800D4910 : UnknownGenObject800D4910_2 {
 char unknown2C[12];
 inline ~UnknownGenObject800D4910(){unknown00=lbl_804929B4;}
};
struct UnknownGenObject800D4E30_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D4FC8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D4FC8(){fn_8006665C(this);}
};
struct UnknownGenObject800D4FC8_0 : UnknownGenRoot800D4FC8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D4FC8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D4FC8_1 : UnknownGenObject800D4FC8_0 {
 inline ~UnknownGenObject800D4FC8_1(){unknown00=lbl_80493290;}
};
struct UnknownGenObject800D4FC8 : UnknownGenObject800D4FC8_1 {
 char unknown0C[20];
 inline ~UnknownGenObject800D4FC8(){unknown00=lbl_80493230;}
};
struct UnknownGenL800D5130_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
};
struct UnknownGenObject800D5234_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D4764(void *object){
 fn_800D4824();
 return fn_8006546C(lbl_80563060,object);
}
void *fn_800D479C(){
 if(!lbl_80563060 || !(reinterpret_cast<unsigned int *>(lbl_80563060)[0x24/4]&4)) fn_800D4824();
 return lbl_80563060;
}
void *fn_800D47D8(){
 UnknownGenObject800D47D8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80492AD0;
 object.unknown00=lbl_8049288C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D4824(){
 fn_80066188((int)fn_800D484C);
}
void fn_800D484C(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563060,(int)fn_800D5908,(int)fn_800CE528,(int)fn_800D48B4,(int)lbl_8048A18C,8,(int)fn_800D47D8,0,0,0);
}
void *fn_800D48B4(){return fn_800D479C();}
void *fn_800D48D4(){
 if(!lbl_8056306C || !(reinterpret_cast<unsigned int *>(lbl_8056306C)[0x24/4]&4)) fn_800D4A88();
 return lbl_8056306C;
}
void *fn_800D4910(){
 UnknownGenObject800D4910 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_804729A4;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_804929B4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D4A88(){
 fn_80066188((int)fn_800D4AB0);
}
void fn_800D4AB0(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056306C,(int)fn_80030A3C,(int)fn_800D4B38,(int)fn_800D4B18,(int)lbl_8048A1DC,44,(int)fn_800D4910,0,0,0);
}
void *fn_800D4B18(){return fn_800D48D4();}
void *fn_800D4B38(){return lbl_80561B8C;}
void *fn_800D4B40(){
 if(!lbl_80563074) lbl_80563074=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563074;
}
void *fn_800D4B7C(){
 if(!lbl_80563074 || !(reinterpret_cast<unsigned int *>(lbl_80563074)[0x24/4]&4)) fn_800D4BB8();
 return lbl_80563074;
}
void fn_800D4BB8(){
 fn_80066188((int)fn_800D4BE0);
}
void fn_800D4BE0(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80563074,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D4C44,(int)lbl_8048A3F4,20,0,0,0,0);
}
void *fn_800D4C44(){return fn_800D4B7C();}
void *fn_800D4C64(){
 if(!lbl_80563078 || !(reinterpret_cast<unsigned int *>(lbl_80563078)[0x24/4]&4)) fn_800D4CA0();
 return lbl_80563078;
}
void fn_800D4CA0(){
 fn_80066188((int)fn_800D4CC8);
}
void fn_800D4CC8(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80563078,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D4D34,(int)lbl_8048A404,24,0,(int)fn_800D4D54,0,0);
}
void *fn_800D4D34(){return fn_800D4C64();}
void fn_800D4D54(){
 void *value0=lbl_80563078;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055ECB8,1);
 fn_800659C0(value0,lbl_8055ECBC,lbl_8055ECC0,lbl_8055ECC4,value1);
}
void *fn_800D4DBC(void *object){
 fn_800D4EA0();
 return fn_8006546C(lbl_80563080,object);
}
void *fn_800D4DF4(){
 if(!lbl_80563080 || !(reinterpret_cast<unsigned int *>(lbl_80563080)[0x24/4]&4)) fn_800D4EA0();
 return lbl_80563080;
}
void *fn_800D4E30(){
 UnknownGenObject800D4E30_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80493354;
 object.unknown00=lbl_804932F0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D4EA0(){
 fn_80066188((int)fn_800D4EC8);
}
void fn_800D4EC8(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563080,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D4F34,(int)lbl_8048A420,20,(int)fn_800D4E30,0,0,(int)lbl_8055ECC8);
}
void *fn_800D4F34(){return fn_800D4DF4();}
void *fn_800D4F54(void *object){
 fn_800D5070();
 return fn_8006546C(lbl_80563084,object);
}
void *fn_800D4F8C(){
 if(!lbl_80563084 || !(reinterpret_cast<unsigned int *>(lbl_80563084)[0x24/4]&4)) fn_800D5070();
 return lbl_80563084;
}
void *fn_800D4FC8(){
 UnknownGenObject800D4FC8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493290;
 object.unknown00=lbl_80493230;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D5070(){
 fn_80066188((int)fn_800D5098);
}
void fn_800D5098(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563084,(int)fn_800D37D0,(int)fn_800D5128,(int)fn_800D5108,(int)lbl_8048A438,28,(int)fn_800D4FC8,(int)fn_800D5130,0,0);
}
void *fn_800D5108(){return fn_800D4F8C();}
void *fn_800D5128(){return lbl_80563004;}
void fn_800D5130(){
 UnknownGenL800D5130_8 local0;
 void *value0=lbl_80563084;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055ECD0,1);
 void *value2=fn_800658E4(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_805668CC+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805668CC+0));
 local0.m10=*reinterpret_cast<float *>((lbl_805668CC+0));
 local0.m14=*reinterpret_cast<float *>((lbl_805668CC+0));
 fn_80126CF0(value2,&local0);
 fn_800659C0(value0,lbl_8055ECD4,lbl_8055ECD8,lbl_8055ECDC,value1);
}
void *fn_800D51C0(void *object){
 fn_800D52A4();
 return fn_8006546C(lbl_8056308C,object);
}
void *fn_800D51F8(){
 if(!lbl_8056308C || !(reinterpret_cast<unsigned int *>(lbl_8056308C)[0x24/4]&4)) fn_800D52A4();
 return lbl_8056308C;
}
void *fn_800D5234(){
 UnknownGenObject800D5234_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804931CC;
 object.unknown00=lbl_80493168;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D52A4(){
 fn_80066188((int)fn_800D52CC);
}
void fn_800D52CC(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056308C,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D5338,(int)lbl_8048A44C,20,(int)fn_800D5234,0,0,(int)lbl_8055ECE0);
}
void *fn_800D5338(){return fn_800D51F8();}
void *fn_800D5358(void *object){
 fn_800D5498();
 return fn_8006546C(lbl_80563090,object);
}
void *fn_800D5390(){
 if(!lbl_80563090 || !(reinterpret_cast<unsigned int *>(lbl_80563090)[0x24/4]&4)) fn_800D5498();
 return lbl_80563090;
}
}
#pragma pop
