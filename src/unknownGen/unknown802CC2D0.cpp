#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D8C48[];
}
struct UnknownGenRoot802CC2D0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CC2D0(){fn_8006665C(this);}
};
struct UnknownGenObject802CC2D0_0 : UnknownGenRoot802CC2D0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CC2D0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CC2D0 : UnknownGenObject802CC2D0_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject802CC2D0(){unknown00=lbl_804D8C48;}
};
extern "C" {
void *beModelCtrlLABELCTRL_vtableRead(){
 UnknownGenObject802CC2D0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D8C48;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
