#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlACTION_vtable[];
}
struct UnknownGenRoot802CC134 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CC134(){fn_8006665C(this);}
};
struct UnknownGenObject802CC134_0 : UnknownGenRoot802CC134 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CC134_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CC134 : UnknownGenObject802CC134_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CC134(){unknown00=beModelCtrlACTION_vtable;}
};
extern "C" {
void *beModelCtrlACTION_vtableRead(){
 UnknownGenObject802CC134 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlACTION_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
