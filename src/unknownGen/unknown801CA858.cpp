#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B644C[];
}
struct UnknownGenRoot801CA858 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CA858(){fn_8006665C(this);}
};
struct UnknownGenObject801CA858 : UnknownGenRoot801CA858 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject801CA858(){unknown00=lbl_804B644C;}
};
extern "C" {
void *fn_801CA858(){
 UnknownGenObject801CA858 object;
 object.unknown00=lbl_804B644C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
