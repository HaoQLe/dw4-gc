#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beDataObjString_vtable[];
}
struct UnknownGenRoot802DCB2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DCB2C(){igObject_construct(this);}
};
struct UnknownGenObject802DCB2C_0 : UnknownGenRoot802DCB2C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DCB2C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DCB2C : UnknownGenObject802DCB2C_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject802DCB2C(){unknown00=beDataObjString_vtable;}
};
extern "C" {
void *beDataObjString_vtableRead(){
 UnknownGenObject802DCB2C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beDataObjString_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
