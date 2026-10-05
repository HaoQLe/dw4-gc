#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DACBC[];
}
struct UnknownGenObject802C0328 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802C0328(){
 UnknownGenObject802C0328 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804DACBC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
