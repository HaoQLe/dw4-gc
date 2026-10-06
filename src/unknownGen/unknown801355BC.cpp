#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3880[];
extern char lbl_804A3918[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801355BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801355BC(){fn_8006665C(this);}
};
struct UnknownGenObject801355BC_0 : UnknownGenRoot801355BC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801355BC_0(){unknown00=lbl_804A3918;}
};
struct UnknownGenObject801355BC : UnknownGenObject801355BC_0 {
 char unknown2C[12];
 inline ~UnknownGenObject801355BC(){unknown00=lbl_804A3880;}
};
extern "C" {
void *fn_801355BC(){
 UnknownGenObject801355BC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=lbl_804A3918;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_804A3880;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
