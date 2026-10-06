#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_80152CDC();
void fn_801532FC();
void fn_8015349C();
extern char lbl_804A0260[];
extern char lbl_804A026C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A8634[];
extern char lbl_804A8808[];
extern char lbl_804A88A4[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
extern void *lbl_80564580;
void *fn_801530E8();
void *fn_80153124();
void fn_8015323C();
void fn_80153264();
void *fn_801532DC();
}
struct UnknownGenRoot80153124 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80153124(){fn_8006665C(this);}
};
struct UnknownGenObject80153124_0 : UnknownGenRoot80153124 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80153124_0(){unknown00=lbl_804A8808;}
};
struct UnknownGenObject80153124_1 : UnknownGenObject80153124_0 {
 inline ~UnknownGenObject80153124_1(){unknown00=lbl_804A88A4;}
};
struct UnknownGenObject80153124 : UnknownGenObject80153124_1 {
 char unknown28[8];
 inline ~UnknownGenObject80153124(){unknown00=lbl_804A8634;}
};
extern "C" {
void *fn_801530E8(){
 if(!lbl_80564580 || !(reinterpret_cast<unsigned int *>(lbl_80564580)[0x24/4]&4)) fn_8015323C();
 return lbl_80564580;
}
void *fn_80153124(){
 UnknownGenObject80153124 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=lbl_804A8808;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A88A4;
 object.unknown00=lbl_804A8634;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8015323C(){
 fn_80066188((int)fn_80153264);
}
void fn_80153264(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564580,(int)fn_8015349C,(int)fn_80152CDC,(int)fn_801532DC,(int)lbl_804A026C,40,(int)fn_80153124,(int)fn_801532FC,0,(int)lbl_804A0260);
}
void *fn_801532DC(){return fn_801530E8();}
}
#pragma pop
