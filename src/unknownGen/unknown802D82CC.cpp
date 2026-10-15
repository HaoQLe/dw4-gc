#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char beGeneraterItemDataOneList_vtable[];
extern char lbl_804D65A4[];
}
struct UnknownGenObject802D82CC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beGeneraterItemDataOneList_vtableRead(){
 UnknownGenObject802D82CC_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804D65A4;
 object.unknown00=beGeneraterItemDataOneList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
