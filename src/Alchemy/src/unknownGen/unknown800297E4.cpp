#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
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
void fn_80071694(void *,int);
extern char lbl_80464258[];
extern char lbl_80464278[];
extern char lbl_8046428C[];
extern char lbl_8047184C[];
extern char lbl_80472460[];
extern char lbl_80472FA0[];
extern char lbl_80476234[];
extern char lbl_80476298[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D23C[8];
extern char lbl_8055D244[4];
extern char lbl_8055D248[4];
extern char lbl_8055D24C[4];
extern char lbl_8055D250[4];
extern char lbl_8055D254[8];
extern char lbl_8055D25C[4];
extern char lbl_8055D268[4];
extern char lbl_8055D26C[4];
extern char lbl_8055D270[4];
extern void *lbl_80561738;
extern void *lbl_80561740;
extern void *lbl_80561744;
extern void *lbl_805621F4;
void *fn_800297E4();
void *fn_80029820();
void fn_80029918();
void fn_80029940();
void *fn_800299B4();
void fn_800299D4();
void *fn_80029A5C();
void *fn_80029A98();
void *fn_80029AD4();
void fn_80029B44();
void fn_80029B6C();
void *fn_80029BD8();
void *fn_80029C6C();
void *fn_80029CA8();
void fn_80029D30();
void fn_80029D58();
void *fn_80029DC8();
void fn_80029DE8();
}
struct UnknownGenRoot80029820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80029820(){fn_8006665C(this);}
};
struct UnknownGenObject80029820_0 : UnknownGenRoot80029820 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80029820_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80029820_1 : UnknownGenObject80029820_0 {
 inline ~UnknownGenObject80029820_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject80029820 : UnknownGenObject80029820_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80029820(){unknown00=lbl_8047184C;}
};
struct UnknownGenObject80029AD4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80029CA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80029CA8(){fn_8006665C(this);}
};
struct UnknownGenObject80029CA8 : UnknownGenRoot80029CA8 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80029CA8(){unknown00=lbl_8047650C;}
};
extern "C" {
void *fn_800297E4(){
 if(!lbl_80561738 || !(reinterpret_cast<unsigned int *>(lbl_80561738)[0x24/4]&4)) fn_80029918();
 return lbl_80561738;
}
void *fn_80029820(){
 UnknownGenObject80029820 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_8047184C;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80029918(){
 fn_80066188((int)fn_80029940);
}
void fn_80029940(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561738,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_800299B4,(int)lbl_80464258,24,(int)fn_80029820,(int)fn_800299D4,0,(int)lbl_8055D23C);
}
void *fn_800299B4(){return fn_800297E4();}
void fn_800299D4(){
 void *value0=lbl_80561738;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D244,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055D248,lbl_8055D24C,lbl_8055D250,value1);
}
void *fn_80029A5C(){
 if(!lbl_80561740) lbl_80561740=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561740;
}
void *fn_80029A98(){
 if(!lbl_80561740 || !(reinterpret_cast<unsigned int *>(lbl_80561740)[0x24/4]&4)) fn_80029B44();
 return lbl_80561740;
}
void *fn_80029AD4(){
 UnknownGenObject80029AD4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80476298;
 object.unknown00=lbl_80476234;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80029B44(){
 fn_80066188((int)fn_80029B6C);
}
void fn_80029B6C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561740,(int)fn_8002907C,(int)fn_80024180,(int)fn_80029BD8,(int)lbl_80464278,20,(int)fn_80029AD4,0,0,(int)lbl_8055D254);
}
void *fn_80029BD8(){return fn_80029A98();}
void *fn_80029BF8(void *object){
 fn_80029D30();
 return fn_8006546C(lbl_80561744,object);
}
void *fn_80029C30(){
 if(!lbl_80561744) lbl_80561744=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561744;
}
void *fn_80029C6C(){
 if(!lbl_80561744 || !(reinterpret_cast<unsigned int *>(lbl_80561744)[0x24/4]&4)) fn_80029D30();
 return lbl_80561744;
}
void *fn_80029CA8(){
 UnknownGenObject80029CA8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80029D30(){
 fn_80066188((int)fn_80029D58);
}
void fn_80029D58(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561744,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80029DC8,(int)lbl_8046428C,12,(int)fn_80029CA8,(int)fn_80029DE8,0,0);
}
void *fn_80029DC8(){return fn_80029C6C();}
void fn_80029DE8(){
 void *value0=lbl_80561744;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D25C,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,0);
 fn_800659C0(value0,lbl_8055D268,lbl_8055D26C,lbl_8055D270,value1);
}
}
#pragma pop
