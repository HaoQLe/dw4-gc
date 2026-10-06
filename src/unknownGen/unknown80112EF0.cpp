#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80480440[];
extern char lbl_8049665C[];
}
struct UnknownGenRoot80112EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112EF0(){fn_8006665C(this);}
};
struct UnknownGenObject80112EF0_0 : UnknownGenRoot80112EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80112EF0_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject80112EF0 : UnknownGenObject80112EF0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80112EF0(){unknown00=lbl_8049665C;}
};
extern "C" {
void *fn_80112EF0(){
 UnknownGenObject80112EF0 object;
 object.unknown00=lbl_80480440;
 object.unknown08.value=0;
 object.unknown00=lbl_8049665C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
