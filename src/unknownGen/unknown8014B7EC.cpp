#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A6DEC[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014B7EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014B7EC(){fn_8006665C(this);}
};
struct UnknownGenObject8014B7EC_0 : UnknownGenRoot8014B7EC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014B7EC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014B7EC : UnknownGenObject8014B7EC_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014B7EC(){unknown00=lbl_804A6DEC;}
};
extern "C" {
void *fn_8014B7EC(){
 UnknownGenObject8014B7EC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A6DEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
