#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char beBaseInfoRamList_vtable[];
extern char lbl_804D4644[];
}
struct UnknownGenObject802E3000_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beBaseInfoRamList_vtableRead(){
 UnknownGenObject802E3000_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804D4644;
 object.unknown00=beBaseInfoRamList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
