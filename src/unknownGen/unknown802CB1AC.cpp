#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlWCHECK_vtable[];
}
struct UnknownGenRoot802CB1AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CB1AC(){igObject_construct(this);}
};
struct UnknownGenObject802CB1AC_0 : UnknownGenRoot802CB1AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CB1AC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CB1AC : UnknownGenObject802CB1AC_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CB1AC(){unknown00=beModelCtrlWCHECK_vtable;}
};
extern "C" {
void *beModelCtrlWCHECK_vtableRead(){
 UnknownGenObject802CB1AC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlWCHECK_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
