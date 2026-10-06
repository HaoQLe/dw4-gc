#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80497724[];
extern char lbl_804CBEB4[];
}
struct UnknownGenObject80286620_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80286620(){
 UnknownGenObject80286620_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80497724;
 object.unknown00=lbl_804CBEB4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
