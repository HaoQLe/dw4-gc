#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beCountry_vtable[];
}
struct UnknownGenObject802E0264_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *beCountry_vtableRead(){
 UnknownGenObject802E0264_0 object;
 igObject_construct(&object);
 object.unknown00=beCountry_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
