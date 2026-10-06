#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80495AD8[];
extern char lbl_804F1C1C[];
}
struct UnknownGenObject804051D4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_804051D4(){
 UnknownGenObject804051D4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_804F1C1C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
