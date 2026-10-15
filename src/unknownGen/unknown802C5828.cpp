#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char lbl_804D9E80[];
extern char beModelCtrlSCHitBox_vtable[];
}
struct UnknownGenObject802C5828_0 {
 void *unknown00;
 char unknown04[68];
};
extern "C" {
void *beModelCtrlSCHitBox_vtableRead(){
 UnknownGenObject802C5828_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804D9E80;
 object.unknown00=beModelCtrlSCHitBox_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
