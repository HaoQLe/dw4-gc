#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DADC0[];
extern char lbl_804DAE94[];
}
struct UnknownGenObject802BFB44 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802BFB44(){
 UnknownGenObject802BFB44 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804DAE94;
 object.unknown00=lbl_804DADC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
