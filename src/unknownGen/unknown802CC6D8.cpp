#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlLUACALL_vtable[];
}
struct UnknownGenRoot802CC6D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CC6D8(){igObject_construct(this);}
};
struct UnknownGenObject802CC6D8_0 : UnknownGenRoot802CC6D8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CC6D8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CC6D8 : UnknownGenObject802CC6D8_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject802CC6D8(){unknown00=beModelCtrlLUACALL_vtable;}
};
extern "C" {
void *beModelCtrlLUACALL_vtableRead(){
 UnknownGenObject802CC6D8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlLUACALL_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
