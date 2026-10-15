#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlCTRL_vtable[];
}
struct UnknownGenRoot802CBDFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CBDFC(){igObject_construct(this);}
};
struct UnknownGenObject802CBDFC_0 : UnknownGenRoot802CBDFC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CBDFC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CBDFC : UnknownGenObject802CBDFC_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CBDFC(){unknown00=beModelCtrlCTRL_vtable;}
};
extern "C" {
void *beModelCtrlCTRL_vtableRead(){
 UnknownGenObject802CBDFC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlCTRL_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
