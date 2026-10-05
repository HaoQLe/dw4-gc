#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D4E54[];
}
struct UnknownGenObject802DF460 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *fn_802DF460(){
 UnknownGenObject802DF460 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804D4E54;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
