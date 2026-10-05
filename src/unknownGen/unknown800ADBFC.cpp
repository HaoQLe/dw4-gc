#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800ADDBC();
extern char lbl_80478180[];
extern char lbl_8047ABC4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_805624CC;
void *fn_800ADC70();
void *fn_800ADCAC();
void fn_800ADD04();
void fn_800ADD2C();
void *fn_800ADD9C();
}
struct UnknownGenObject800ADCAC {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
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
 UnknownGenObject800ADCAC object;
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
}
#pragma pop
