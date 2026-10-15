#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlMOVERL_vtable[];
}
struct UnknownGenRoot802CB56C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CB56C(){fn_8006665C(this);}
};
struct UnknownGenObject802CB56C_0 : UnknownGenRoot802CB56C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CB56C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CB56C : UnknownGenObject802CB56C_0 {
 UnknownGenString unknown0C;
 UnknownGenString unknown10;
 char unknown14[4];
 inline ~UnknownGenObject802CB56C(){unknown00=beModelCtrlMOVERL_vtable;}
};
extern "C" {
void *beModelCtrlMOVERL_vtableRead(){
 UnknownGenObject802CB56C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlMOVERL_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
