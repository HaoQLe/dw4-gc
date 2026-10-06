#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80495DC0[];
extern char lbl_80497C9C[];
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){fn_8006665C(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=lbl_80495DC0;}
};
extern "C" {
void *fn_8010DE3C(){
 UnknownGenObject8010DE3C object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=lbl_80495DC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
