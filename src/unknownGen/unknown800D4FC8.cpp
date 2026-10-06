#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_80493230[];
extern char lbl_80493290[];
}
struct UnknownGenRoot800D4FC8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D4FC8(){fn_8006665C(this);}
};
struct UnknownGenObject800D4FC8_0 : UnknownGenRoot800D4FC8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D4FC8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D4FC8_1 : UnknownGenObject800D4FC8_0 {
 inline ~UnknownGenObject800D4FC8_1(){unknown00=lbl_80493290;}
};
struct UnknownGenObject800D4FC8 : UnknownGenObject800D4FC8_1 {
 char unknown0C[20];
 inline ~UnknownGenObject800D4FC8(){unknown00=lbl_80493230;}
};
extern "C" {
void *fn_800D4FC8(){
 UnknownGenObject800D4FC8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493290;
 object.unknown00=lbl_80493230;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
