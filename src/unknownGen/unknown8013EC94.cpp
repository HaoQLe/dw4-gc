#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013EE58();
void fn_80140664();
extern char lbl_8049DD94[];
extern char lbl_804A5620[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8A0[8];
extern void *lbl_80563F84;
void *fn_8013EC94();
void *fn_8013ECD0();
void fn_8013ED9C();
void fn_8013EDC4();
void *fn_8013EE38();
}
struct UnknownGenRoot8013ECD0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013ECD0(){fn_8006665C(this);}
};
struct UnknownGenObject8013ECD0_0 : UnknownGenRoot8013ECD0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013ECD0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013ECD0_1 : UnknownGenObject8013ECD0_0 {
 inline ~UnknownGenObject8013ECD0_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013ECD0 : UnknownGenObject8013ECD0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013ECD0(){unknown00=lbl_804A5620;}
};
extern "C" {
void *fn_8013EC94(){
 if(!lbl_80563F84 || !(reinterpret_cast<unsigned int *>(lbl_80563F84)[0x24/4]&4)) fn_8013ED9C();
 return lbl_80563F84;
}
void *fn_8013ECD0(){
 UnknownGenObject8013ECD0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A5620;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013ED9C(){
 fn_80066188((int)fn_8013EDC4);
}
void fn_8013EDC4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F84,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013EE38,(int)lbl_8049DD94,44,(int)fn_8013ECD0,(int)fn_8013EE58,0,(int)lbl_8055F8A0);
}
void *fn_8013EE38(){return fn_8013EC94();}
}
#pragma pop
