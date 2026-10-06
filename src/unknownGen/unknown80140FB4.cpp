#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4744[];
extern char lbl_804A4A04[];
extern char lbl_804A5D98[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80140FB4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140FB4(){fn_8006665C(this);}
};
struct UnknownGenObject80140FB4_0 : UnknownGenRoot80140FB4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80140FB4_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80140FB4_1 : UnknownGenObject80140FB4_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 inline ~UnknownGenObject80140FB4_1(){unknown00=lbl_804A4744;}
};
struct UnknownGenObject80140FB4 : UnknownGenObject80140FB4_1 {
 char unknown30[8];
 inline ~UnknownGenObject80140FB4(){unknown00=lbl_804A5D98;}
};
extern "C" {
void *fn_80140FB4(){
 UnknownGenObject80140FB4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4744;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_804A5D98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
