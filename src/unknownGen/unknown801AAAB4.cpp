#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B326C[];
}
struct UnknownGenRoot801AAAB4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AAAB4(){fn_8006665C(this);}
};
struct UnknownGenObject801AAAB4 : UnknownGenRoot801AAAB4 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801AAAB4(){unknown00=lbl_804B326C;}
};
extern "C" {
void *fn_801AAAB4(){
 UnknownGenObject801AAAB4 object;
 object.unknown00=lbl_804B326C;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
