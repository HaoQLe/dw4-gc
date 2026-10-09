#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804D7E04[];
extern char lbl_804D7E68[];
}
struct UnknownGenObject802D08D4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beMatCtrlSearchList_vtableRead(){
 UnknownGenObject802D08D4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804D7E68;
 object.unknown00=lbl_804D7E04;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
