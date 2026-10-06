#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013E200();
void fn_80140664();
extern char lbl_8049DCE8[];
extern char lbl_804A53D0[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F878[8];
extern void *lbl_80563F5C;
void *fn_8013E03C();
void *fn_8013E078();
void fn_8013E144();
void fn_8013E16C();
void *fn_8013E1E0();
}
struct UnknownGenRoot8013E078 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013E078(){fn_8006665C(this);}
};
struct UnknownGenObject8013E078_0 : UnknownGenRoot8013E078 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013E078_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013E078_1 : UnknownGenObject8013E078_0 {
 inline ~UnknownGenObject8013E078_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013E078 : UnknownGenObject8013E078_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013E078(){unknown00=lbl_804A53D0;}
};
extern "C" {
void *fn_8013E03C(){
 if(!lbl_80563F5C || !(reinterpret_cast<unsigned int *>(lbl_80563F5C)[0x24/4]&4)) fn_8013E144();
 return lbl_80563F5C;
}
void *fn_8013E078(){
 UnknownGenObject8013E078 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A53D0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013E144(){
 fn_80066188((int)fn_8013E16C);
}
void fn_8013E16C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F5C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013E1E0,(int)lbl_8049DCE8,44,(int)fn_8013E078,(int)fn_8013E200,0,(int)lbl_8055F878);
}
void *fn_8013E1E0(){return fn_8013E03C();}
}
#pragma pop
