#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char beAction2InfoList_vtable[];
extern char lbl_804D3B44[];
}
struct UnknownGenObject802E5D24_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beAction2InfoList_vtableRead(){
 UnknownGenObject802E5D24_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804D3B44;
 object.unknown00=beAction2InfoList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
