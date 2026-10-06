#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6460[];
extern char lbl_804AA6A4[];
extern char lbl_804AA80C[];
extern char lbl_804AA878[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80134EC4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134EC4(){fn_8006665C(this);}
};
struct UnknownGenObject80134EC4 : UnknownGenRoot80134EC4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80134EC4(){unknown00=lbl_804AA6A4;}
};
extern "C" {
void *fn_80134EC4(){
 UnknownGenObject80134EC4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AA878;
 object.unknown00=lbl_804AA80C;
 object.unknown00=lbl_804AA6A4;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
