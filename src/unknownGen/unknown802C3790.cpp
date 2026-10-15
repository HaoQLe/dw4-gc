#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char beNumVerInsideDataList_vtable[];
extern char lbl_804DA4DC[];
}
struct UnknownGenObject802C3790_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beNumVerInsideDataList_vtableRead(){
 UnknownGenObject802C3790_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804DA4DC;
 object.unknown00=beNumVerInsideDataList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
