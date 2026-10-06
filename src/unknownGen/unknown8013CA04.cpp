#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013CBC8();
void fn_80140664();
extern char lbl_8049DBA8[];
extern char lbl_804A4E9C[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F830[8];
extern void *lbl_80563F14;
void *fn_8013CA04();
void *fn_8013CA40();
void fn_8013CB0C();
void fn_8013CB34();
void *fn_8013CBA8();
}
struct UnknownGenRoot8013CA40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013CA40(){fn_8006665C(this);}
};
struct UnknownGenObject8013CA40_0 : UnknownGenRoot8013CA40 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013CA40_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013CA40_1 : UnknownGenObject8013CA40_0 {
 inline ~UnknownGenObject8013CA40_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013CA40 : UnknownGenObject8013CA40_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013CA40(){unknown00=lbl_804A4E9C;}
};
extern "C" {
void *fn_8013CA04(){
 if(!lbl_80563F14 || !(reinterpret_cast<unsigned int *>(lbl_80563F14)[0x24/4]&4)) fn_8013CB0C();
 return lbl_80563F14;
}
void *fn_8013CA40(){
 UnknownGenObject8013CA40 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A4E9C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013CB0C(){
 fn_80066188((int)fn_8013CB34);
}
void fn_8013CB34(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F14,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013CBA8,(int)lbl_8049DBA8,44,(int)fn_8013CA40,(int)fn_8013CBC8,0,(int)lbl_8055F830);
}
void *fn_8013CBA8(){return fn_8013CA04();}
}
#pragma pop
