#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beNumVerInsideData_vtable[];
}
struct UnknownGenObject802C394C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beNumVerInsideData_vtableRead(){
 UnknownGenObject802C394C_0 object;
 igObject_construct(&object);
 object.unknown00=beNumVerInsideData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
