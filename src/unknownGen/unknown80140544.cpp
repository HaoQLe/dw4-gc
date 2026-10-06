#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80140700();
void fn_801408E4();
extern char lbl_8049DEC4[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8F0[8];
extern void *lbl_80563FD4;
extern void *lbl_80563FF8;
void *fn_80140544();
void *fn_80140580();
void fn_8014063C();
void fn_80140664();
void *fn_801406D8();
void *fn_801406F8();
}
struct UnknownGenRoot80140580 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140580(){fn_8006665C(this);}
};
struct UnknownGenObject80140580_0 : UnknownGenRoot80140580 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject80140580_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject80140580 : UnknownGenObject80140580_0 {
 char unknown24[12];
 inline ~UnknownGenObject80140580(){unknown00=lbl_804A5BE8;}
};
extern "C" {
void *fn_80140544(){
 if(!lbl_80563FD4 || !(reinterpret_cast<unsigned int *>(lbl_80563FD4)[0x24/4]&4)) fn_8014063C();
 return lbl_80563FD4;
}
void *fn_80140580(){
 UnknownGenObject80140580 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014063C(){
 fn_80066188((int)fn_80140664);
}
void fn_80140664(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FD4,(int)fn_801408E4,(int)fn_801406F8,(int)fn_801406D8,(int)lbl_8049DEC4,44,(int)fn_80140580,(int)fn_80140700,0,(int)lbl_8055F8F0);
}
void *fn_801406D8(){return fn_80140544();}
void *fn_801406F8(){return lbl_80563FF8;}
}
#pragma pop
