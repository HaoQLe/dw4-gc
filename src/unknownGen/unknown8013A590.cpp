#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4624[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8013A590 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013A590(){fn_8006665C(this);}
};
struct UnknownGenObject8013A590_0 : UnknownGenRoot8013A590 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013A590_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013A590 : UnknownGenObject8013A590_0 {
 char unknown28[24];
 inline ~UnknownGenObject8013A590(){unknown00=lbl_804A4624;}
};
extern "C" {
void *fn_8013A590(){
 UnknownGenObject8013A590 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4624;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
