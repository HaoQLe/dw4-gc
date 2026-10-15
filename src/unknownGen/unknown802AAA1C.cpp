#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAdxAfsFileList_vtable[];
extern char lbl_804CE5EC[];
}
struct UnknownGenObject802AAA1C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igAdxAfsFileList_vtableRead(){
 UnknownGenObject802AAA1C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804CE5EC;
 object.unknown00=igAdxAfsFileList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
