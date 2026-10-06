#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047E978[];
extern char lbl_8047EA3C[];
}
struct UnknownGenRoot800C71A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800C71A8(){fn_8006665C(this);}
};
struct UnknownGenObject800C71A8 : UnknownGenRoot800C71A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject800C71A8(){unknown00=lbl_8047E978;}
};
extern "C" {
void *fn_800C71A8(){
 UnknownGenObject800C71A8 object;
 object.unknown00=lbl_8047EA3C;
 object.unknown00=lbl_8047E978;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
