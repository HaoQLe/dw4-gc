#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800D1FF0();
void fn_801AA6DC();
void *fn_801B623C();
void *fn_801B67EC();
void fn_801B6828();
void fn_801B6D78();
void fn_801C8C48();
void fn_8021746C();
extern char lbl_8047650C[];
extern char lbl_80493DD4[];
extern char lbl_804ADC84[];
extern char lbl_804ADC98[];
extern char lbl_804B3FD8[];
extern char lbl_8056038C[8];
extern void *lbl_80564B94;
extern void *lbl_80564B98;
void fn_801B6A20();
void *fn_801B6A88();
void *fn_801B6AA8();
void *fn_801B6AE4();
void fn_801B6CBC();
void fn_801B6CE4();
void *fn_801B6D58();
}
struct UnknownGenRoot801B6AE4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B6AE4(){fn_8006665C(this);}
};
struct UnknownGenObject801B6AE4_0 : UnknownGenRoot801B6AE4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B6AE4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B6AE4_1 : UnknownGenObject801B6AE4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801B6AE4_1(){unknown00=lbl_80493DD4;}
};
struct UnknownGenObject801B6AE4 : UnknownGenObject801B6AE4_1 {
 UnknownGenString unknown14;
 UnknownGenString unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject801B6AE4(){unknown00=lbl_804B3FD8;}
};
extern "C" {
void fn_801B69F8(){
 fn_80066188((int)fn_801B6A20);
}
void fn_801B6A20(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564B94,(int)fn_801C8C48,(int)fn_801B623C,(int)fn_801B6A88,(int)lbl_804ADC84,40,(int)fn_801B6828,0,0,0);
}
void *fn_801B6A88(){return fn_801B67EC();}
void *fn_801B6AA8(){
 if(!lbl_80564B98 || !(reinterpret_cast<unsigned int *>(lbl_80564B98)[0x24/4]&4)) fn_801B6CBC();
 return lbl_80564B98;
}
void *fn_801B6AE4(){
 UnknownGenObject801B6AE4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493DD4;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B3FD8;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B6CBC(){
 fn_80066188((int)fn_801B6CE4);
}
void fn_801B6CE4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564B98,(int)fn_8021746C,(int)fn_800D1FF0,(int)fn_801B6D58,(int)lbl_804ADC98,40,(int)fn_801B6AE4,(int)fn_801B6D78,0,(int)lbl_8056038C);
}
void *fn_801B6D58(){return fn_801B6AA8();}
}
#pragma pop
