#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DB0B8[];
}
struct UnknownGenObject802BCF3C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802BCF3C(){
 UnknownGenObject802BCF3C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804DB0B8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
