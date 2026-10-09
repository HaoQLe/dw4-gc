#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E4A68[];
extern char lbl_804EE1D8[];
}
struct UnknownGenObject803426D8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beNDMWItemImportant_vtableRead(){
 UnknownGenObject803426D8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804E4A68;
 object.unknown00=lbl_804EE1D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
