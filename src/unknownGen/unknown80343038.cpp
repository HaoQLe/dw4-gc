#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char lbl_804E4990[];
extern char lbl_804E49FC[];
extern char lbl_804E4A68[];
extern char beNDMWItemBlueArmor_vtable[];
}
struct UnknownGenObject80343038_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *beNDMWItemBlueArmor_vtableRead(){
 UnknownGenObject80343038_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804E4A68;
 object.unknown00=lbl_804E49FC;
 object.unknown00=lbl_804E4990;
 object.unknown00=beNDMWItemBlueArmor_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
