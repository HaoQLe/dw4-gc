#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlAIMAP_vtable[];
}
struct UnknownGenRoot802CB010 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CB010(){igObject_construct(this);}
};
struct UnknownGenObject802CB010_0 : UnknownGenRoot802CB010 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CB010_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CB010 : UnknownGenObject802CB010_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CB010(){unknown00=beModelCtrlAIMAP_vtable;}
};
extern "C" {
void *beModelCtrlAIMAP_vtableRead(){
 UnknownGenObject802CB010 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlAIMAP_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
