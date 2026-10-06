#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_8049233C[];
}
struct UnknownGenRoot800CEF6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CEF6C(){fn_8006665C(this);}
};
struct UnknownGenObject800CEF6C_0 : UnknownGenRoot800CEF6C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CEF6C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CEF6C : UnknownGenObject800CEF6C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800CEF6C(){unknown00=lbl_8049233C;}
};
extern "C" {
void *fn_800CEF6C(){
 UnknownGenObject800CEF6C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_8049233C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
