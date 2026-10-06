#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CB98C[];
}
struct UnknownGenRoot802848C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802848C0(){fn_8006665C(this);}
};
struct UnknownGenObject802848C0 : UnknownGenRoot802848C0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802848C0(){unknown00=lbl_804CB98C;}
};
extern "C" {
void *fn_802848C0(){
 UnknownGenObject802848C0 object;
 object.unknown00=lbl_804CB98C;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
