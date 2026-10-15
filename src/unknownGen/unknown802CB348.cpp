#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlPDMOVE_vtable[];
}
struct UnknownGenRoot802CB348 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CB348(){igObject_construct(this);}
};
struct UnknownGenObject802CB348_0 : UnknownGenRoot802CB348 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CB348_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CB348 : UnknownGenObject802CB348_0 {
 char unknown0C[20];
 inline ~UnknownGenObject802CB348(){unknown00=beModelCtrlPDMOVE_vtable;}
};
extern "C" {
void *beModelCtrlPDMOVE_vtableRead(){
 UnknownGenObject802CB348 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlPDMOVE_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
