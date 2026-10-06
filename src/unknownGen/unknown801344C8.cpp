#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6460[];
extern char lbl_804AA7A0[];
extern char lbl_804AA80C[];
extern char lbl_804AA878[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801344C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801344C8(){fn_8006665C(this);}
};
struct UnknownGenObject801344C8 : UnknownGenRoot801344C8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801344C8(){unknown00=lbl_804AA7A0;}
};
extern "C" {
void *fn_801344C8(){
 UnknownGenObject801344C8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AA878;
 object.unknown00=lbl_804AA80C;
 object.unknown00=lbl_804AA7A0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
