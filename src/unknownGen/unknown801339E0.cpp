#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A33CC[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801339E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801339E0(){fn_8006665C(this);}
};
struct UnknownGenObject801339E0_0 : UnknownGenRoot801339E0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801339E0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801339E0_1 : UnknownGenObject801339E0_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801339E0_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801339E0 : UnknownGenObject801339E0_1 {
 char unknown2C[12];
 inline ~UnknownGenObject801339E0(){unknown00=lbl_804A33CC;}
};
extern "C" {
void *fn_801339E0(){
 UnknownGenObject801339E0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A33CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
