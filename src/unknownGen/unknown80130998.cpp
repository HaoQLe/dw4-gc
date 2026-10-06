#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A2E04[];
extern char lbl_804A46AC[];
extern char lbl_804A47D8[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80130998 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130998(){fn_8006665C(this);}
};
struct UnknownGenObject80130998_0 : UnknownGenRoot80130998 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80130998_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80130998_1 : UnknownGenObject80130998_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80130998_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80130998_2 : UnknownGenObject80130998_1 {
 UnknownGenString unknown2C;
 char unknown30[16];
 UnknownGenRefMember unknown40;
 inline ~UnknownGenObject80130998_2(){unknown00=lbl_804A47D8;}
};
struct UnknownGenObject80130998 : UnknownGenObject80130998_2 {
 UnknownGenRefMember unknown44;
 char unknown48[8];
 inline ~UnknownGenObject80130998(){unknown00=lbl_804A2E04;}
};
extern "C" {
void *fn_80130998(){
 UnknownGenObject80130998 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A47D8;
 object.unknown2C.value=0;
 object.unknown40.value=0;
 object.unknown00=lbl_804A2E04;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
