#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804AAB9C[];
}
struct UnknownGenRoot80130EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130EF0(){fn_8006665C(this);}
};
struct UnknownGenObject80130EF0 : UnknownGenRoot80130EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80130EF0(){unknown00=lbl_804AAB9C;}
};
extern "C" {
void *fn_80130EF0(){
 UnknownGenObject80130EF0 object;
 object.unknown00=lbl_804AAB9C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
