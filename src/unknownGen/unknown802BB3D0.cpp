#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DB46C[];
}
struct UnknownGenRoot802BB3D0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BB3D0(){fn_8006665C(this);}
};
struct UnknownGenObject802BB3D0_0 : UnknownGenRoot802BB3D0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802BB3D0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802BB3D0 : UnknownGenObject802BB3D0_0 {
 UnknownGenString unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject802BB3D0(){unknown00=lbl_804DB46C;}
};
extern "C" {
void *beSeData_vtableRead(){
 UnknownGenObject802BB3D0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DB46C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
