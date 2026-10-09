#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D6F5C[];
}
struct UnknownGenRoot802D5A94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D5A94(){fn_8006665C(this);}
};
struct UnknownGenObject802D5A94 : UnknownGenRoot802D5A94 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[84];
 inline ~UnknownGenObject802D5A94(){unknown00=lbl_804D6F5C;}
};
extern "C" {
void *beHitLandResultData_vtableRead(){
 UnknownGenObject802D5A94 object;
 object.unknown00=lbl_804D6F5C;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
