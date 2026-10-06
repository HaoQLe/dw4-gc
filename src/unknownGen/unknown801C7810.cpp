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
void fn_801BF938();
void fn_801C7AFC();
extern char lbl_8047650C[];
extern char lbl_804B1540[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B6C60[];
extern char lbl_80560850[8];
extern void *lbl_805621F4;
extern void *lbl_805652EC;
void *fn_801C784C();
void *fn_801C7888();
void fn_801C7A40();
void fn_801C7A68();
void *fn_801C7ADC();
}
struct UnknownGenRoot801C7888 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C7888(){fn_8006665C(this);}
};
struct UnknownGenObject801C7888_0 : UnknownGenRoot801C7888 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C7888_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C7888_1 : UnknownGenObject801C7888_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C7888_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801C7888_2 : UnknownGenObject801C7888_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C7888_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801C7888 : UnknownGenObject801C7888_2 {
 char unknown20[28];
 UnknownGenRefMember unknown3C;
 inline ~UnknownGenObject801C7888(){unknown00=lbl_804B6C60;}
};
extern "C" {
void *fn_801C7810(){
 if(!lbl_805652EC) lbl_805652EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805652EC;
}
void *fn_801C784C(){
 if(!lbl_805652EC || !(reinterpret_cast<unsigned int *>(lbl_805652EC)[0x24/4]&4)) fn_801C7A40();
 return lbl_805652EC;
}
void *fn_801C7888(){
 UnknownGenObject801C7888 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B6C60;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C7A40(){
 fn_80066188((int)fn_801C7A68);
}
void fn_801C7A68(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805652EC,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801C7ADC,(int)lbl_804B1540,64,(int)fn_801C7888,(int)fn_801C7AFC,0,(int)lbl_80560850);
}
void *fn_801C7ADC(){return fn_801C784C();}
}
#pragma pop
