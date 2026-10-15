#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beFile_vtable[];
}
struct UnknownGenObject802DACF8_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *beFile_vtableRead(){
 UnknownGenObject802DACF8_0 object;
 fn_8006665C(&object);
 object.unknown00=beFile_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
