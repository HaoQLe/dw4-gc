#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_8002A638();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80071694(void *,void *);
void fn_800CE2F8();
void fn_800D3C00();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80489E8C[];
extern char lbl_80489EA4[];
extern char lbl_80489EDC[];
extern char lbl_80489F44[];
extern char lbl_80489F5C[];
extern char lbl_80489F6C[];
extern char lbl_80489F84[];
extern char lbl_8049371C[];
extern char lbl_80493778[];
extern char lbl_804937DC[];
extern char lbl_80493840[];
extern char lbl_804938A4[];
extern char lbl_80493908[];
extern char lbl_8049396C[];
extern char lbl_804939D0[];
extern char lbl_80493A2C[];
extern char lbl_80493A90[];
extern char lbl_8055EB78[4];
extern char lbl_8055EBF8[8];
extern char lbl_8055EC00[8];
extern char lbl_8055EC08[8];
extern char lbl_8055EC10[8];
extern char lbl_8055EC18[8];
extern char lbl_8055EC20[8];
extern char lbl_8055EC28[8];
extern char lbl_8055EC30[8];
extern char lbl_8055EC38[8];
extern char lbl_8055EC50[8];
extern char lbl_8055EC58[8];
extern char lbl_8055EC60[8];
extern char lbl_8055EC68[8];
extern char lbl_8055EC70[8];
extern void *lbl_805621F4;
extern void *lbl_80562FE4;
extern void *lbl_80562FE8;
extern void *lbl_80562FF4;
extern void *lbl_80562FF8;
extern void *lbl_80563004;
extern void *lbl_80563008;
extern void *lbl_8056300C;
void *fn_800D2F44();
void *fn_800D2F80();
void fn_800D2FF0();
void fn_800D3018();
void *fn_800D3084();
void *fn_800D30DC();
void *fn_800D3118();
void fn_800D31F8();
void fn_800D3220();
void *fn_800D3294();
void fn_800D32B4();
void *fn_800D33A8();
void *fn_800D33E4();
void fn_800D3454();
void fn_800D347C();
void *fn_800D34E8();
void *fn_800D3540();
void *fn_800D357C();
void fn_800D3634();
void fn_800D365C();
void *fn_800D36D0();
void fn_800D36F0();
void *fn_800D376C();
void fn_800D37A8();
void fn_800D37D0();
void *fn_800D3834();
void *fn_800D3890();
void *fn_800D38CC();
void fn_800D393C();
void fn_800D3964();
void *fn_800D39D0();
void *fn_800D39F0();
void *fn_800D3A2C();
void fn_800D3B44();
void fn_800D3B6C();
void *fn_800D3BE0();
}
struct UnknownGenObject800D2F80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D3118 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D3118(){fn_8006665C(this);}
};
struct UnknownGenObject800D3118_0 : UnknownGenRoot800D3118 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D3118_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D3118 : UnknownGenObject800D3118_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800D3118(){unknown00=lbl_804939D0;}
};
struct UnknownGenObject800D33E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D357C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D357C(){fn_8006665C(this);}
};
struct UnknownGenObject800D357C : UnknownGenRoot800D357C {
 char unknown04[16];
 UnknownGenString unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800D357C(){unknown00=lbl_80493840;}
};
struct UnknownGenObject800D38CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D3A2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D3A2C(){fn_8006665C(this);}
};
struct UnknownGenObject800D3A2C_0 : UnknownGenRoot800D3A2C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D3A2C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D3A2C : UnknownGenObject800D3A2C_0 {
 char unknown0C[4];
 UnknownGenString unknown10;
 char unknown14[16];
 UnknownGenRefMember unknown24;
 char unknown28[16];
 inline ~UnknownGenObject800D3A2C(){unknown00=lbl_8049371C;}
};
extern "C" {
void *fn_800D2ED0(void *object){
 fn_800D2FF0();
 return fn_8006546C(lbl_80562FE4,object);
}
void *fn_800D2F08(){
 if(!lbl_80562FE4) lbl_80562FE4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562FE4;
}
void *fn_800D2F44(){
 if(!lbl_80562FE4 || !(reinterpret_cast<unsigned int *>(lbl_80562FE4)[0x24/4]&4)) fn_800D2FF0();
 return lbl_80562FE4;
}
void *fn_800D2F80(){
 UnknownGenObject800D2F80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80493A90;
 object.unknown00=lbl_80493A2C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D2FF0(){
 fn_80066188((int)fn_800D3018);
}
void fn_800D3018(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FE4,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D3084,(int)lbl_80489E8C,20,(int)fn_800D2F80,0,0,(int)lbl_8055EBF8);
}
void *fn_800D3084(){return fn_800D2F44();}
void *fn_800D30A4(void *object){
 fn_800D31F8();
 return fn_8006546C(lbl_80562FE8,object);
}
void *fn_800D30DC(){
 if(!lbl_80562FE8 || !(reinterpret_cast<unsigned int *>(lbl_80562FE8)[0x24/4]&4)) fn_800D31F8();
 return lbl_80562FE8;
}
void *fn_800D3118(){
 UnknownGenObject800D3118 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804939D0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D31F8(){
 fn_80066188((int)fn_800D3220);
}
void fn_800D3220(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FE8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800D3294,(int)lbl_80489EA4,20,(int)fn_800D3118,(int)fn_800D32B4,0,(int)lbl_8055EC00);
}
void *fn_800D3294(){return fn_800D30DC();}
void fn_800D32B4(){
 void *value0=lbl_80562FE8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EC08,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_8002A638();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055EC10,lbl_8055EC18,lbl_8055EC20,value1);
}
void *fn_800D3334(void *object){
 fn_800D3454();
 return fn_8006546C(lbl_80562FF4,object);
}
void *fn_800D336C(){
 if(!lbl_80562FF4) lbl_80562FF4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562FF4;
}
void *fn_800D33A8(){
 if(!lbl_80562FF4 || !(reinterpret_cast<unsigned int *>(lbl_80562FF4)[0x24/4]&4)) fn_800D3454();
 return lbl_80562FF4;
}
void *fn_800D33E4(){
 UnknownGenObject800D33E4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8049396C;
 object.unknown00=lbl_80493908;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D3454(){
 fn_80066188((int)fn_800D347C);
}
void fn_800D347C(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FF4,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D34E8,(int)lbl_80489EDC,20,(int)fn_800D33E4,0,0,(int)lbl_8055EC28);
}
void *fn_800D34E8(){return fn_800D33A8();}
void *fn_800D3508(void *object){
 fn_800D3634();
 return fn_8006546C(lbl_80562FF8,object);
}
void *fn_800D3540(){
 if(!lbl_80562FF8 || !(reinterpret_cast<unsigned int *>(lbl_80562FF8)[0x24/4]&4)) fn_800D3634();
 return lbl_80562FF8;
}
void *fn_800D357C(){
 UnknownGenObject800D357C object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804938A4;
 object.unknown00=lbl_80493840;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D3634(){
 fn_80066188((int)fn_800D365C);
}
void fn_800D365C(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FF8,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D36D0,(int)lbl_80489F44,28,(int)fn_800D357C,(int)fn_800D36F0,0,(int)lbl_8055EC30);
}
void *fn_800D36D0(){return fn_800D3540();}
void fn_800D36F0(){
 void *value0=lbl_80562FF8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EC38,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,lbl_8055EB78);
 fn_800659C0(value0,lbl_8055EC50,lbl_8055EC58,lbl_8055EC60,value1);
}
void *fn_800D376C(){
 if(!lbl_80563004 || !(reinterpret_cast<unsigned int *>(lbl_80563004)[0x24/4]&4)) fn_800D37A8();
 return lbl_80563004;
}
void fn_800D37A8(){
 fn_80066188((int)fn_800D37D0);
}
void fn_800D37D0(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80563004,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800D3834,(int)lbl_80489F5C,12,0,0,0,0);
}
void *fn_800D3834(){return fn_800D376C();}
void *fn_800D3854(){
 if(!lbl_80563008) lbl_80563008=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563008;
}
void *fn_800D3890(){
 if(!lbl_80563008 || !(reinterpret_cast<unsigned int *>(lbl_80563008)[0x24/4]&4)) fn_800D393C();
 return lbl_80563008;
}
void *fn_800D38CC(){
 UnknownGenObject800D38CC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804937DC;
 object.unknown00=lbl_80493778;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D393C(){
 fn_80066188((int)fn_800D3964);
}
void fn_800D3964(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563008,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D39D0,(int)lbl_80489F6C,20,(int)fn_800D38CC,0,0,(int)lbl_8055EC68);
}
void *fn_800D39D0(){return fn_800D3890();}
void *fn_800D39F0(){
 if(!lbl_8056300C || !(reinterpret_cast<unsigned int *>(lbl_8056300C)[0x24/4]&4)) fn_800D3B44();
 return lbl_8056300C;
}
void *fn_800D3A2C(){
 UnknownGenObject800D3A2C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_8049371C;
 object.unknown10.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D3B44(){
 fn_80066188((int)fn_800D3B6C);
}
void fn_800D3B6C(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056300C,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800D3BE0,(int)lbl_80489F84,48,(int)fn_800D3A2C,(int)fn_800D3C00,0,(int)lbl_8055EC70);
}
void *fn_800D3BE0(){return fn_800D39F0();}
}
#pragma pop
