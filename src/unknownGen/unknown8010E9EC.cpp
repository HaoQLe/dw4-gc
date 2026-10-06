#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80495EF4[];
}
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){fn_8006665C(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=lbl_80495EF4;}
};
extern "C" {
void *fn_8010E9EC(){
 UnknownGenObject8010E9EC object;
 object.unknown00=lbl_80495EF4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
