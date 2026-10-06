#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804764B0[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot800282D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800282D4(){fn_8006665C(this);}
};
struct UnknownGenObject800282D4_0 : UnknownGenRoot800282D4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800282D4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800282D4 : UnknownGenObject800282D4_0 {
 UnknownGenString unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800282D4(){unknown00=lbl_804764B0;}
};
extern "C" {
void *fn_800282D4(){
 UnknownGenObject800282D4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804764B0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
