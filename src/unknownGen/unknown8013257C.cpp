#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3074[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8013257C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013257C(){fn_8006665C(this);}
};
struct UnknownGenObject8013257C_0 : UnknownGenRoot8013257C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013257C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013257C : UnknownGenObject8013257C_0 {
 char unknown28[24];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject8013257C(){unknown00=lbl_804A3074;}
};
extern "C" {
void *fn_8013257C(){
 UnknownGenObject8013257C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3074;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
