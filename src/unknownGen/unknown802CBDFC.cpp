#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D8DB0[];
}
struct UnknownGenRoot802CBDFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CBDFC(){fn_8006665C(this);}
};
struct UnknownGenObject802CBDFC_0 : UnknownGenRoot802CBDFC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CBDFC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CBDFC : UnknownGenObject802CBDFC_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CBDFC(){unknown00=lbl_804D8DB0;}
};
extern "C" {
void *beModelCtrlCTRL_vtableRead(){
 UnknownGenObject802CBDFC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D8DB0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
