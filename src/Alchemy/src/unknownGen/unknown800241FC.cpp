#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80470D7C[];
}
struct UnknownGenRoot800241FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800241FC(){fn_8006665C(this);}
};
struct UnknownGenObject800241FC : UnknownGenRoot800241FC {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject800241FC(){unknown00=lbl_80470D7C;}
};
extern "C" {
void *fn_800241FC(){
 UnknownGenObject800241FC object;
 object.unknown00=lbl_80470D7C;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
