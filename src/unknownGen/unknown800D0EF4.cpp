#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80492640[];
}
struct UnknownGenRoot800D0EF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D0EF4(){fn_8006665C(this);}
};
struct UnknownGenObject800D0EF4 : UnknownGenRoot800D0EF4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[28];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[16];
 UnknownGenRefMember unknown44;
 char unknown48[24];
 inline ~UnknownGenObject800D0EF4(){unknown00=lbl_80492640;}
};
extern "C" {
void *fn_800D0EF4(){
 UnknownGenObject800D0EF4 object;
 object.unknown00=lbl_80492640;
 object.unknown08.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
