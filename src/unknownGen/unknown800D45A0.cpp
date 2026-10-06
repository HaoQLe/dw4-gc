#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_80493414[];
}
struct UnknownGenRoot800D45A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D45A0(){fn_8006665C(this);}
};
struct UnknownGenObject800D45A0_0 : UnknownGenRoot800D45A0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D45A0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D45A0 : UnknownGenObject800D45A0_0 {
 char unknown0C[20];
 inline ~UnknownGenObject800D45A0(){unknown00=lbl_80493414;}
};
extern "C" {
void *fn_800D45A0(){
 UnknownGenObject800D45A0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493414;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
