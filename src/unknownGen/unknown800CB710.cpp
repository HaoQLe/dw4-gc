#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80480440[];
extern char lbl_804804E8[];
}
struct UnknownGenRoot800CB710 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CB710(){fn_8006665C(this);}
};
struct UnknownGenObject800CB710_0 : UnknownGenRoot800CB710 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800CB710_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject800CB710 : UnknownGenObject800CB710_0 {
 char unknown0C[68];
 inline ~UnknownGenObject800CB710(){unknown00=lbl_804804E8;}
};
extern "C" {
void *fn_800CB710(){
 UnknownGenObject800CB710 object;
 object.unknown00=lbl_80480440;
 object.unknown08.value=0;
 object.unknown00=lbl_804804E8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
