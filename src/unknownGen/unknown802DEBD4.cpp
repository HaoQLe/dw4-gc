#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char beCriHandleList_vtable[];
extern char lbl_804D5074[];
}
struct UnknownGenObject802DEBD4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beCriHandleList_vtableRead(){
 UnknownGenObject802DEBD4_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804D5074;
 object.unknown00=beCriHandleList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
