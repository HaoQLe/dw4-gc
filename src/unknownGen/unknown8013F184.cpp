#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013F348();
void fn_80140664();
extern char lbl_8049DDDC[];
extern char lbl_804A5748[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8B0[8];
extern void *lbl_80563F94;
void *fn_8013F184();
void *fn_8013F1C0();
void fn_8013F28C();
void fn_8013F2B4();
void *fn_8013F328();
}
struct UnknownGenRoot8013F1C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013F1C0(){fn_8006665C(this);}
};
struct UnknownGenObject8013F1C0_0 : UnknownGenRoot8013F1C0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013F1C0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013F1C0_1 : UnknownGenObject8013F1C0_0 {
 inline ~UnknownGenObject8013F1C0_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013F1C0 : UnknownGenObject8013F1C0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013F1C0(){unknown00=lbl_804A5748;}
};
extern "C" {
void *fn_8013F184(){
 if(!lbl_80563F94 || !(reinterpret_cast<unsigned int *>(lbl_80563F94)[0x24/4]&4)) fn_8013F28C();
 return lbl_80563F94;
}
void *fn_8013F1C0(){
 UnknownGenObject8013F1C0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A5748;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013F28C(){
 fn_80066188((int)fn_8013F2B4);
}
void fn_8013F2B4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F94,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013F328,(int)lbl_8049DDDC,44,(int)fn_8013F1C0,(int)fn_8013F348,0,(int)lbl_8055F8B0);
}
void *fn_8013F328(){return fn_8013F184();}
}
#pragma pop
