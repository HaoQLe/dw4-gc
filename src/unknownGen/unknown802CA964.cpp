#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlAIData_vtable[];
}
struct UnknownGenRoot802CA964 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CA964(){fn_8006665C(this);}
};
struct UnknownGenObject802CA964_0 : UnknownGenRoot802CA964 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CA964_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CA964 : UnknownGenObject802CA964_0 {
 char unknown0C[20];
 inline ~UnknownGenObject802CA964(){unknown00=beModelCtrlAIData_vtable;}
};
extern "C" {
void *beModelCtrlAIData_vtableRead(){
 UnknownGenObject802CA964 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlAIData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
