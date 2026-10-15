#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beMatCtrlInfoWork_vtable[];
}
struct UnknownGenRoot802CFEF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CFEF0(){fn_8006665C(this);}
};
struct UnknownGenObject802CFEF0 : UnknownGenRoot802CFEF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802CFEF0(){unknown00=beMatCtrlInfoWork_vtable;}
};
extern "C" {
void *beMatCtrlInfoWork_vtableRead(){
 UnknownGenObject802CFEF0 object;
 object.unknown00=beMatCtrlInfoWork_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
