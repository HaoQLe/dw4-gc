#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013C460();
void fn_80140664();
extern char lbl_8049DB34[];
extern char lbl_804A4CE0[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F818[8];
extern void *lbl_80563EFC;
void *fn_8013C29C();
void *fn_8013C2D8();
void fn_8013C3A4();
void fn_8013C3CC();
void *fn_8013C440();
}
struct UnknownGenRoot8013C2D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013C2D8(){fn_8006665C(this);}
};
struct UnknownGenObject8013C2D8_0 : UnknownGenRoot8013C2D8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013C2D8_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013C2D8_1 : UnknownGenObject8013C2D8_0 {
 inline ~UnknownGenObject8013C2D8_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013C2D8 : UnknownGenObject8013C2D8_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013C2D8(){unknown00=lbl_804A4CE0;}
};
extern "C" {
void *fn_8013C29C(){
 if(!lbl_80563EFC || !(reinterpret_cast<unsigned int *>(lbl_80563EFC)[0x24/4]&4)) fn_8013C3A4();
 return lbl_80563EFC;
}
void *fn_8013C2D8(){
 UnknownGenObject8013C2D8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A4CE0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013C3A4(){
 fn_80066188((int)fn_8013C3CC);
}
void fn_8013C3CC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EFC,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013C440,(int)lbl_8049DB34,44,(int)fn_8013C2D8,(int)fn_8013C460,0,(int)lbl_8055F818);
}
void *fn_8013C440(){return fn_8013C29C();}
}
#pragma pop
