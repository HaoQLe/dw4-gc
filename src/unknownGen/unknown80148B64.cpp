#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A68D4[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80148B64 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80148B64(){fn_8006665C(this);}
};
struct UnknownGenObject80148B64_0 : UnknownGenRoot80148B64 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80148B64_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80148B64 : UnknownGenObject80148B64_0 {
 char unknown28[4];
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80148B64(){unknown00=lbl_804A68D4;}
};
extern "C" {
void *fn_80148B64(){
 UnknownGenObject80148B64 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A68D4;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
