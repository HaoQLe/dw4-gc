#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E1008[];
}
struct UnknownGenObject802C00E4 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802C00E4(){
 UnknownGenObject802C00E4 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804E1008;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
