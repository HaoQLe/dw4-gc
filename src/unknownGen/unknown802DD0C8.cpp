#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beDataObjBool_vtable[];
}
struct UnknownGenRoot802DD0C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DD0C8(){igObject_construct(this);}
};
struct UnknownGenObject802DD0C8_0 : UnknownGenRoot802DD0C8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DD0C8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DD0C8 : UnknownGenObject802DD0C8_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802DD0C8(){unknown00=beDataObjBool_vtable;}
};
extern "C" {
void *beDataObjBool_vtableRead(){
 UnknownGenObject802DD0C8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beDataObjBool_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
