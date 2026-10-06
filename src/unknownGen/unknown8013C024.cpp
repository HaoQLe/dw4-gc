#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013C1E8();
void fn_80140664();
extern char lbl_8049DB18[];
extern char lbl_804A4C4C[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F810[8];
extern void *lbl_80563EF4;
void *fn_8013C024();
void *fn_8013C060();
void fn_8013C12C();
void fn_8013C154();
void *fn_8013C1C8();
}
struct UnknownGenRoot8013C060 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013C060(){fn_8006665C(this);}
};
struct UnknownGenObject8013C060_0 : UnknownGenRoot8013C060 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013C060_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013C060_1 : UnknownGenObject8013C060_0 {
 inline ~UnknownGenObject8013C060_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013C060 : UnknownGenObject8013C060_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013C060(){unknown00=lbl_804A4C4C;}
};
extern "C" {
void *fn_8013C024(){
 if(!lbl_80563EF4 || !(reinterpret_cast<unsigned int *>(lbl_80563EF4)[0x24/4]&4)) fn_8013C12C();
 return lbl_80563EF4;
}
void *fn_8013C060(){
 UnknownGenObject8013C060 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A4C4C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013C12C(){
 fn_80066188((int)fn_8013C154);
}
void fn_8013C154(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EF4,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013C1C8,(int)lbl_8049DB18,44,(int)fn_8013C060,(int)fn_8013C1E8,0,(int)lbl_8055F810);
}
void *fn_8013C1C8(){return fn_8013C024();}
}
#pragma pop
