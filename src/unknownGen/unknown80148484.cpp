#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A6A8C[];
extern char lbl_804A8050[];
extern char lbl_804A934C[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot80148484 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80148484(){fn_8006665C(this);}
};
struct UnknownGenObject80148484_0 : UnknownGenRoot80148484 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80148484_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject80148484_1 : UnknownGenObject80148484_0 {
 inline ~UnknownGenObject80148484_1(){unknown00=lbl_804A934C;}
};
struct UnknownGenObject80148484 : UnknownGenObject80148484_1 {
 char unknown28[8];
 inline ~UnknownGenObject80148484(){unknown00=lbl_804A6A8C;}
};
extern "C" {
void *fn_80148484(){
 UnknownGenObject80148484 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A934C;
 object.unknown00=lbl_804A6A8C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
