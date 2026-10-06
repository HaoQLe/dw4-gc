#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A6148[];
extern char lbl_804A6460[];
extern char lbl_804AA1C0[];
}
struct UnknownGenRoot801429C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801429C8(){fn_8006665C(this);}
};
struct UnknownGenObject801429C8 : UnknownGenRoot801429C8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject801429C8(){unknown00=lbl_804A6148;}
};
extern "C" {
void *fn_801429C8(){
 UnknownGenObject801429C8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 object.unknown00=lbl_804A6148;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
