#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
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
void *fn_800C5A04(int);
void *fn_800C5AD4(int);
void *fn_800C5BA4(int);
void *fn_800C5CA8(int);
void fn_800D60D8();
void fn_800D6128();
void *fn_800F8F78(void *,void *);
void *fn_800F8F94(void *,float);
extern char lbl_8047A1CC[];
extern char lbl_8047A204[];
extern char lbl_8047A22C[];
extern char lbl_8047A260[];
extern char lbl_8047A41C[];
extern char lbl_8047A49C[];
extern char lbl_8047A51C[];
extern char lbl_8047A59C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E74C[8];
extern char lbl_8055E754[8];
extern char lbl_8055E75C[8];
extern char lbl_8055E764[8];
extern char lbl_8055E76C[4];
extern char lbl_8055E770[8];
extern char lbl_8055E778[8];
extern char lbl_8055E780[8];
extern char lbl_8055E788[8];
extern char lbl_8055E790[4];
extern char lbl_8055E794[8];
extern char lbl_8055E79C[8];
extern char lbl_8055E7A4[8];
extern char lbl_8055E7AC[8];
extern char lbl_8055E7B4[8];
extern char lbl_8055E7BC[8];
extern char lbl_8055E7C4[8];
extern char lbl_8055E7CC[8];
extern void *lbl_80562AAC;
extern void *lbl_80562AB8;
extern void *lbl_80562AC4;
extern void *lbl_80562AD0;
void *fn_800BC24C();
void *fn_800BC288();
void fn_800BC2E0();
void fn_800BC308();
void *fn_800BC378();
void fn_800BC398();
void *fn_800BC43C();
void *fn_800BC478();
void fn_800BC4D0();
void fn_800BC4F8();
void *fn_800BC568();
void fn_800BC588();
void *fn_800BC664();
void *fn_800BC6A0();
void fn_800BC6F8();
void fn_800BC720();
void *fn_800BC790();
void fn_800BC7B0();
void *fn_800BC830();
void *fn_800BC86C();
void fn_800BC8C4();
void fn_800BC8EC();
void *fn_800BC95C();
void fn_800BC97C();
}
struct UnknownGenObject800BC288_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BC478_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BC6A0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BC86C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800BC24C(){
 if(!lbl_80562AAC || !(reinterpret_cast<unsigned int *>(lbl_80562AAC)[0x24/4]&4)) fn_800BC2E0();
 return lbl_80562AAC;
}
void *fn_800BC288(){
 UnknownGenObject800BC288_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A41C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC2E0(){
 fn_80066188((int)fn_800BC308);
}
void fn_800BC308(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AAC,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BC378,(int)lbl_8047A1CC,20,(int)fn_800BC288,(int)fn_800BC398,0,0);
}
void *fn_800BC378(){return fn_800BC24C();}
void fn_800BC398(){
 void *value0=lbl_80562AAC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E74C,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E76C);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800D60D8;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+48)=(void *)fn_800C5CA8;
 fn_800659C0(value0,lbl_8055E754,lbl_8055E75C,lbl_8055E764,value1);
}
void *fn_800BC43C(){
 if(!lbl_80562AB8 || !(reinterpret_cast<unsigned int *>(lbl_80562AB8)[0x24/4]&4)) fn_800BC4D0();
 return lbl_80562AB8;
}
void *fn_800BC478(){
 UnknownGenObject800BC478_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A49C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC4D0(){
 fn_80066188((int)fn_800BC4F8);
}
void fn_800BC4F8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AB8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BC568,(int)lbl_8047A204,20,(int)fn_800BC478,(int)fn_800BC588,0,0);
}
void *fn_800BC568(){return fn_800BC43C();}
void fn_800BC588(){
 void *value0=lbl_80562AB8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E770,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E790);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800D6128;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+48)=(void *)fn_800C5BA4;
 fn_800659C0(value0,lbl_8055E778,lbl_8055E780,lbl_8055E788,value1);
}
void *fn_800BC62C(void *object){
 fn_800BC6F8();
 return fn_8006546C(lbl_80562AC4,object);
}
void *fn_800BC664(){
 if(!lbl_80562AC4 || !(reinterpret_cast<unsigned int *>(lbl_80562AC4)[0x24/4]&4)) fn_800BC6F8();
 return lbl_80562AC4;
}
void *fn_800BC6A0(){
 UnknownGenObject800BC6A0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A51C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC6F8(){
 fn_80066188((int)fn_800BC720);
}
void fn_800BC720(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AC4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BC790,(int)lbl_8047A22C,20,(int)fn_800BC6A0,(int)fn_800BC7B0,0,0);
}
void *fn_800BC790(){return fn_800BC664();}
void fn_800BC7B0(){
 void *value0=lbl_80562AC4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E794,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C5AD4;
 fn_800659C0(value0,lbl_8055E79C,lbl_8055E7A4,lbl_8055E7AC,value1);
}
void *fn_800BC830(){
 if(!lbl_80562AD0 || !(reinterpret_cast<unsigned int *>(lbl_80562AD0)[0x24/4]&4)) fn_800BC8C4();
 return lbl_80562AD0;
}
void *fn_800BC86C(){
 UnknownGenObject800BC86C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A59C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC8C4(){
 fn_80066188((int)fn_800BC8EC);
}
void fn_800BC8EC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AD0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BC95C,(int)lbl_8047A260,20,(int)fn_800BC86C,(int)fn_800BC97C,0,0);
}
void *fn_800BC95C(){return fn_800BC830();}
void fn_800BC97C(){
 void *value0=lbl_80562AD0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E7B4,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C5A04;
 fn_800659C0(value0,lbl_8055E7BC,lbl_8055E7C4,lbl_8055E7CC,value1);
}
void fn_800BC9FC(int p0,int p1){
 fn_800F8F78((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16);
 fn_800F8F94((void *)p1,value0);
}
}
#pragma pop
