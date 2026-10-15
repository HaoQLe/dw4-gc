#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char beFontImageList_vtable[];
extern char lbl_804D61CC[];
}
struct UnknownGenObject802D9508_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beFontImageList_vtableRead(){
 UnknownGenObject802D9508_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804D61CC;
 object.unknown00=beFontImageList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
