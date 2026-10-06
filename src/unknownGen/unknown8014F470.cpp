#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void fn_8014F6E4();
extern char lbl_8049FD3C[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A7800[];
extern char lbl_804AAF48[];
extern void *lbl_805644A0;
void *fn_8014F470();
void *fn_8014F4AC();
void fn_8014F62C();
void fn_8014F654();
void *fn_8014F6C4();
}
struct UnknownGenRoot8014F4AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F4AC(){fn_8006665C(this);}
};
struct UnknownGenObject8014F4AC_0 : UnknownGenRoot8014F4AC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014F4AC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014F4AC_1 : UnknownGenObject8014F4AC_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8014F4AC_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8014F4AC : UnknownGenObject8014F4AC_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014F4AC(){unknown00=lbl_804A7800;}
};
extern "C" {
void *fn_8014F470(){
 if(!lbl_805644A0 || !(reinterpret_cast<unsigned int *>(lbl_805644A0)[0x24/4]&4)) fn_8014F62C();
 return lbl_805644A0;
}
void *fn_8014F4AC(){
 UnknownGenObject8014F4AC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A7800;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014F62C(){
 fn_80066188((int)fn_8014F654);
}
void fn_8014F654(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644A0,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014F6C4,(int)lbl_8049FD3C,52,(int)fn_8014F4AC,(int)fn_8014F6E4,0,0);
}
void *fn_8014F6C4(){return fn_8014F470();}
}
#pragma pop
