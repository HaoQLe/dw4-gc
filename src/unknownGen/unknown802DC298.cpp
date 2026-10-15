#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beDataObjFloatList_vtable[];
}
struct UnknownGenRoot802DC298 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DC298(){igObject_construct(this);}
};
struct UnknownGenObject802DC298_0 : UnknownGenRoot802DC298 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DC298_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DC298 : UnknownGenObject802DC298_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802DC298(){unknown00=beDataObjFloatList_vtable;}
};
extern "C" {
void *beDataObjFloatList_vtableRead(){
 UnknownGenObject802DC298 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beDataObjFloatList_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
