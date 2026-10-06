#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047BC70[];
extern char lbl_8047E058[];
}
struct UnknownGenRoot800B3798 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B3798(){fn_8006665C(this);}
};
struct UnknownGenObject800B3798 : UnknownGenRoot800B3798 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject800B3798(){unknown00=lbl_8047BC70;}
};
extern "C" {
void *fn_800B3798(){
 UnknownGenObject800B3798 object;
 object.unknown00=lbl_8047E058;
 object.unknown00=lbl_8047BC70;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
