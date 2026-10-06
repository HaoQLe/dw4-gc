#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801BF938();
void fn_8028C93C();
void fn_8028D468();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804CC7DC[];
extern char lbl_804CC7F4[];
extern char lbl_804CCE30[];
extern char lbl_804CCEC4[];
extern char lbl_804CCF28[];
extern char lbl_80561350[8];
extern char lbl_80561358[8];
extern void *lbl_805621F4;
extern void *lbl_805660E4;
extern void *lbl_805660E8;
void *fn_8028D058();
void *fn_8028D094();
void fn_8028D104();
void fn_8028D12C();
void *fn_8028D198();
void *fn_8028D1B8();
void *fn_8028D1F4();
void fn_8028D3AC();
void fn_8028D3D4();
void *fn_8028D448();
}
struct UnknownGenObject8028D094_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8028D1F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028D1F4(){fn_8006665C(this);}
};
struct UnknownGenObject8028D1F4_0 : UnknownGenRoot8028D1F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028D1F4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8028D1F4_1 : UnknownGenObject8028D1F4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject8028D1F4_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject8028D1F4_2 : UnknownGenObject8028D1F4_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject8028D1F4_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject8028D1F4 : UnknownGenObject8028D1F4_2 {
 UnknownGenRefMember unknown20;
 char unknown24[60];
 inline ~UnknownGenObject8028D1F4(){unknown00=lbl_804CCE30;}
};
extern "C" {
void *fn_8028D01C(){
 if(!lbl_805660E4) lbl_805660E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805660E4;
}
void *fn_8028D058(){
 if(!lbl_805660E4 || !(reinterpret_cast<unsigned int *>(lbl_805660E4)[0x24/4]&4)) fn_8028D104();
 return lbl_805660E4;
}
void *fn_8028D094(){
 UnknownGenObject8028D094_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CCF28;
 object.unknown00=lbl_804CCEC4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8028D104(){
 fn_80066188((int)fn_8028D12C);
}
void fn_8028D12C(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_805660E4,(int)fn_8002907C,(int)fn_80024180,(int)fn_8028D198,(int)lbl_804CC7DC,20,(int)fn_8028D094,0,0,(int)lbl_80561350);
}
void *fn_8028D198(){return fn_8028D058();}
void *fn_8028D1B8(){
 if(!lbl_805660E8 || !(reinterpret_cast<unsigned int *>(lbl_805660E8)[0x24/4]&4)) fn_8028D3AC();
 return lbl_805660E8;
}
void *fn_8028D1F4(){
 UnknownGenObject8028D1F4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804CCE30;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8028D3AC(){
 fn_80066188((int)fn_8028D3D4);
}
void fn_8028D3D4(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_805660E8,(int)fn_801BF938,(int)fn_8011148C,(int)fn_8028D448,(int)lbl_804CC7F4,96,(int)fn_8028D1F4,(int)fn_8028D468,0,(int)lbl_80561358);
}
void *fn_8028D448(){return fn_8028D1B8();}
}
#pragma pop
