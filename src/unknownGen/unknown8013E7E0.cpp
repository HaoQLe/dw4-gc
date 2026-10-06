#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4B24[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot8013E7E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013E7E0(){fn_8006665C(this);}
};
struct UnknownGenObject8013E7E0_0 : UnknownGenRoot8013E7E0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013E7E0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013E7E0_1 : UnknownGenObject8013E7E0_0 {
 inline ~UnknownGenObject8013E7E0_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013E7E0 : UnknownGenObject8013E7E0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013E7E0(){unknown00=lbl_804A4B24;}
};
extern "C" {
void *fn_8013E7E0(){
 UnknownGenObject8013E7E0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A4B24;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
