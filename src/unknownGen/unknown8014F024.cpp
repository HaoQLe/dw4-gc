#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A76D8[];
extern char lbl_804A776C[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8014F024 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F024(){fn_8006665C(this);}
};
struct UnknownGenObject8014F024_0 : UnknownGenRoot8014F024 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014F024_0(){unknown00=lbl_804A776C;}
};
struct UnknownGenObject8014F024 : UnknownGenObject8014F024_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014F024(){unknown00=lbl_804A76D8;}
};
extern "C" {
void *fn_8014F024(){
 UnknownGenObject8014F024 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A776C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A76D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
