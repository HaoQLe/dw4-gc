#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void *fn_80202550();
void *fn_80202600();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AC9FC[];
extern char lbl_804ACA10[];
extern char lbl_804B9098[];
extern char lbl_804B90FC[];
extern char lbl_8056028C[8];
extern void *lbl_805621F4;
extern void *lbl_805648DC;
extern void *lbl_805648E0;
void *fn_801B0D6C();
void fn_801B0DA8();
void fn_801B0DD0();
void *fn_801B0E34();
void *fn_801B0E90();
void *fn_801B0ECC();
void fn_801B0F3C();
void fn_801B0F64();
void *fn_801B0FD0();
}
struct UnknownGenObject801B0ECC {
 void *unknown00;
 char unknown04[20];
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
 UnknownGenObject801B0ECC object;
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
}
#pragma pop
