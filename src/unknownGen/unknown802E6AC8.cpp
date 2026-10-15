#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beAction2MOTIONSET_vtable[];
}
struct UnknownGenRoot802E6AC8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E6AC8(){igObject_construct(this);}
};
struct UnknownGenObject802E6AC8_0 : UnknownGenRoot802E6AC8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E6AC8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E6AC8 : UnknownGenObject802E6AC8_0 {
 UnknownGenString unknown0C;
 char unknown10[4];
 UnknownGenString unknown14;
 inline ~UnknownGenObject802E6AC8(){unknown00=beAction2MOTIONSET_vtable;}
};
extern "C" {
void *beAction2MOTIONSET_vtableRead(){
 UnknownGenObject802E6AC8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beAction2MOTIONSET_vtable;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
