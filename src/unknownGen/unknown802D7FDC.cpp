#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D6624[];
}
struct UnknownGenRoot802D7FDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D7FDC(){fn_8006665C(this);}
};
struct UnknownGenObject802D7FDC_0 : UnknownGenRoot802D7FDC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D7FDC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D7FDC : UnknownGenObject802D7FDC_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802D7FDC(){unknown00=lbl_804D6624;}
};
extern "C" {
void *beGeneraterItemData_vtableRead(){
 UnknownGenObject802D7FDC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D6624;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
