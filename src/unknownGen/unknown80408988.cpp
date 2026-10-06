#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80497C9C[];
extern char lbl_804F1810[];
}
struct UnknownGenRoot80408988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80408988(){fn_8006665C(this);}
};
struct UnknownGenObject80408988_0 : UnknownGenRoot80408988 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80408988_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject80408988 : UnknownGenObject80408988_0 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80408988(){unknown00=lbl_804F1810;}
};
extern "C" {
void *fn_80408988(){
 UnknownGenObject80408988 object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=lbl_804F1810;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
