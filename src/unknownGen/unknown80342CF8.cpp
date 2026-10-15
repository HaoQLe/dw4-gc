#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char lbl_804E4A68[];
extern char beNDMWItemAbilityChip_vtable[];
}
struct UnknownGenObject80342CF8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beNDMWItemAbilityChip_vtableRead(){
 UnknownGenObject80342CF8_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804E4A68;
 object.unknown00=beNDMWItemAbilityChip_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
