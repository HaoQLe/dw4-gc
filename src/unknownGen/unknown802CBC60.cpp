#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlMSGBOX_vtable[];
}
struct UnknownGenRoot802CBC60 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CBC60(){fn_8006665C(this);}
};
struct UnknownGenObject802CBC60_0 : UnknownGenRoot802CBC60 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CBC60_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CBC60 : UnknownGenObject802CBC60_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CBC60(){unknown00=beModelCtrlMSGBOX_vtable;}
};
extern "C" {
void *beModelCtrlMSGBOX_vtableRead(){
 UnknownGenObject802CBC60 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlMSGBOX_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
