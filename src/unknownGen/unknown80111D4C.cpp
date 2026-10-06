#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8049659C[];
}
struct UnknownGenRoot80111D4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111D4C(){fn_8006665C(this);}
};
struct UnknownGenObject80111D4C : UnknownGenRoot80111D4C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject80111D4C(){unknown00=lbl_8049659C;}
};
extern "C" {
void *fn_80111D4C(){
 UnknownGenObject80111D4C object;
 object.unknown00=lbl_8049659C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
