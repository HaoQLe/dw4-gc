#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A876C[];
extern char lbl_804A8808[];
extern char lbl_804A88A4[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80152E5C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80152E5C(){fn_8006665C(this);}
};
struct UnknownGenObject80152E5C_0 : UnknownGenRoot80152E5C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80152E5C_0(){unknown00=lbl_804A8808;}
};
struct UnknownGenObject80152E5C_1 : UnknownGenObject80152E5C_0 {
 inline ~UnknownGenObject80152E5C_1(){unknown00=lbl_804A88A4;}
};
struct UnknownGenObject80152E5C : UnknownGenObject80152E5C_1 {
 char unknown28[8];
 inline ~UnknownGenObject80152E5C(){unknown00=lbl_804A876C;}
};
extern "C" {
void *fn_80152E5C(){
 UnknownGenObject80152E5C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=lbl_804A8808;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A88A4;
 object.unknown00=lbl_804A876C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
