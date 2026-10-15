#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char bePadData_vtable[];
}
struct UnknownGenObject802C2794_0 {
 void *unknown00;
 char unknown04[100];
};
extern "C" {
void *bePadData_vtableRead(){
 UnknownGenObject802C2794_0 object;
 igObject_construct(&object);
 object.unknown00=bePadData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
