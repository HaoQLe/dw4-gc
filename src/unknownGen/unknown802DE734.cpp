#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beCriVolume_vtable[];
}
struct UnknownGenObject802DE734_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *beCriVolume_vtableRead(){
 UnknownGenObject802DE734_0 object;
 igObject_construct(&object);
 object.unknown00=beCriVolume_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
