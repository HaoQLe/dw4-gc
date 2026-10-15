#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beAction2JOINTSET_vtable[];
}
struct UnknownGenRoot802E685C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E685C(){igObject_construct(this);}
};
struct UnknownGenObject802E685C_0 : UnknownGenRoot802E685C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E685C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E685C : UnknownGenObject802E685C_0 {
 char unknown0C[8];
 UnknownGenString unknown14;
 char unknown18[8];
 inline ~UnknownGenObject802E685C(){unknown00=beAction2JOINTSET_vtable;}
};
extern "C" {
void *beAction2JOINTSET_vtableRead(){
 UnknownGenObject802E685C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beAction2JOINTSET_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
