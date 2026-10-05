#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CBB90[];
}
struct UnknownGenObject80284B04 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_80284B04(){
 UnknownGenObject80284B04 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804CBB90;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
