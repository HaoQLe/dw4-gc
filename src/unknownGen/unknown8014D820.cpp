#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A724C[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014D820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014D820(){fn_8006665C(this);}
};
struct UnknownGenObject8014D820_0 : UnknownGenRoot8014D820 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014D820_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014D820_1 : UnknownGenObject8014D820_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8014D820_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8014D820 : UnknownGenObject8014D820_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8014D820(){unknown00=lbl_804A724C;}
};
extern "C" {
void *fn_8014D820(){
 UnknownGenObject8014D820 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A724C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
