#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80495AD8[];
extern char lbl_804965F8[];
}
struct UnknownGenRoot801128D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801128D4(){fn_8006665C(this);}
};
struct UnknownGenObject801128D4 : UnknownGenRoot801128D4 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801128D4(){unknown00=lbl_804965F8;}
};
extern "C" {
void *fn_801128D4(){
 UnknownGenObject801128D4 object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_804965F8;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
