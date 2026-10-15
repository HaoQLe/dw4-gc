#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlJUMP_vtable[];
}
struct UnknownGenRoot802CBF98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CBF98(){fn_8006665C(this);}
};
struct UnknownGenObject802CBF98_0 : UnknownGenRoot802CBF98 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CBF98_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CBF98 : UnknownGenObject802CBF98_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CBF98(){unknown00=beModelCtrlJUMP_vtable;}
};
extern "C" {
void *beModelCtrlJUMP_vtableRead(){
 UnknownGenObject802CBF98 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlJUMP_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
