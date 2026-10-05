#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804CE240[];
extern char lbl_804CE2A4[];
}
struct UnknownGenObject802AB9C8 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802AB9C8(){
 UnknownGenObject802AB9C8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CE2A4;
 object.unknown00=lbl_804CE240;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
