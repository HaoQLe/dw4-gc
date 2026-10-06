#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8049618C[];
extern char lbl_80497724[];
}
struct UnknownGenRoot8010FA28 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FA28(){fn_8006665C(this);}
};
struct UnknownGenObject8010FA28 : UnknownGenRoot8010FA28 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject8010FA28(){unknown00=lbl_8049618C;}
};
extern "C" {
void *fn_8010FA28(){
 UnknownGenObject8010FA28 object;
 object.unknown00=lbl_80497724;
 object.unknown00=lbl_8049618C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
