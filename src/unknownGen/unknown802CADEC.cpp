#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlMUTEKI_vtable[];
}
struct UnknownGenRoot802CADEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CADEC(){fn_8006665C(this);}
};
struct UnknownGenObject802CADEC_0 : UnknownGenRoot802CADEC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CADEC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CADEC : UnknownGenObject802CADEC_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CADEC(){unknown00=beModelCtrlMUTEKI_vtable;}
};
extern "C" {
void *beModelCtrlMUTEKI_vtableRead(){
 UnknownGenObject802CADEC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlMUTEKI_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
