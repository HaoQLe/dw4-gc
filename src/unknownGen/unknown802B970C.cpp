#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char beShadow01InfoList_vtable[];
extern char lbl_804DB9D4[];
}
struct UnknownGenObject802B970C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beShadow01InfoList_vtableRead(){
 UnknownGenObject802B970C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804DB9D4;
 object.unknown00=beShadow01InfoList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
