#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804F18F0[];
}
struct UnknownGenRoot804067F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot804067F4(){fn_8006665C(this);}
};
struct UnknownGenObject804067F4_0 : UnknownGenRoot804067F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject804067F4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject804067F4_1 : UnknownGenObject804067F4_0 {
 inline ~UnknownGenObject804067F4_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject804067F4 : UnknownGenObject804067F4_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject804067F4(){unknown00=lbl_804F18F0;}
};
extern "C" {
void *fn_804067F4(){
 UnknownGenObject804067F4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804F18F0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
