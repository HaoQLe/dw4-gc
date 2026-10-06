#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A36B4[];
extern char lbl_804A374C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA710[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80134A84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134A84(){fn_8006665C(this);}
};
struct UnknownGenObject80134A84_0 : UnknownGenRoot80134A84 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80134A84_0(){unknown00=lbl_804A374C;}
};
struct UnknownGenObject80134A84 : UnknownGenObject80134A84_0 {
 char unknown2C[12];
 inline ~UnknownGenObject80134A84(){unknown00=lbl_804A36B4;}
};
extern "C" {
void *fn_80134A84(){
 UnknownGenObject80134A84 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA710;
 object.unknown00=lbl_804A374C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_804A36B4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
