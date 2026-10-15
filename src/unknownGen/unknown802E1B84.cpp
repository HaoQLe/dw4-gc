#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beCameraDemoData_vtable[];
}
struct UnknownGenRoot802E1B84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E1B84(){igObject_construct(this);}
};
struct UnknownGenObject802E1B84 : UnknownGenRoot802E1B84 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject802E1B84(){unknown00=beCameraDemoData_vtable;}
};
extern "C" {
void *beCameraDemoData_vtableRead(){
 UnknownGenObject802E1B84 object;
 object.unknown00=beCameraDemoData_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
