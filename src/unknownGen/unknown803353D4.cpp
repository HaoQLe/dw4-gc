#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beSaveIntfComMdlData_vtable[];
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
 inline ~UnknownGenObject803353D4(){unknown00=beSaveIntfComMdlData_vtable;}
};
extern "C" {
void *beSaveIntfComMdlData_vtableRead(){
 UnknownGenObject803353D4 object;
 object.unknown00=beSaveIntfComMdlData_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
