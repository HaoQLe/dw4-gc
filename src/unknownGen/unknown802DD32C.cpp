#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beDataObjIntList_vtable[];
}
struct UnknownGenRoot802DD32C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DD32C(){igObject_construct(this);}
};
struct UnknownGenObject802DD32C_0 : UnknownGenRoot802DD32C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DD32C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DD32C : UnknownGenObject802DD32C_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802DD32C(){unknown00=beDataObjIntList_vtable;}
};
extern "C" {
void *beDataObjIntList_vtableRead(){
 UnknownGenObject802DD32C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beDataObjIntList_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
