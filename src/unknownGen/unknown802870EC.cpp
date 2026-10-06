#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80497C9C[];
extern char lbl_804CBDE8[];
}
struct UnknownGenRoot802870EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802870EC(){fn_8006665C(this);}
};
struct UnknownGenObject802870EC_0 : UnknownGenRoot802870EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject802870EC_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject802870EC : UnknownGenObject802870EC_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802870EC(){unknown00=lbl_804CBDE8;}
};
extern "C" {
void *fn_802870EC(){
 UnknownGenObject802870EC object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBDE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
