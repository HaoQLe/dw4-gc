#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beNDMWLoadIntf2DegiState_vtable[];
}
struct UnknownGenObject8033DCAC_0 {
 void *unknown00;
 char unknown04[68];
};
extern "C" {
void *beNDMWLoadIntf2DegiState_vtableRead(){
 UnknownGenObject8033DCAC_0 object;
 fn_8006665C(&object);
 object.unknown00=beNDMWLoadIntf2DegiState_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
