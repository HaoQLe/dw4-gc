#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beModelCtrlMoveObject_vtable[];
}
struct UnknownGenObject802C8668_0 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *beModelCtrlMoveObject_vtableRead(){
 UnknownGenObject802C8668_0 object;
 fn_8006665C(&object);
 object.unknown00=beModelCtrlMoveObject_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
