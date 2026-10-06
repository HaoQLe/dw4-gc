#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BB8BC();
void fn_801BF938();
extern char lbl_8047650C[];
extern char lbl_804AED50[];
extern char lbl_804B4038[];
extern char lbl_804B4354[];
extern char lbl_804B49CC[];
extern char lbl_805604B4[8];
extern void *lbl_805621F4;
extern void *lbl_80564DAC;
void *fn_801BB60C();
void *fn_801BB648();
void fn_801BB800();
void fn_801BB828();
void *fn_801BB89C();
}
struct UnknownGenRoot801BB648 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BB648(){fn_8006665C(this);}
};
struct UnknownGenObject801BB648_0 : UnknownGenRoot801BB648 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BB648_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BB648_1 : UnknownGenObject801BB648_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BB648_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BB648_2 : UnknownGenObject801BB648_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BB648_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801BB648 : UnknownGenObject801BB648_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801BB648(){unknown00=lbl_804B4354;}
};
extern "C" {
void *fn_801BB5D0(){
 if(!lbl_80564DAC) lbl_80564DAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DAC;
}
void *fn_801BB60C(){
 if(!lbl_80564DAC || !(reinterpret_cast<unsigned int *>(lbl_80564DAC)[0x24/4]&4)) fn_801BB800();
 return lbl_80564DAC;
}
void *fn_801BB648(){
 UnknownGenObject801BB648 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B4354;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BB800(){
 fn_80066188((int)fn_801BB828);
}
void fn_801BB828(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DAC,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801BB89C,(int)lbl_804AED50,36,(int)fn_801BB648,(int)fn_801BB8BC,0,(int)lbl_805604B4);
}
void *fn_801BB89C(){return fn_801BB60C();}
}
#pragma pop
