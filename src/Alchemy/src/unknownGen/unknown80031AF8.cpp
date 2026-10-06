#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472C48[];
}
struct UnknownGenRoot80031AF8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80031AF8(){fn_8006665C(this);}
};
struct UnknownGenObject80031AF8 : UnknownGenRoot80031AF8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80031AF8(){unknown00=lbl_80472C48;}
};
extern "C" {
void *fn_80031AF8(){
 UnknownGenObject80031AF8 object;
 object.unknown00=lbl_80472C48;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
