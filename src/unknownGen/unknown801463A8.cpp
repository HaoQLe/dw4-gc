#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A63C8[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801463A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801463A8(){fn_8006665C(this);}
};
struct UnknownGenObject801463A8_0 : UnknownGenRoot801463A8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801463A8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801463A8_1 : UnknownGenObject801463A8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801463A8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801463A8 : UnknownGenObject801463A8_1 {
 char unknown2C[12];
 inline ~UnknownGenObject801463A8(){unknown00=lbl_804A63C8;}
};
extern "C" {
void *fn_801463A8(){
 UnknownGenObject801463A8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A63C8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
