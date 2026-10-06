#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D51D0[];
}
struct UnknownGenObject802DE734_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_802DE734(){
 UnknownGenObject802DE734_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804D51D0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
