#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E49FC[];
extern char lbl_804E4A68[];
extern char lbl_804EE41C[];
}
struct UnknownGenObject80342E8C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80342E8C(){
 UnknownGenObject80342E8C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804E4A68;
 object.unknown00=lbl_804E49FC;
 object.unknown00=lbl_804EE41C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
