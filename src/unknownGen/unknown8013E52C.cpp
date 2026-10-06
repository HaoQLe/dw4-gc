#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013E6F0();
void fn_80140664();
extern char lbl_8049DD30[];
extern char lbl_804A54F8[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F888[8];
extern void *lbl_80563F6C;
void *fn_8013E52C();
void *fn_8013E568();
void fn_8013E634();
void fn_8013E65C();
void *fn_8013E6D0();
}
struct UnknownGenRoot8013E568 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013E568(){fn_8006665C(this);}
};
struct UnknownGenObject8013E568_0 : UnknownGenRoot8013E568 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013E568_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013E568_1 : UnknownGenObject8013E568_0 {
 inline ~UnknownGenObject8013E568_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013E568 : UnknownGenObject8013E568_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013E568(){unknown00=lbl_804A54F8;}
};
extern "C" {
void *fn_8013E52C(){
 if(!lbl_80563F6C || !(reinterpret_cast<unsigned int *>(lbl_80563F6C)[0x24/4]&4)) fn_8013E634();
 return lbl_80563F6C;
}
void *fn_8013E568(){
 UnknownGenObject8013E568 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A54F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013E634(){
 fn_80066188((int)fn_8013E65C);
}
void fn_8013E65C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F6C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013E6D0,(int)lbl_8049DD30,44,(int)fn_8013E568,(int)fn_8013E6F0,0,(int)lbl_8055F888);
}
void *fn_8013E6D0(){return fn_8013E52C();}
}
#pragma pop
