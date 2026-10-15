#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beAsTargetModelData_vtable[];
}
struct UnknownGenRoot802E490C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E490C(){fn_8006665C(this);}
};
struct UnknownGenObject802E490C_0 : UnknownGenRoot802E490C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E490C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E490C : UnknownGenObject802E490C_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802E490C(){unknown00=beAsTargetModelData_vtable;}
};
extern "C" {
void *beAsTargetModelData_vtableRead(){
 UnknownGenObject802E490C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beAsTargetModelData_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
