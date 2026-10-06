#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A9B8C[];
extern char lbl_804A9C44[];
}
struct UnknownGenRoot801441F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801441F0(){fn_8006665C(this);}
};
struct UnknownGenObject801441F0 : UnknownGenRoot801441F0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801441F0(){unknown00=lbl_804A9B8C;}
};
extern "C" {
void *fn_801441F0(){
 UnknownGenObject801441F0 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9B8C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
