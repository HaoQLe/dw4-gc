#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlLABEL_vtable[];
}
struct UnknownGenRoot802CC53C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CC53C(){igObject_construct(this);}
};
struct UnknownGenObject802CC53C_0 : UnknownGenRoot802CC53C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CC53C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CC53C : UnknownGenObject802CC53C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CC53C(){unknown00=beModelCtrlLABEL_vtable;}
};
extern "C" {
void *beModelCtrlLABEL_vtableRead(){
 UnknownGenObject802CC53C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlLABEL_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
