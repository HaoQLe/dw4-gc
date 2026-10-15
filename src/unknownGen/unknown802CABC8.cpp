#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlHITBOX_vtable[];
}
struct UnknownGenRoot802CABC8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CABC8(){igObject_construct(this);}
};
struct UnknownGenObject802CABC8_0 : UnknownGenRoot802CABC8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CABC8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CABC8 : UnknownGenObject802CABC8_0 {
 char unknown0C[36];
 inline ~UnknownGenObject802CABC8(){unknown00=beModelCtrlHITBOX_vtable;}
};
extern "C" {
void *beModelCtrlHITBOX_vtableRead(){
 UnknownGenObject802CABC8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlHITBOX_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
