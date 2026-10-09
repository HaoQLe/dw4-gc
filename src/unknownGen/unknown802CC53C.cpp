#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D8BD0[];
}
struct UnknownGenRoot802CC53C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CC53C(){fn_8006665C(this);}
};
struct UnknownGenObject802CC53C_0 : UnknownGenRoot802CC53C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CC53C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CC53C : UnknownGenObject802CC53C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CC53C(){unknown00=lbl_804D8BD0;}
};
extern "C" {
void *beModelCtrlLABEL_vtableRead(){
 UnknownGenObject802CC53C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D8BD0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
