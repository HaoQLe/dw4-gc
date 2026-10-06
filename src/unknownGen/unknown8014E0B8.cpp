#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_8013A9EC();
void *fn_8013AFE4();
void fn_8014E324();
extern char lbl_8049FA28[];
extern char lbl_804A4744[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A7404[];
extern char lbl_804AAF48[];
extern void *lbl_80564428;
void *fn_8014E0B8();
void *fn_8014E0F4();
void fn_8014E26C();
void fn_8014E294();
void *fn_8014E304();
}
struct UnknownGenRoot8014E0F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014E0F4(){fn_8006665C(this);}
};
struct UnknownGenObject8014E0F4_0 : UnknownGenRoot8014E0F4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014E0F4_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014E0F4_1 : UnknownGenObject8014E0F4_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 inline ~UnknownGenObject8014E0F4_1(){unknown00=lbl_804A4744;}
};
struct UnknownGenObject8014E0F4 : UnknownGenObject8014E0F4_1 {
 char unknown30[24];
 inline ~UnknownGenObject8014E0F4(){unknown00=lbl_804A7404;}
};
extern "C" {
void *fn_8014E0B8(){
 if(!lbl_80564428 || !(reinterpret_cast<unsigned int *>(lbl_80564428)[0x24/4]&4)) fn_8014E26C();
 return lbl_80564428;
}
void *fn_8014E0F4(){
 UnknownGenObject8014E0F4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4744;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_804A7404;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014E26C(){
 fn_80066188((int)fn_8014E294);
}
void fn_8014E294(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564428,(int)fn_8013A9EC,(int)fn_8013AFE4,(int)fn_8014E304,(int)lbl_8049FA28,72,(int)fn_8014E0F4,(int)fn_8014E324,0,0);
}
void *fn_8014E304(){return fn_8014E0B8();}
}
#pragma pop
