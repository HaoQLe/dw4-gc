#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void *fn_80149C04();
void fn_8014ADB4();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049EFC0[];
extern char lbl_8049EFD4[];
extern char lbl_8049EFE8[];
extern char lbl_8049EFFC[];
extern char lbl_8049F00C[];
extern char lbl_8049F020[];
extern char lbl_8049F030[];
extern char lbl_8049F040[];
extern char lbl_8049F054[];
extern char lbl_8049F060[];
extern char lbl_8049F070[];
extern char lbl_8049F084[];
extern char lbl_804A6BF0[];
extern char lbl_804A8B3C[];
extern char lbl_804A8BF4[];
extern char lbl_804A8C58[];
extern char lbl_804A8CBC[];
extern char lbl_804A8D20[];
extern char lbl_804A8D84[];
extern char lbl_804A8DE8[];
extern char lbl_804A8E4C[];
extern char lbl_804A8EB0[];
extern char lbl_804A8F14[];
extern char lbl_804A8FDC[];
extern char lbl_8055FB6C[4];
extern char lbl_8055FB78[4];
extern char lbl_8055FB7C[4];
extern char lbl_8055FB80[4];
extern char lbl_8055FB84[8];
extern void *lbl_805621F4;
extern void *lbl_805642B8;
extern void *lbl_805642BC;
extern void *lbl_805642C0;
extern void *lbl_805642C4;
extern void *lbl_805642C8;
extern void *lbl_805642CC;
extern void *lbl_805642D0;
extern void *lbl_805642D4;
extern void *lbl_805642DC;
extern void *lbl_805642E0;
extern void *lbl_805642E4;
void *fn_80149CE0();
void *fn_80149D1C();
void fn_80149D74();
void fn_80149D9C();
void *fn_80149E04();
void *fn_80149E5C();
void *fn_80149E98();
void fn_80149EF0();
void fn_80149F18();
void *fn_80149F80();
void *fn_80149FD8();
void *fn_8014A014();
void fn_8014A06C();
void fn_8014A094();
void *fn_8014A0FC();
void *fn_8014A154();
void *fn_8014A190();
void fn_8014A1E8();
void fn_8014A210();
void *fn_8014A278();
void *fn_8014A2D0();
void *fn_8014A30C();
void fn_8014A364();
void fn_8014A38C();
void *fn_8014A3F4();
void *fn_8014A44C();
void *fn_8014A488();
void fn_8014A4E0();
void fn_8014A508();
void *fn_8014A570();
void *fn_8014A590();
void *fn_8014A5CC();
void fn_8014A624();
void fn_8014A64C();
void *fn_8014A6B4();
void *fn_8014A6D4();
void fn_8014A710();
void fn_8014A738();
void *fn_8014A7A4();
void *fn_8014A7C4();
void fn_8014A7CC();
void *fn_8014A870();
void fn_8014A8AC();
void fn_8014A8D4();
void *fn_8014A938();
void *fn_8014A994();
void *fn_8014A9D0();
void fn_8014AA40();
void fn_8014AA68();
void *fn_8014AAD4();
void *fn_8014AB30();
void *fn_8014AB6C();
void fn_8014ACF4();
void fn_8014AD1C();
void *fn_8014AD94();
}
struct UnknownGenObject80149D1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149E98_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A014_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A190_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A30C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A488_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A5CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014A9D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8014AB6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014AB6C(){fn_8006665C(this);}
};
struct UnknownGenObject8014AB6C_0 : UnknownGenRoot8014AB6C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8014AB6C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8014AB6C : UnknownGenObject8014AB6C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject8014AB6C(){unknown00=lbl_804A8B3C;}
};
extern "C" {
void *fn_80149CA8(void *object){
 fn_80149D74();
 return fn_8006546C(lbl_805642B8,object);
}
void *fn_80149CE0(){
 if(!lbl_805642B8 || !(reinterpret_cast<unsigned int *>(lbl_805642B8)[0x24/4]&4)) fn_80149D74();
 return lbl_805642B8;
}
void *fn_80149D1C(){
 UnknownGenObject80149D1C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8F14;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149D74(){
 fn_80066188((int)fn_80149D9C);
}
void fn_80149D9C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642B8,(int)fn_8014A738,(int)fn_80149C04,(int)fn_80149E04,(int)lbl_8049EFC0,16,(int)fn_80149D1C,0,0,0);
}
void *fn_80149E04(){return fn_80149CE0();}
void *fn_80149E24(void *object){
 fn_80149EF0();
 return fn_8006546C(lbl_805642BC,object);
}
void *fn_80149E5C(){
 if(!lbl_805642BC || !(reinterpret_cast<unsigned int *>(lbl_805642BC)[0x24/4]&4)) fn_80149EF0();
 return lbl_805642BC;
}
void *fn_80149E98(){
 UnknownGenObject80149E98_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8EB0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149EF0(){
 fn_80066188((int)fn_80149F18);
}
void fn_80149F18(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642BC,(int)fn_8014A738,(int)fn_80149C04,(int)fn_80149F80,(int)lbl_8049EFD4,16,(int)fn_80149E98,0,0,0);
}
void *fn_80149F80(){return fn_80149E5C();}
void *fn_80149FA0(void *object){
 fn_8014A06C();
 return fn_8006546C(lbl_805642C0,object);
}
void *fn_80149FD8(){
 if(!lbl_805642C0 || !(reinterpret_cast<unsigned int *>(lbl_805642C0)[0x24/4]&4)) fn_8014A06C();
 return lbl_805642C0;
}
void *fn_8014A014(){
 UnknownGenObject8014A014_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8E4C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014A06C(){
 fn_80066188((int)fn_8014A094);
}
void fn_8014A094(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642C0,(int)fn_8014A738,(int)fn_80149C04,(int)fn_8014A0FC,(int)lbl_8049EFE8,16,(int)fn_8014A014,0,0,0);
}
void *fn_8014A0FC(){return fn_80149FD8();}
void *fn_8014A11C(void *object){
 fn_8014A1E8();
 return fn_8006546C(lbl_805642C4,object);
}
void *fn_8014A154(){
 if(!lbl_805642C4 || !(reinterpret_cast<unsigned int *>(lbl_805642C4)[0x24/4]&4)) fn_8014A1E8();
 return lbl_805642C4;
}
void *fn_8014A190(){
 UnknownGenObject8014A190_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8DE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014A1E8(){
 fn_80066188((int)fn_8014A210);
}
void fn_8014A210(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642C4,(int)fn_8014A738,(int)fn_80149C04,(int)fn_8014A278,(int)lbl_8049EFFC,16,(int)fn_8014A190,0,0,0);
}
void *fn_8014A278(){return fn_8014A154();}
void *fn_8014A298(void *object){
 fn_8014A364();
 return fn_8006546C(lbl_805642C8,object);
}
void *fn_8014A2D0(){
 if(!lbl_805642C8 || !(reinterpret_cast<unsigned int *>(lbl_805642C8)[0x24/4]&4)) fn_8014A364();
 return lbl_805642C8;
}
void *fn_8014A30C(){
 UnknownGenObject8014A30C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8D84;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014A364(){
 fn_80066188((int)fn_8014A38C);
}
void fn_8014A38C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642C8,(int)fn_8014A738,(int)fn_80149C04,(int)fn_8014A3F4,(int)lbl_8049F00C,16,(int)fn_8014A30C,0,0,0);
}
void *fn_8014A3F4(){return fn_8014A2D0();}
void *fn_8014A414(void *object){
 fn_8014A4E0();
 return fn_8006546C(lbl_805642CC,object);
}
void *fn_8014A44C(){
 if(!lbl_805642CC || !(reinterpret_cast<unsigned int *>(lbl_805642CC)[0x24/4]&4)) fn_8014A4E0();
 return lbl_805642CC;
}
void *fn_8014A488(){
 UnknownGenObject8014A488_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8D20;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014A4E0(){
 fn_80066188((int)fn_8014A508);
}
void fn_8014A508(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642CC,(int)fn_8014A738,(int)fn_80149C04,(int)fn_8014A570,(int)lbl_8049F020,16,(int)fn_8014A488,0,0,0);
}
void *fn_8014A570(){return fn_8014A44C();}
void *fn_8014A590(){
 if(!lbl_805642D0 || !(reinterpret_cast<unsigned int *>(lbl_805642D0)[0x24/4]&4)) fn_8014A624();
 return lbl_805642D0;
}
void *fn_8014A5CC(){
 UnknownGenObject8014A5CC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8CBC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014A624(){
 fn_80066188((int)fn_8014A64C);
}
void fn_8014A64C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642D0,(int)fn_8014A738,(int)fn_80149C04,(int)fn_8014A6B4,(int)lbl_8049F030,16,(int)fn_8014A5CC,0,0,0);
}
void *fn_8014A6B4(){return fn_8014A590();}
void *fn_8014A6D4(){
 if(!lbl_805642D4 || !(reinterpret_cast<unsigned int *>(lbl_805642D4)[0x24/4]&4)) fn_8014A710();
 return lbl_805642D4;
}
void fn_8014A710(){
 fn_80066188((int)fn_8014A738);
}
void fn_8014A738(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805642D4,(int)fn_8014A8D4,(int)fn_8014A7C4,(int)fn_8014A7A4,(int)lbl_8049F040,16,0,(int)fn_8014A7CC,0,0);
}
void *fn_8014A7A4(){return fn_8014A6D4();}
void *fn_8014A7C4(){return lbl_805642DC;}
void fn_8014A7CC(){
 void *value0=lbl_805642D4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FB6C,1);
 fn_800659C0(value0,lbl_8055FB78,lbl_8055FB7C,lbl_8055FB80,value1);
}
void *fn_8014A834(){
 if(!lbl_805642DC) lbl_805642DC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805642DC;
}
void *fn_8014A870(){
 if(!lbl_805642DC || !(reinterpret_cast<unsigned int *>(lbl_805642DC)[0x24/4]&4)) fn_8014A8AC();
 return lbl_805642DC;
}
void fn_8014A8AC(){
 fn_80066188((int)fn_8014A8D4);
}
void fn_8014A8D4(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805642DC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8014A938,(int)lbl_8049F054,8,0,0,0,0);
}
void *fn_8014A938(){return fn_8014A870();}
void *fn_8014A958(){
 if(!lbl_805642E0) lbl_805642E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805642E0;
}
void *fn_8014A994(){
 if(!lbl_805642E0 || !(reinterpret_cast<unsigned int *>(lbl_805642E0)[0x24/4]&4)) fn_8014AA40();
 return lbl_805642E0;
}
void *fn_8014A9D0(){
 UnknownGenObject8014A9D0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A8C58;
 object.unknown00=lbl_804A8BF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014AA40(){
 fn_80066188((int)fn_8014AA68);
}
void fn_8014AA68(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642E0,(int)fn_8002907C,(int)fn_80024180,(int)fn_8014AAD4,(int)lbl_8049F060,20,(int)fn_8014A9D0,0,0,(int)lbl_8055FB84);
}
void *fn_8014AAD4(){return fn_8014A994();}
void *fn_8014AAF4(){
 if(!lbl_805642E4) lbl_805642E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805642E4;
}
void *fn_8014AB30(){
 if(!lbl_805642E4 || !(reinterpret_cast<unsigned int *>(lbl_805642E4)[0x24/4]&4)) fn_8014ACF4();
 return lbl_805642E4;
}
void *fn_8014AB6C(){
 UnknownGenObject8014AB6C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804A8B3C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014ACF4(){
 fn_80066188((int)fn_8014AD1C);
}
void fn_8014AD1C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642E4,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_8014AD94,(int)lbl_8049F084,28,(int)fn_8014AB6C,(int)fn_8014ADB4,0,(int)lbl_8049F070);
}
void *fn_8014AD94(){return fn_8014AB30();}
}
#pragma pop
