#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013FAB0();
void fn_80140664();
extern char lbl_8049DE38[];
extern char lbl_804A5A2C[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8C8[8];
extern void *lbl_80563FAC;
void *fn_8013F8EC();
void *fn_8013F928();
void fn_8013F9F4();
void fn_8013FA1C();
void *fn_8013FA90();
}
struct UnknownGenRoot8013F928 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013F928(){fn_8006665C(this);}
};
struct UnknownGenObject8013F928_0 : UnknownGenRoot8013F928 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013F928_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013F928_1 : UnknownGenObject8013F928_0 {
 inline ~UnknownGenObject8013F928_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013F928 : UnknownGenObject8013F928_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013F928(){unknown00=lbl_804A5A2C;}
};
extern "C" {
void *fn_8013F8EC(){
 if(!lbl_80563FAC || !(reinterpret_cast<unsigned int *>(lbl_80563FAC)[0x24/4]&4)) fn_8013F9F4();
 return lbl_80563FAC;
}
void *fn_8013F928(){
 UnknownGenObject8013F928 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A5A2C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013F9F4(){
 fn_80066188((int)fn_8013FA1C);
}
void fn_8013FA1C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FAC,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013FA90,(int)lbl_8049DE38,44,(int)fn_8013F928,(int)fn_8013FAB0,0,(int)lbl_8055F8C8);
}
void *fn_8013FA90(){return fn_8013F8EC();}
}
#pragma pop
