#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igAdx_vtable[];
}
struct UnknownGenObject802AA808_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *igAdx_vtableRead(){
 UnknownGenObject802AA808_0 object;
 igObject_construct(&object);
 object.unknown00=igAdx_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
