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
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801B1288();
void *fn_80202550();
void *fn_80202600();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AAFB8[];
extern char lbl_804AC9FC[];
extern char lbl_804ACA10[];
extern char lbl_804ACAA0[];
extern char lbl_804B3AB8[];
extern char lbl_804B9098[];
extern char lbl_804B90FC[];
extern char lbl_8056028C[8];
extern char lbl_80560294[8];
extern void *lbl_805621F4;
extern void *lbl_805648DC;
extern void *lbl_805648E0;
extern void *lbl_805648E4;
extern void *lbl_805648E8;
void *fn_801B0D6C();
void fn_801B0DA8();
void fn_801B0DD0();
void *fn_801B0E34();
void *fn_801B0E90();
void *fn_801B0ECC();
void fn_801B0F3C();
void fn_801B0F64();
void *fn_801B0FD0();
void *fn_801B1078();
void *fn_801B10B4();
void fn_801B11CC();
void fn_801B11F4();
void *fn_801B1268();
}
struct UnknownGenObject801B0ECC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B10B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B10B4(){fn_8006665C(this);}
};
struct UnknownGenObject801B10B4_0 : UnknownGenRoot801B10B4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B10B4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B10B4 : UnknownGenObject801B10B4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801B10B4(){unknown00=lbl_804B3AB8;}
};
extern "C" {
void *fn_801B0D2C(){return fn_80202550();}
void *fn_801B0D4C(){return fn_80202600();}
void *fn_801B0D6C(){
 if(!lbl_805648DC || !(reinterpret_cast<unsigned int *>(lbl_805648DC)[0x24/4]&4)) fn_801B0DA8();
 return lbl_805648DC;
}
void fn_801B0DA8(){
 fn_80066188((int)fn_801B0DD0);
}
void fn_801B0DD0(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_805648DC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B0E34,(int)lbl_804AC9FC,8,0,0,0,0);
}
void *fn_801B0E34(){return fn_801B0D6C();}
void *fn_801B0E54(){
 if(!lbl_805648E0) lbl_805648E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648E0;
}
void *fn_801B0E90(){
 if(!lbl_805648E0 || !(reinterpret_cast<unsigned int *>(lbl_805648E0)[0x24/4]&4)) fn_801B0F3C();
 return lbl_805648E0;
}
void *fn_801B0ECC(){
 UnknownGenObject801B0ECC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B90FC;
 object.unknown00=lbl_804B9098;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B0F3C(){
 fn_80066188((int)fn_801B0F64);
}
void fn_801B0F64(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648E0,(int)fn_8002907C,(int)fn_80024180,(int)fn_801B0FD0,(int)lbl_804ACA10,20,(int)fn_801B0ECC,0,0,(int)lbl_8056028C);
}
void *fn_801B0FD0(){return fn_801B0E90();}
void *fn_801B0FF0(){
 char *data=lbl_804AAFB8;
 if(!lbl_805648E4) lbl_805648E4=fn_800635C8(data+0x1AD4,data+0x1AB4,data+0x1AC4,0x4);
 return lbl_805648E4;
}
void *fn_801B103C(){
 if(!lbl_805648E8) lbl_805648E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648E8;
}
void *fn_801B1078(){
 if(!lbl_805648E8 || !(reinterpret_cast<unsigned int *>(lbl_805648E8)[0x24/4]&4)) fn_801B11CC();
 return lbl_805648E8;
}
void *fn_801B10B4(){
 UnknownGenObject801B10B4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B3AB8;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B11CC(){
 fn_80066188((int)fn_801B11F4);
}
void fn_801B11F4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648E8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801B1268,(int)lbl_804ACAA0,24,(int)fn_801B10B4,(int)fn_801B1288,0,(int)lbl_80560294);
}
void *fn_801B1268(){return fn_801B1078();}
}
#pragma pop
