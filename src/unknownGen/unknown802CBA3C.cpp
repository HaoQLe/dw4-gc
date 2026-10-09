#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D8EA0[];
}
struct UnknownGenRoot802CBA3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CBA3C(){fn_8006665C(this);}
};
struct UnknownGenObject802CBA3C_0 : UnknownGenRoot802CBA3C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CBA3C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CBA3C : UnknownGenObject802CBA3C_0 {
 char unknown0C[20];
 inline ~UnknownGenObject802CBA3C(){unknown00=lbl_804D8EA0;}
};
extern "C" {
void *beModelCtrlMOVE_vtableRead(){
 UnknownGenObject802CBA3C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D8EA0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
