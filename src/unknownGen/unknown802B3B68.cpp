#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DC960[];
}
struct UnknownGenRoot802B3B68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B3B68(){fn_8006665C(this);}
};
struct UnknownGenObject802B3B68 : UnknownGenRoot802B3B68 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802B3B68(){unknown00=lbl_804DC960;}
};
extern "C" {
void *beWeaponAttachData_vtableRead(){
 UnknownGenObject802B3B68 object;
 object.unknown00=lbl_804DC960;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
