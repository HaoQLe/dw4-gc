#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beSelectCtrlInfoWork_vtable[];
}
struct UnknownGenRoot802BA69C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BA69C(){igObject_construct(this);}
};
struct UnknownGenObject802BA69C : UnknownGenRoot802BA69C {
 char unknown04[24];
 UnknownGenString unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject802BA69C(){unknown00=beSelectCtrlInfoWork_vtable;}
};
extern "C" {
void *beSelectCtrlInfoWork_vtableRead(){
 UnknownGenObject802BA69C object;
 object.unknown00=beSelectCtrlInfoWork_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
