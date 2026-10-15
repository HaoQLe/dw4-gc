#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char beNDMWAfsSetupDataList_vtable[];
extern char lbl_804E43C4[];
}
struct UnknownGenObject8034519C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beNDMWAfsSetupDataList_vtableRead(){
 UnknownGenObject8034519C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804E43C4;
 object.unknown00=beNDMWAfsSetupDataList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
