#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlMOVE_vtable[];
}
struct UnknownGenRoot802CBA3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CBA3C(){igObject_construct(this);}
};
struct UnknownGenObject802CBA3C_0 : UnknownGenRoot802CBA3C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CBA3C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CBA3C : UnknownGenObject802CBA3C_0 {
 char unknown0C[20];
 inline ~UnknownGenObject802CBA3C(){unknown00=beModelCtrlMOVE_vtable;}
};
extern "C" {
void *beModelCtrlMOVE_vtableRead(){
 UnknownGenObject802CBA3C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlMOVE_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
