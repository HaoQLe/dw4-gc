#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047A704[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800AC3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AC3B8(){fn_8006665C(this);}
};
struct UnknownGenObject800AC3B8 : UnknownGenRoot800AC3B8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AC3B8(){unknown00=lbl_8047A704;}
};
extern "C" {
void *fn_800AC3B8(){
 UnknownGenObject800AC3B8 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A704;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
