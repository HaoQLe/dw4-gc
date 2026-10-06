#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013C950();
void fn_80140664();
extern char lbl_8049DB84[];
extern char lbl_804A4E08[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F828[8];
extern void *lbl_80563F0C;
void *fn_8013C78C();
void *fn_8013C7C8();
void fn_8013C894();
void fn_8013C8BC();
void *fn_8013C930();
}
struct UnknownGenRoot8013C7C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013C7C8(){fn_8006665C(this);}
};
struct UnknownGenObject8013C7C8_0 : UnknownGenRoot8013C7C8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013C7C8_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013C7C8_1 : UnknownGenObject8013C7C8_0 {
 inline ~UnknownGenObject8013C7C8_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013C7C8 : UnknownGenObject8013C7C8_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013C7C8(){unknown00=lbl_804A4E08;}
};
extern "C" {
void *fn_8013C78C(){
 if(!lbl_80563F0C || !(reinterpret_cast<unsigned int *>(lbl_80563F0C)[0x24/4]&4)) fn_8013C894();
 return lbl_80563F0C;
}
void *fn_8013C7C8(){
 UnknownGenObject8013C7C8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A4E08;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013C894(){
 fn_80066188((int)fn_8013C8BC);
}
void fn_8013C8BC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F0C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013C930,(int)lbl_8049DB84,44,(int)fn_8013C7C8,(int)fn_8013C950,0,(int)lbl_8055F828);
}
void *fn_8013C930(){return fn_8013C78C();}
}
#pragma pop
