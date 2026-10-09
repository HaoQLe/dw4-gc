#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DAE38[];
extern char lbl_804DAE94[];
}
struct UnknownGenObject802BF9E0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beSvSlotPS2_vtableRead(){
 UnknownGenObject802BF9E0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804DAE94;
 object.unknown00=lbl_804DAE38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
