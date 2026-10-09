#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D7BB0[];
}
struct UnknownGenRoot802D0EDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D0EDC(){fn_8006665C(this);}
};
struct UnknownGenObject802D0EDC_0 : UnknownGenRoot802D0EDC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D0EDC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D0EDC : UnknownGenObject802D0EDC_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802D0EDC(){unknown00=lbl_804D7BB0;}
};
extern "C" {
void *beMatCtrlData_vtableRead(){
 UnknownGenObject802D0EDC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D7BB0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
