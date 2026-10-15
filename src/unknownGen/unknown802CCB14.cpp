#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlData_vtable[];
}
struct UnknownGenRoot802CCB14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CCB14(){igObject_construct(this);}
};
struct UnknownGenObject802CCB14_0 : UnknownGenRoot802CCB14 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CCB14_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CCB14 : UnknownGenObject802CCB14_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802CCB14(){unknown00=beModelCtrlData_vtable;}
};
extern "C" {
void *beModelCtrlData_vtableRead(){
 UnknownGenObject802CCB14 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlData_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
