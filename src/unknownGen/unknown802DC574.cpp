#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beDataObjObjectList_vtable[];
}
struct UnknownGenRoot802DC574 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DC574(){igObject_construct(this);}
};
struct UnknownGenObject802DC574_0 : UnknownGenRoot802DC574 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DC574_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DC574 : UnknownGenObject802DC574_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802DC574(){unknown00=beDataObjObjectList_vtable;}
};
extern "C" {
void *beDataObjObjectList_vtableRead(){
 UnknownGenObject802DC574 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beDataObjObjectList_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
