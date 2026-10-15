#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beXboxImage24k_vtable[];
}
struct UnknownGenObject802BC81C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beXboxImage24k_vtableRead(){
 UnknownGenObject802BC81C_0 object;
 igObject_construct(&object);
 object.unknown00=beXboxImage24k_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
