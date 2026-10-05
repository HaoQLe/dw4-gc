#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496CB8[];
extern char lbl_804F1AE0[];
}
struct UnknownGenObject80403A14 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80403A14(){
 UnknownGenObject80403A14 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80496CB8;
 object.unknown00=lbl_804F1AE0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
