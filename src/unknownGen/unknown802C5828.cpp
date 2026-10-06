#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D9E80[];
extern char lbl_804DF050[];
}
struct UnknownGenObject802C5828_0 {
 void *unknown00;
 char unknown04[68];
};
extern "C" {
void *fn_802C5828(){
 UnknownGenObject802C5828_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804D9E80;
 object.unknown00=lbl_804DF050;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
