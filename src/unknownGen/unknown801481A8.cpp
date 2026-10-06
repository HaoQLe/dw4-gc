#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A683C[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801481A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801481A8(){fn_8006665C(this);}
};
struct UnknownGenObject801481A8_0 : UnknownGenRoot801481A8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801481A8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801481A8_1 : UnknownGenObject801481A8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801481A8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801481A8 : UnknownGenObject801481A8_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject801481A8(){unknown00=lbl_804A683C;}
};
extern "C" {
void *fn_801481A8(){
 UnknownGenObject801481A8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A683C;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
