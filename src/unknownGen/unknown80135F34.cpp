#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3AC0[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80135F34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80135F34(){fn_8006665C(this);}
};
struct UnknownGenObject80135F34_0 : UnknownGenRoot80135F34 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80135F34_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80135F34_1 : UnknownGenObject80135F34_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80135F34_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80135F34 : UnknownGenObject80135F34_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80135F34(){unknown00=lbl_804A3AC0;}
};
extern "C" {
void *fn_80135F34(){
 UnknownGenObject80135F34 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A3AC0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
