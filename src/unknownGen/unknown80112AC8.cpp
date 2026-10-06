#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_800330A8();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_800CB164();
void *fn_800CB840();
void fn_8010CBD4();
void *fn_8010E280();
void fn_801130C8();
extern char lbl_80475764[];
extern char lbl_80480440[];
extern char lbl_80495364[];
extern char lbl_80495380[];
extern char lbl_80495390[];
extern char lbl_8049539C[];
extern char lbl_8049665C[];
extern char lbl_804971DC[];
extern char lbl_80497238[];
extern char lbl_80497724[];
extern char lbl_8055F17C[8];
extern void *lbl_805621F4;
extern void *lbl_805637B4;
extern void *lbl_805637B8;
extern void *lbl_805637BC;
void *fn_80112B04();
void *fn_80112B40();
void fn_80112C98();
void fn_80112CC0();
void *fn_80112D2C();
void *fn_80112D4C();
void *fn_80112D88();
void fn_80112DC8();
void fn_80112DF0();
void *fn_80112E58();
void *fn_80112EB4();
void *fn_80112EF0();
void fn_80113008();
void fn_80113030();
void *fn_801130A8();
}
struct UnknownGenRoot80112B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112B40(){fn_8006665C(this);}
};
struct UnknownGenObject80112B40_0 : UnknownGenRoot80112B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80112B40_0(){unknown00=lbl_80475764;}
};
struct UnknownGenObject80112B40_1 : UnknownGenObject80112B40_0 {
 inline ~UnknownGenObject80112B40_1(){unknown00=lbl_80497238;}
};
struct UnknownGenObject80112B40 : UnknownGenObject80112B40_1 {
 char unknown18[16];
 inline ~UnknownGenObject80112B40(){unknown00=lbl_804971DC;}
};
struct UnknownGenObject80112D88_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80112EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112EF0(){fn_8006665C(this);}
};
struct UnknownGenObject80112EF0_0 : UnknownGenRoot80112EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80112EF0_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject80112EF0 : UnknownGenObject80112EF0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80112EF0(){unknown00=lbl_8049665C;}
};
extern "C" {
void *fn_80112AC8(){
 if(!lbl_805637B4) lbl_805637B4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637B4;
}
void *fn_80112B04(){
 if(!lbl_805637B4 || !(reinterpret_cast<unsigned int *>(lbl_805637B4)[0x24/4]&4)) fn_80112C98();
 return lbl_805637B4;
}
void *fn_80112B40(){
 UnknownGenObject80112B40 object;
 object.unknown00=lbl_80475764;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_80497238;
 object.unknown00=lbl_804971DC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80112C98(){
 fn_80066188((int)fn_80112CC0);
}
void fn_80112CC0(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637B4,(int)fn_800330A8,(int)fn_8010E280,(int)fn_80112D2C,(int)lbl_80495364,28,(int)fn_80112B40,0,0,(int)lbl_8055F17C);
}
void *fn_80112D2C(){return fn_80112B04();}
void *fn_80112D4C(){
 if(!lbl_805637B8 || !(reinterpret_cast<unsigned int *>(lbl_805637B8)[0x24/4]&4)) fn_80112DC8();
 return lbl_805637B8;
}
void *fn_80112D88(){
 UnknownGenObject80112D88_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80497724;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80112DC8(){
 fn_80066188((int)fn_80112DF0);
}
void fn_80112DF0(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637B8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80112E58,(int)lbl_80495380,8,(int)fn_80112D88,0,0,0);
}
void *fn_80112E58(){return fn_80112D4C();}
void *fn_80112E78(){
 if(!lbl_805637BC) lbl_805637BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637BC;
}
void *fn_80112EB4(){
 if(!lbl_805637BC || !(reinterpret_cast<unsigned int *>(lbl_805637BC)[0x24/4]&4)) fn_80113008();
 return lbl_805637BC;
}
void *fn_80112EF0(){
 UnknownGenObject80112EF0 object;
 object.unknown00=lbl_80480440;
 object.unknown08.value=0;
 object.unknown00=lbl_8049665C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80113008(){
 fn_80066188((int)fn_80113030);
}
void fn_80113030(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637BC,(int)fn_800CB164,(int)fn_800CB840,(int)fn_801130A8,(int)lbl_8049539C,20,(int)fn_80112EF0,(int)fn_801130C8,0,(int)lbl_80495390);
}
void *fn_801130A8(){return fn_80112EB4();}
}
#pragma pop
