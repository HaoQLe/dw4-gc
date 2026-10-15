#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beNDMWMcSlotGC_vtable[];
extern char lbl_804E5334[];
}
struct UnknownGenObject8033FE2C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *beNDMWMcSlotGC_vtableRead(){
 UnknownGenObject8033FE2C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804E5334;
 object.unknown00=beNDMWMcSlotGC_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
