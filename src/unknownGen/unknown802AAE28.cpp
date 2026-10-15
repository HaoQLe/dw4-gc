#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igFileNameList_vtable[];
extern char lbl_804CE3CC[];
}
struct UnknownGenObject802AAE28_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igFileNameList_vtableRead(){
 UnknownGenObject802AAE28_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804CE3CC;
 object.unknown00=igFileNameList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
