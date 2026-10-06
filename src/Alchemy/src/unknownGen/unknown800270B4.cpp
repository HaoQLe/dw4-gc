#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80476724[];
}
struct UnknownGenRoot800270B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800270B4(){fn_8006665C(this);}
};
struct UnknownGenObject800270B4 : UnknownGenRoot800270B4 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800270B4(){unknown00=lbl_80476724;}
};
extern "C" {
void *fn_800270B4(){
 UnknownGenObject800270B4 object;
 object.unknown00=lbl_80476724;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
