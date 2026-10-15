#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beDataObjStringList_vtable[];
}
struct UnknownGenRoot802DC850 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DC850(){igObject_construct(this);}
};
struct UnknownGenObject802DC850_0 : UnknownGenRoot802DC850 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DC850_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DC850 : UnknownGenObject802DC850_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802DC850(){unknown00=beDataObjStringList_vtable;}
};
extern "C" {
void *beDataObjStringList_vtableRead(){
 UnknownGenObject802DC850 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beDataObjStringList_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
