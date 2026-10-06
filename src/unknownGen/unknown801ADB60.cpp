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
void *fn_8011148C();
void fn_801AA6DC();
void fn_801ADE84();
void fn_801BF938();
extern char lbl_8047650C[];
extern char lbl_804ABEB8[];
extern char lbl_804B36B4[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_805601AC[8];
extern void *lbl_805621F4;
extern void *lbl_805647B0;
void *fn_801ADBD4();
void *fn_801ADC10();
void fn_801ADDC8();
void fn_801ADDF0();
void *fn_801ADE64();
}
struct UnknownGenRoot801ADC10 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801ADC10(){fn_8006665C(this);}
};
struct UnknownGenObject801ADC10_0 : UnknownGenRoot801ADC10 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801ADC10_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801ADC10_1 : UnknownGenObject801ADC10_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801ADC10_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801ADC10_2 : UnknownGenObject801ADC10_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801ADC10_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801ADC10 : UnknownGenObject801ADC10_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801ADC10(){unknown00=lbl_804B36B4;}
};
extern "C" {
void *fn_801ADB60(void *object){
 fn_801ADDC8();
 return fn_8006546C(lbl_805647B0,object);
}
void *fn_801ADB98(){
 if(!lbl_805647B0) lbl_805647B0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805647B0;
}
void *fn_801ADBD4(){
 if(!lbl_805647B0 || !(reinterpret_cast<unsigned int *>(lbl_805647B0)[0x24/4]&4)) fn_801ADDC8();
 return lbl_805647B0;
}
void *fn_801ADC10(){
 UnknownGenObject801ADC10 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B36B4;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801ADDC8(){
 fn_80066188((int)fn_801ADDF0);
}
void fn_801ADDF0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647B0,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801ADE64,(int)lbl_804ABEB8,36,(int)fn_801ADC10,(int)fn_801ADE84,0,(int)lbl_805601AC);
}
void *fn_801ADE64(){return fn_801ADBD4();}
}
#pragma pop
