#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char bePlaySE_vtable[];
}
struct UnknownGenObject802B94E8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *bePlaySE_vtableRead(){
 UnknownGenObject802B94E8_0 object;
 fn_8006665C(&object);
 object.unknown00=bePlaySE_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
