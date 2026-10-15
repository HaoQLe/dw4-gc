#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beNDMWAfsSetupData_vtable[];
}
struct UnknownGenRoot80345318 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80345318(){fn_8006665C(this);}
};
struct UnknownGenObject80345318_0 : UnknownGenRoot80345318 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80345318_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80345318 : UnknownGenObject80345318_0 {
 char unknown0C[4];
 inline ~UnknownGenObject80345318(){unknown00=beNDMWAfsSetupData_vtable;}
};
extern "C" {
void *beNDMWAfsSetupData_vtableRead(){
 UnknownGenObject80345318 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beNDMWAfsSetupData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
