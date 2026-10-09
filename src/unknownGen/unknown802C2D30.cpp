#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DA764[];
}
struct UnknownGenObject802C2D30_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beNumberCtrlInfoWork_vtableRead(){
 UnknownGenObject802C2D30_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804DA764;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
