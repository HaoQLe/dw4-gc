#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_8049402C[];
}
struct UnknownGenRoot800CF970 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF970(){fn_8006665C(this);}
};
struct UnknownGenObject800CF970_0 : UnknownGenRoot800CF970 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF970_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CF970 : UnknownGenObject800CF970_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject800CF970(){unknown00=lbl_8049402C;}
};
extern "C" {
void *fn_800CF970(){
 UnknownGenObject800CF970 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_8049402C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
