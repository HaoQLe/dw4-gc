#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beNumVerData_vtable[];
}
struct UnknownGenRoot802C34E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C34E4(){igObject_construct(this);}
};
struct UnknownGenObject802C34E4 : UnknownGenRoot802C34E4 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802C34E4(){unknown00=beNumVerData_vtable;}
};
extern "C" {
void *beNumVerData_vtableRead(){
 UnknownGenObject802C34E4 object;
 object.unknown00=beNumVerData_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
