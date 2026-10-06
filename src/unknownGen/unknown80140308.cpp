#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A5AC0[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80140308 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140308(){fn_8006665C(this);}
};
struct UnknownGenObject80140308_0 : UnknownGenRoot80140308 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject80140308_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject80140308_1 : UnknownGenObject80140308_0 {
 inline ~UnknownGenObject80140308_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject80140308 : UnknownGenObject80140308_1 {
 char unknown24[12];
 inline ~UnknownGenObject80140308(){unknown00=lbl_804A5AC0;}
};
extern "C" {
void *fn_80140308(){
 UnknownGenObject80140308 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A5AC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
