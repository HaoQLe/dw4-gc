#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beSvSlotPS2_vtable[];
extern char lbl_804DAE94[];
}
struct UnknownGenObject802BF9E0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beSvSlotPS2_vtableRead(){
 UnknownGenObject802BF9E0_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804DAE94;
 object.unknown00=beSvSlotPS2_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
