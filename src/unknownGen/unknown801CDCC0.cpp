#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801CE1D8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2A24[];
extern char lbl_804B57E4[];
extern char lbl_804B5848[];
extern char lbl_80560A50[8];
extern void *lbl_805621F4;
extern void *lbl_8056559C;
extern void *lbl_805655A0;
void *fn_801CDD34();
void *fn_801CDD70();
void fn_801CDDE0();
void fn_801CDE08();
void *fn_801CDE74();
}
struct UnknownGenObject801CDD70_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CDCC0(void *object){
 fn_801CDDE0();
 return fn_8006546C(lbl_8056559C,object);
}
void *fn_801CDCF8(){
 if(!lbl_8056559C) lbl_8056559C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056559C;
}
void *fn_801CDD34(){
 if(!lbl_8056559C || !(reinterpret_cast<unsigned int *>(lbl_8056559C)[0x24/4]&4)) fn_801CDDE0();
 return lbl_8056559C;
}
void *fn_801CDD70(){
 UnknownGenObject801CDD70_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5848;
 object.unknown00=lbl_804B57E4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CDDE0(){
 fn_80066188((int)fn_801CDE08);
}
void fn_801CDE08(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056559C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CDE74,(int)lbl_804B2A24,20,(int)fn_801CDD70,0,0,(int)lbl_80560A50);
}
void *fn_801CDE74(){return fn_801CDD34();}
void *fn_801CDE94(){
 if(!lbl_805655A0) lbl_805655A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805655A0;
}
void *fn_801CDED0(){
 if(!lbl_805655A0 || !(reinterpret_cast<unsigned int *>(lbl_805655A0)[0x24/4]&4)) fn_801CE1D8();
 return lbl_805655A0;
}
}
#pragma pop
