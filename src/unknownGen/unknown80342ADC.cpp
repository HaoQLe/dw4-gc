#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char lbl_804E4A68[];
extern char beNDMWItemDisk_vtable[];
}
struct UnknownGenObject80342ADC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beNDMWItemDisk_vtableRead(){
 UnknownGenObject80342ADC_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804E4A68;
 object.unknown00=beNDMWItemDisk_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
