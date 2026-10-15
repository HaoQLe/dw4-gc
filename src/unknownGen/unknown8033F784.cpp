#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beNDMWLoadSavePlWork_vtable[];
}
struct UnknownGenObject8033F784_0 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *beNDMWLoadSavePlWork_vtableRead(){
 UnknownGenObject8033F784_0 object;
 igObject_construct(&object);
 object.unknown00=beNDMWLoadSavePlWork_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
