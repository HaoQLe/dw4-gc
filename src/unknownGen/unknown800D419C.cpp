#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_80493538[];
}
struct UnknownGenRoot800D419C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D419C(){fn_8006665C(this);}
};
struct UnknownGenObject800D419C_0 : UnknownGenRoot800D419C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D419C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D419C : UnknownGenObject800D419C_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800D419C(){unknown00=lbl_80493538;}
};
extern "C" {
void *fn_800D419C(){
 UnknownGenObject800D419C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493538;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
