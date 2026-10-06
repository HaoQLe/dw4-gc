#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80497C9C[];
extern char lbl_804CE898[];
}
struct UnknownGenRoot802ACFF8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802ACFF8(){fn_8006665C(this);}
};
struct UnknownGenObject802ACFF8_0 : UnknownGenRoot802ACFF8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject802ACFF8_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject802ACFF8 : UnknownGenObject802ACFF8_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802ACFF8(){unknown00=lbl_804CE898;}
};
extern "C" {
void *fn_802ACFF8(){
 UnknownGenObject802ACFF8 object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CE898;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
