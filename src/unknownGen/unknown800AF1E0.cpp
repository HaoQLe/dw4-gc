#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047AF6C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenRoot800AF1E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF1E0(){fn_8006665C(this);}
};
struct UnknownGenObject800AF1E0 : UnknownGenRoot800AF1E0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800AF1E0(){unknown00=lbl_8047AF6C;}
};
extern "C" {
void *fn_800AF1E0(){
 UnknownGenObject800AF1E0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AF6C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
