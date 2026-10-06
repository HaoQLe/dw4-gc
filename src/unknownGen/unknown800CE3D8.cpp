#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80491D28[];
extern char lbl_80492AD0[];
}
struct UnknownGenRoot800CE3D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CE3D8(){fn_8006665C(this);}
};
struct UnknownGenObject800CE3D8 : UnknownGenRoot800CE3D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800CE3D8(){unknown00=lbl_80491D28;}
};
extern "C" {
void *fn_800CE3D8(){
 UnknownGenObject800CE3D8 object;
 object.unknown00=lbl_80492AD0;
 object.unknown00=lbl_80491D28;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
