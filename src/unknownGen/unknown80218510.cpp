#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804BC6B0[];
extern char lbl_804BC70C[];
extern char lbl_804BCA64[];
}
struct UnknownGenRoot80218510 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218510(){fn_8006665C(this);}
};
struct UnknownGenObject80218510_0 : UnknownGenRoot80218510 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80218510_0(){unknown00=lbl_804BCA64;}
};
struct UnknownGenObject80218510_1 : UnknownGenObject80218510_0 {
 inline ~UnknownGenObject80218510_1(){unknown00=lbl_804BC70C;}
};
struct UnknownGenObject80218510 : UnknownGenObject80218510_1 {
 char unknown0C[36];
 inline ~UnknownGenObject80218510(){unknown00=lbl_804BC6B0;}
};
extern "C" {
void *fn_80218510(){
 UnknownGenObject80218510 object;
 object.unknown00=lbl_804BCA64;
 object.unknown08.value=0;
 object.unknown00=lbl_804BC70C;
 object.unknown00=lbl_804BC6B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
