#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A459C[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8013A2EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013A2EC(){fn_8006665C(this);}
};
struct UnknownGenObject8013A2EC_0 : UnknownGenRoot8013A2EC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013A2EC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013A2EC : UnknownGenObject8013A2EC_0 {
 char unknown28[24];
 inline ~UnknownGenObject8013A2EC(){unknown00=lbl_804A459C;}
};
extern "C" {
void *fn_8013A2EC(){
 UnknownGenObject8013A2EC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A459C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
