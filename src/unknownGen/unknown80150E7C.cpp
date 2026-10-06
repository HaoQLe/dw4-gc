#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A7FB8[];
extern char lbl_804A8050[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80150E7C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80150E7C(){fn_8006665C(this);}
};
struct UnknownGenObject80150E7C_0 : UnknownGenRoot80150E7C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80150E7C_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject80150E7C : UnknownGenObject80150E7C_0 {
 char unknown28[8];
 inline ~UnknownGenObject80150E7C(){unknown00=lbl_804A7FB8;}
};
extern "C" {
void *fn_80150E7C(){
 UnknownGenObject80150E7C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A7FB8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
