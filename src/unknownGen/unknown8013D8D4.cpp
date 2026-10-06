#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013DA98();
void fn_80140664();
extern char lbl_8049DC8C[];
extern char lbl_804A5214[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F860[8];
extern void *lbl_80563F44;
void *fn_8013D8D4();
void *fn_8013D910();
void fn_8013D9DC();
void fn_8013DA04();
void *fn_8013DA78();
}
struct UnknownGenRoot8013D910 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013D910(){fn_8006665C(this);}
};
struct UnknownGenObject8013D910_0 : UnknownGenRoot8013D910 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013D910_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013D910_1 : UnknownGenObject8013D910_0 {
 inline ~UnknownGenObject8013D910_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013D910 : UnknownGenObject8013D910_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013D910(){unknown00=lbl_804A5214;}
};
extern "C" {
void *fn_8013D8D4(){
 if(!lbl_80563F44 || !(reinterpret_cast<unsigned int *>(lbl_80563F44)[0x24/4]&4)) fn_8013D9DC();
 return lbl_80563F44;
}
void *fn_8013D910(){
 UnknownGenObject8013D910 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A5214;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013D9DC(){
 fn_80066188((int)fn_8013DA04);
}
void fn_8013DA04(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F44,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013DA78,(int)lbl_8049DC8C,44,(int)fn_8013D910,(int)fn_8013DA98,0,(int)lbl_8055F860);
}
void *fn_8013DA78(){return fn_8013D8D4();}
}
#pragma pop
