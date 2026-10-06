#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void fn_801137B0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80494570[];
extern char lbl_804953F0[];
extern char lbl_80495460[];
extern char lbl_80495470[];
extern char lbl_804970B8[];
extern char lbl_80497114[];
extern char lbl_80497178[];
extern char lbl_8055F1BC[8];
extern void *lbl_805621F4;
extern void *lbl_805637D0;
extern void *lbl_805637D4;
extern void *lbl_805637D8;
void *fn_80113408();
void *fn_80113444();
void fn_801134B4();
void fn_801134DC();
void *fn_80113548();
void *fn_801135B4();
void *fn_801135F0();
void fn_801136F0();
void fn_80113718();
void *fn_80113790();
}
struct UnknownGenObject80113444_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801135F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801135F0(){fn_8006665C(this);}
};
struct UnknownGenObject801135F0 : UnknownGenRoot801135F0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801135F0(){unknown00=lbl_804970B8;}
};
extern "C" {
void *fn_801133CC(){
 if(!lbl_805637D0) lbl_805637D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637D0;
}
void *fn_80113408(){
 if(!lbl_805637D0 || !(reinterpret_cast<unsigned int *>(lbl_805637D0)[0x24/4]&4)) fn_801134B4();
 return lbl_805637D0;
}
void *fn_80113444(){
 UnknownGenObject80113444_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80497178;
 object.unknown00=lbl_80497114;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801134B4(){
 fn_80066188((int)fn_801134DC);
}
void fn_801134DC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637D0,(int)fn_8002907C,(int)fn_80024180,(int)fn_80113548,(int)lbl_804953F0,20,(int)fn_80113444,0,0,(int)lbl_8055F1BC);
}
void *fn_80113548(){return fn_80113408();}
void *fn_80113568(){
 char *data=lbl_80494570;
 if(!lbl_805637D4) lbl_805637D4=fn_800635C8(data+0xEE4,data+0xEC4,data+0xED4,0x4);
 return lbl_805637D4;
}
void *fn_801135B4(){
 if(!lbl_805637D8 || !(reinterpret_cast<unsigned int *>(lbl_805637D8)[0x24/4]&4)) fn_801136F0();
 return lbl_805637D8;
}
void *fn_801135F0(){
 UnknownGenObject801135F0 object;
 object.unknown00=lbl_804970B8;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801136F0(){
 fn_80066188((int)fn_80113718);
}
void fn_80113718(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637D8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80113790,(int)lbl_80495470,32,(int)fn_801135F0,(int)fn_801137B0,0,(int)lbl_80495460);
}
void *fn_80113790(){return fn_801135B4();}
}
#pragma pop
