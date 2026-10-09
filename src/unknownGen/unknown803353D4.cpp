#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E64BC[];
}
struct UnknownGenRoot803353D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot803353D4(){fn_8006665C(this);}
};
struct UnknownGenObject803353D4 : UnknownGenRoot803353D4 {
 char unknown04[8];
 UnknownGenString unknown0C;
 UnknownGenString unknown10;
 char unknown14[12];
 inline ~UnknownGenObject803353D4(){unknown00=lbl_804E64BC;}
};
extern "C" {
void *beSaveIntfComMdlData_vtableRead(){
 UnknownGenObject803353D4 object;
 object.unknown00=lbl_804E64BC;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
