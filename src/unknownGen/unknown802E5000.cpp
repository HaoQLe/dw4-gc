#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beActionStarterData_vtable[];
}
struct UnknownGenRoot802E5000 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E5000(){fn_8006665C(this);}
};
struct UnknownGenObject802E5000_0 : UnknownGenRoot802E5000 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E5000_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E5000 : UnknownGenObject802E5000_0 {
 UnknownGenString unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject802E5000(){unknown00=beActionStarterData_vtable;}
};
extern "C" {
void *beActionStarterData_vtableRead(){
 UnknownGenObject802E5000 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beActionStarterData_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
