#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void *fn_80028F84();
void fn_8002907C();
void *fn_80029A5C();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_80463100[];
extern char lbl_80463FD4[];
extern char lbl_80464048[];
extern char lbl_804640A4[];
extern char lbl_804640B0[];
extern char lbl_80472FA0[];
extern char lbl_804763F0[];
extern char lbl_804764B0[];
extern char lbl_8047650C[];
extern char lbl_80476568[];
extern char lbl_804765CC[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D1C4[8];
extern char lbl_8055D1CC[8];
extern char lbl_8055D1D4[8];
extern char lbl_8055D1DC[8];
extern char lbl_8055D1E4[8];
extern char lbl_8055D1EC[8];
extern char lbl_8055D1FC[8];
extern char lbl_8055D204[8];
extern char lbl_8055D20C[8];
extern void *lbl_805616C4;
extern void *lbl_805616C8;
extern void *lbl_805616CC;
extern void *lbl_805616DC;
extern void *lbl_805619F8;
extern void *lbl_805621F4;
void *fn_800280B4();
void *fn_800280F0();
void fn_80028160();
void fn_80028188();
void *fn_800281F4();
void *fn_80028214();
void *fn_80028298();
void *fn_800282D4();
void fn_800283B4();
void fn_800283DC();
void *fn_8002844C();
void fn_8002846C();
void *fn_80028530();
void *fn_8002856C();
void fn_80028634();
void fn_8002865C();
void *fn_800286D4();
void fn_800286F4();
}
struct UnknownGenObject800280F0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800282D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800282D4(){fn_8006665C(this);}
};
struct UnknownGenObject800282D4_0 : UnknownGenRoot800282D4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800282D4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800282D4 : UnknownGenObject800282D4_0 {
 UnknownGenString unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800282D4(){unknown00=lbl_804764B0;}
};
struct UnknownGenRoot8002856C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002856C(){fn_8006665C(this);}
};
struct UnknownGenObject8002856C : UnknownGenRoot8002856C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8002856C(){unknown00=lbl_804763F0;}
};
extern "C" {
void *fn_80028078(){
 if(!lbl_805616C4) lbl_805616C4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805616C4;
}
void *fn_800280B4(){
 if(!lbl_805616C4 || !(reinterpret_cast<unsigned int *>(lbl_805616C4)[0x24/4]&4)) fn_80028160();
 return lbl_805616C4;
}
void *fn_800280F0(){
 UnknownGenObject800280F0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804765CC;
 object.unknown00=lbl_80476568;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80028160(){
 fn_80066188((int)fn_80028188);
}
void fn_80028188(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616C4,(int)fn_8002907C,(int)fn_80024180,(int)fn_800281F4,(int)lbl_80463FD4,20,(int)fn_800280F0,0,0,(int)lbl_8055D1C4);
}
void *fn_800281F4(){return fn_800280B4();}
void *fn_80028214(){
 char *data=lbl_80463100;
 if(!lbl_805616C8) lbl_805616C8=fn_800635C8(data+0xF38,data+0xF20,data+0xF2C,0x3);
 return lbl_805616C8;
}
void *fn_80028260(void *object){
 fn_800283B4();
 return fn_8006546C(lbl_805616CC,object);
}
void *fn_80028298(){
 if(!lbl_805616CC || !(reinterpret_cast<unsigned int *>(lbl_805616CC)[0x24/4]&4)) fn_800283B4();
 return lbl_805616CC;
}
void *fn_800282D4(){
 UnknownGenObject800282D4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804764B0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800283B4(){
 fn_80066188((int)fn_800283DC);
}
void fn_800283DC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616CC,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_8002844C,(int)lbl_80464048,20,(int)fn_800282D4,(int)fn_8002846C,0,0);
}
void *fn_8002844C(){return fn_80028298();}
void fn_8002846C(){
 void *value0=lbl_805616CC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D1CC,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_80028214;
 fn_800659C0(value0,lbl_8055D1D4,lbl_8055D1DC,lbl_8055D1E4,value1);
}
void *fn_800284EC(){return lbl_805619F8;}
void *fn_800284F4(){
 if(!lbl_805616DC) lbl_805616DC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805616DC;
}
void *fn_80028530(){
 if(!lbl_805616DC || !(reinterpret_cast<unsigned int *>(lbl_805616DC)[0x24/4]&4)) fn_80028634();
 return lbl_805616DC;
}
void *fn_8002856C(){
 UnknownGenObject8002856C object;
 object.unknown00=lbl_804763F0;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80028634(){
 fn_80066188((int)fn_8002865C);
}
void fn_8002865C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616DC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800286D4,(int)lbl_804640B0,16,(int)fn_8002856C,(int)fn_800286F4,0,(int)lbl_804640A4);
}
void *fn_800286D4(){return fn_80028530();}
void fn_800286F4(){
 void *value0=lbl_805616DC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D1EC,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_8055D1FC,lbl_8055D204,lbl_8055D20C,value1);
}
}
#pragma pop
