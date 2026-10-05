#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D4C58[];
}
struct UnknownGenObject802E0264 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_802E0264(){
 UnknownGenObject802E0264 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804D4C58;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
