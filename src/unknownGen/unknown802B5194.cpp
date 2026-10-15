#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beUnicode_vtable[];
}
struct UnknownGenObject802B5194_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *beUnicode_vtableRead(){
 UnknownGenObject802B5194_0 object;
 igObject_construct(&object);
 object.unknown00=beUnicode_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
