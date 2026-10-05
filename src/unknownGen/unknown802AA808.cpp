#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CD7E0[];
}
struct UnknownGenObject802AA808 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_802AA808(){
 UnknownGenObject802AA808 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804CD7E0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
