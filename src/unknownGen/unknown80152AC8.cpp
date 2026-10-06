#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80152CE4();
void fn_8015349C();
extern char lbl_804A0220[];
extern char lbl_804A022C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A86D0[];
extern char lbl_804A8808[];
extern char lbl_804A88A4[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
extern void *lbl_8056456C;
extern void *lbl_8056458C;
void *fn_80152AC8();
void *fn_80152B04();
void fn_80152C1C();
void fn_80152C44();
void *fn_80152CBC();
void *fn_80152CDC();
}
struct UnknownGenRoot80152B04 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80152B04(){fn_8006665C(this);}
};
struct UnknownGenObject80152B04_0 : UnknownGenRoot80152B04 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80152B04_0(){unknown00=lbl_804A8808;}
};
struct UnknownGenObject80152B04_1 : UnknownGenObject80152B04_0 {
 inline ~UnknownGenObject80152B04_1(){unknown00=lbl_804A88A4;}
};
struct UnknownGenObject80152B04 : UnknownGenObject80152B04_1 {
 char unknown28[8];
 inline ~UnknownGenObject80152B04(){unknown00=lbl_804A86D0;}
};
extern "C" {
void *fn_80152AC8(){
 if(!lbl_8056456C || !(reinterpret_cast<unsigned int *>(lbl_8056456C)[0x24/4]&4)) fn_80152C1C();
 return lbl_8056456C;
}
void *fn_80152B04(){
 UnknownGenObject80152B04 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=lbl_804A8808;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A88A4;
 object.unknown00=lbl_804A86D0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80152C1C(){
 fn_80066188((int)fn_80152C44);
}
void fn_80152C44(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056456C,(int)fn_8015349C,(int)fn_80152CDC,(int)fn_80152CBC,(int)lbl_804A022C,40,(int)fn_80152B04,(int)fn_80152CE4,0,(int)lbl_804A0220);
}
void *fn_80152CBC(){return fn_80152AC8();}
void *fn_80152CDC(){return lbl_8056458C;}
}
#pragma pop
